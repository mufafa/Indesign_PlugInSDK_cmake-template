cmake_minimum_required(VERSION 3.0.0)
project(MySamplePlugin VERSION 0.1.0 )
#c++ standart
set(CMAKE_CXX_STANDARD 14)


set( TARGET MyInfoPlist) #plugin name
string(TOLOWER ${TARGET} genereted)


if (APPLE)
  set(PLATFORM "mac")
elseif(WIN)
  set(PLATFORM "win")
endif()


Set( INDESIGN_SDK "/Users/Shared/Adobe_SDKs/InDesign_2023_plugin_sdk_18.0.0.312" ) # SDK Path
Set( INDESIGN_LIB_LINK_FOLDER "${INDESIGN_SDK}/build/${PLATFORM}/release_cocoa64/packagefolder/contents/macos" ) # SDK Path
set( COMMON_FILES "${INDESIGN_SDK}/source/sdksamples/common") #sdk common folder
set( SOURCE_FOLDER "${CMAKE_SOURCE_DIR}/source") #plugin source files


#set all variables
include(cmake/EnvVariables.cmake)


message(${CMAKE_SOURCE_DIR})

add_library(${TARGET} SHARED 
  #commons
  ${COMMON_FILES}/SDKPlugInEntrypoint.cpp
  
  #pluging
    ${SOURCE_FOLDER}/${genereted}NoStrip.cpp
    ${SOURCE_FOLDER}/${genereted}ID.cpp
  
    # sourcefiles  
    ${SOURCE_FOLDER}/${genereted}ActionComponent.cpp
  )
  # include default source
  target_include_directories(${TARGET}  PRIVATE ${SOURCE_FOLDER})

  #add precompile_headers
  target_precompile_headers(${TARGET} PUBLIC ${INDESIGN_SDK}/source/precomp/gcc/PluginPrefix.pch)

  
  #xcconfig  (Release)
  add_compile_definitions(GCC_PREPROCESSOR_DEFINITIONS= ${GCC_PREPROCESSOR_DEFINITIONS} NDEBUG NS_BUILD_32_LIKE_64)
  add_compile_definitions(DEAD_CODE_STRIPPING= YES)
  


  #InDesignPlugin framework sets
  set_target_properties(${TARGET} PROPERTIES
  FRAMEWORK TRUE
  BUNDLE_EXTENSION "$ENV{WRAPPER_EXTENSION}"
#  MACOSX_BUNDLE_BUNDLE_VERSION "1.0"
#  MACOSX_BUNDLE_COPYRIGHT "18.0, Copyright 1999-2022 Adobe. All rights reserved."
  MACOSX_FRAMEWORK_IDENTIFIER com.adobe.InDesign.${TARGET}
  )


#linker libraries
target_link_libraries(${TARGET} 
    PRIVATE ${INDESIGN_LIB_LINK_FOLDER}/InDesignModelAndUI.framework
    PRIVATE ${INDESIGN_LIB_LINK_FOLDER}/libs/libPublicPlugIn.a
)


#add header folder
macro(StringToHeader input)
    string(REPLACE " " ";" output ${input})
    foreach(header ${output})
        target_include_directories(${TARGET} PRIVATE ${header})
    endforeach()
endmacro()
StringToHeader($ENV{HEADER_SEARCH_PATHS})



# odfrc ResourceManagerResources by using cmd
include(cmake/PreBuild.cmake)
execute_odfrc()

# include(cmake/CopyResources.cmake)
# copyResources()
# copy files into resource ResourceManagerResources
add_custom_command(TARGET ${TARGET}
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_BINARY_DIR}/ResourceManagerResources/ $ENV{UNLOCALIZED_RESOURCES_FOLDER_PATH}
  COMMENT "Copying files ..."
)

if (APPLE)
  # xcode'a env aktırmak için
  set_target_properties(${TARGET}
      PROPERTIES
      XCODE_ATTRIBUTE_LIBRARY_SEARCH_PATHS $ENV{LIBRARY_SEARCH_PATHS}
  )

  set_target_properties(${TARGET}
      PROPERTIES
      XCODE_ATTRIBUTE_FRAMEWORK_SEARCH_PATHS $ENV{FRAMEWORK_SEARCH_PATHS}
  )
  # xcodepost_build command gönderemediğimiz için att. olarak gönderiyoruz
  set_target_properties(${TARGET}
      PROPERTIES
      XCODE_ATTRIBUTE_COPY_SCRIPT_PATH ${INDESIGN_SDK}/build/mac/packagescripts/copyResources.sh
  )
endif()

