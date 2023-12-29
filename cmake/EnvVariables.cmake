# convert string to list

macro(StringToList input outlist prefix)
    string(REPLACE " " ";" output ${input})
    foreach(header ${output})
        string(APPEND ${outlist} "${prefix}${header} ")
    endforeach()
endmacro()

#linker flags
SET(CMAKE_EXE_LINKER_FLAGS  ${CMAKE_EXE_LINKER_FLAGS}  "-Xlinker -no_data_in_code_info")


#warning flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unknown-warning-option -Wno-nonportable-include-path -Wno-undefined-var-template -Wno-null-dereference -Wno-varargs -Wno-tautological-undefined-compare -Wno-pointer-bool-conversion -Wno-undefined-bool-conversion -Wno-absolute-value -Wno-tautological-pointer-compare -Wno-inline-new-delete -Wno-new-returns-null -Wno-c++11-narrowing -Wimplicit -Wsequence-point -Winit-self -Wmissing-field-initializers -Wpointer-arith -Wpacked -Wno-unused-parameter -Wno-unused-variable -Wno-write-strings -Wformat -Wno-deprecated -Wformat-security -Wno-cast-align -Wno-logical-op-parentheses -Wno-c++11-extensions -Wno-switch-enum -Wno-char-subscripts -Wno-parentheses-equality -Wno-unused-function -Wno-out-of-line-declaration -Wno-return-type-c-linkage -Wno-invalid-source-encoding -Wno-#pragma-messages -Wno-inconsistent-missing-override -Wno-nullability-completeness")

set(ENV{ID_OPEN_HEADER_SEARCH_PATHS} "${INDESIGN_SDK}/source/open/includes/** ${INDESIGN_SDK}/source/open/interfaces/**")



set(ENV{ID_ALLPUBLIC_HEADER_SEARCH_PATHS} "${INDESIGN_SDK}/source/precomp/common ${INDESIGN_SDK}/source/precomp/msvc ${INDESIGN_SDK}/source/precomp/gcc ${INDESIGN_SDK}/source/public/includes ${INDESIGN_SDK}/source/public/interfaces/** ${INDESIGN_SDK}/source/public/libs/widgetbin/includes")

set(ENV{HEADER_SEARCH_PATHS} "${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/SDK/include ${INDESIGN_SDK}/source/precomp/common ${INDESIGN_SDK}/source/precomp/msvc ${INDESIGN_SDK}/source/precomp/gcc ${INDESIGN_SDK}/source/public/includes  ${INDESIGN_SDK}/source/public/interfaces/architecture ${INDESIGN_SDK}/source/public/interfaces/graphics ${INDESIGN_SDK}/source/public/interfaces/layout ${INDESIGN_SDK}/source/public/interfaces/ui ${INDESIGN_SDK}/source/public/interfaces/text ${INDESIGN_SDK}/source/public/interfaces/utils ${INDESIGN_SDK}/source/public/interfaces/xmedia ${INDESIGN_SDK}/source/public/libs/widgetbin/includes  ${INDESIGN_SDK}/source/open/includes/** ${INDESIGN_SDK}/source/open/interfaces/** ${INDESIGN_SDK}/external/dva/third_party/boost_libraries ${INDESIGN_SDK}/external/dva/third_party/adobe_source_libraries/ ${INDESIGN_SDK}/external/afl/includes ${INDESIGN_SDK}/source/public/interfaces/tables ${INDESIGN_SDK}/source/public/interfaces/workgroup ${INDESIGN_SDK}/source/public/interfaces/interactive ${INDESIGN_SDK}/source/public/interfaces/interactive/ui ${INDESIGN_SDK}/source/public/interfaces/colormgmt ${INDESIGN_SDK}/source/public/interfaces/incopy ${INDESIGN_SDK}/source/public/interfaces/cjk ${INDESIGN_SDK}/source/public/interfaces/preflight ${INDESIGN_SDK}/source/sdksamples/common ${INDESIGN_SDK}/external/afl/includes")


set(ENV{ID_PUBLIC_HEADER_SEARCH_PATHS} "${INDESIGN_SDK}/source/precomp/common ${INDESIGN_SDK}/source/precomp/msvc ${INDESIGN_SDK}/source/precomp/gcc ${INDESIGN_SDK}/source/public/includes  ${INDESIGN_SDK}/source/public/interfaces/architecture ${INDESIGN_SDK}/source/public/interfaces/graphics ${INDESIGN_SDK}/source/public/interfaces/layout ${INDESIGN_SDK}/source/public/interfaces/ui ${INDESIGN_SDK}/source/public/interfaces/text ${INDESIGN_SDK}/source/public/interfaces/utils ${INDESIGN_SDK}/source/public/interfaces/xmedia ${INDESIGN_SDK}/source/public/libs/widgetbin/includes")

