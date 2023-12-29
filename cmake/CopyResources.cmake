function(copyResources)
        execute_process(
            COMMAND bash "-c" "${INDESIGN_SDK}/build/mac/packagescripts/copyResources.sh" 
            OUTPUT_VARIABLE result
        )
        message("Copy output : ${result}")
endfunction(copyResources)
