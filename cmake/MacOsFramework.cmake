# bunu da kullanmıyoruz
function(FindFramework)
        file(GLOB sub-dir ${FR_TEST}/*)
        foreach(dir ${sub-dir})
        if(IS_DIRECTORY ${dir})
            target_link_libraries(${TARGET} 
                PUBLIC ${dir}
            )
        endif()
        endforeach()

endfunction(FindFramework)