set(ENV{ID_COMMON_HEADER_SEARCH_PATHS} "${INDESIGN_SDK}/external ${INDESIGN_SDK}/source/precomp/common ${INDESIGN_SDK}/source/precomp/msvc ${INDESIGN_SDK}/source/precomp/gcc ${INDESIGN_SDK}/source/public/includes  ${INDESIGN_SDK}/source/public/interfaces/architecture ${INDESIGN_SDK}/source/public/interfaces/graphics ${INDESIGN_SDK}/source/public/interfaces/layout ${INDESIGN_SDK}/source/public/interfaces/ui ${INDESIGN_SDK}/source/public/interfaces/text ${INDESIGN_SDK}/source/public/interfaces/utils ${INDESIGN_SDK}/source/public/interfaces/xmedia ${INDESIGN_SDK}/source/public/libs/widgetbin/includes  ${INDESIGN_SDK}/source/open/includes/** ${INDESIGN_SDK}/source/open/interfaces/** ${INDESIGN_SDK}/external/dva/third_party/boost_libraries ${INDESIGN_SDK}/external/intel_tbb/${PLATFORM}/include ${INDESIGN_SDK}/external/dva/third_party/adobe_source_libraries/")

set(ENV{REZ_SEARCH_PATHS} "${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/SDK ${INDESIGN_SDK}/source/precomp/common ${INDESIGN_SDK}/source/precomp/msvc ${INDESIGN_SDK}/source/public/includes ${INDESIGN_SDK}/source/public/libs/widgetbin/includes ${INDESIGN_SDK}/external/palettes/** ${INDESIGN_SDK}/external/workflow_icons ${INDESIGN_SDK}/external/workflow_icons/svg ${INDESIGN_SDK}/external/workflow_icons/Cursors/Cursor_x1/svg ${INDESIGN_SDK}/external/workflow_icons/Icons_x2 ${INDESIGN_SDK}/external/workflow_icons/Icons_x3 ${INDESIGN_SDK}/external/workflow_icons/Icons_x150 ${INDESIGN_SDK}/external/workflow_icons/Icons_x300 ${INDESIGN_SDK}/source/open/icons ${INDESIGN_SDK}/source/open/icons/Icons_x2 ${INDESIGN_SDK}/source/open/icons/Icons_x150 ${INDESIGN_SDK}/source/open/icons/svg")


set(ENV{ID_COMMON_REZ_SEARCH_PATHS} "${INDESIGN_SDK}/source/precomp/common ${INDESIGN_SDK}/source/precomp/msvc ${INDESIGN_SDK}/source/public/includes ${INDESIGN_SDK}/source/public/libs/widgetbin/includes)")

set(_header_search_path)
StringToList($ENV{HEADER_SEARCH_PATHS} _header_search_path "-I")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${_header_search_path}")


#####libraries
set(ENV{LIBRARY_SEARCH_PATHS} "${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/SDK  ${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/packagefolder/contents/macos ${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/packagefolder/contents/macos/libs ${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/packagefolder/contents/Frameworks")

set(_library_search_path)
StringToList($ENV{LIBRARY_SEARCH_PATHS} _library_search_path "-L")
 
#libraries
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${_library_search_path}")



#######Frameworks
set(ENV{FRAMEWORK_SEARCH_PATHS} "${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/SDK  ${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/packagefolder/contents/Frameworks ${INDESIGN_SDK}/build/${PLATFORM}/prj/../release_cocoa64/packagefolder/contents/macos")
set(_framework_search_path)
StringToList($ENV{FRAMEWORK_SEARCH_PATHS} _framework_search_path "-F")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${_framework_search_path}")




###
set(ENV{REZ_COLLECTOR_DIR} "${CMAKE_BINARY_DIR}/ResourceManagerResources")
set(ENV{WRAPPER_EXTENSION} "InDesignPlugin")
set(ENV{UNLOCALIZED_RESOURCES_FOLDER_PATH} "${TARGET}.InDesignPlugin/Versions/A/Resources")
set(ENV{TARGET_BUILD_DIR} "${CMAKE_BINARY_DIR}")





# get_cmake_property(_variableNames VARIABLES)
# list (SORT _variableNames)
# foreach (_variableName ${_variableNames})
#     message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()


#print all ENV variables
# execute_process(COMMAND "${CMAKE_COMMAND}" "-E" "environment")
