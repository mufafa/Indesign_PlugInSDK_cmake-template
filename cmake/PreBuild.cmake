#env'de HEADER_SEARCH_PATHS ve REZ_SEARCH_PATHS değişkenlerine bakıyor


function(execute_odfrc)
        if(APPLE)
            set (ODFRC_ADDITIONAL_FLAGS "-d MACINTOSH -d __GNUC__ -d ID_DROVER_ENABLE=1 -d ID_COCOA_ENABLE=1 -d DVAUI_ENABLE_CSNEXT_SKIN=1 -d __APPLE__")
            set_target_properties(${TARGET} PROPERTIES XCODE_ATTRIBUTE_ODFRC_ADDITIONAL_FLAGS ${ODFRC_ADDITIONAL_FLAGS})
            set_target_properties(${TARGET} PROPERTIES XCODE_ATTRIBUTE_REZ_COLLECTOR_DIR $ENV{REZ_COLLECTOR_DIR})
        endif(APPLE)
        
        # SOURCE_FOLDER
        set (INPUT_FILE ${SOURCE_FOLDER}/${genereted}.fr)
        set(ODFRC ${INDESIGN_SDK}/devtools/bin/odfrc-cmd)
        file(MAKE_DIRECTORY $ENV{REZ_COLLECTOR_DIR})
        execute_process(
            COMMAND bash "-c" "${ODFRC} -d RELEASE ${ODFRC_ADDITIONAL_FLAGS} -o '$ENV{REZ_COLLECTOR_DIR}/${genereted}.fr.rsrc' '${INPUT_FILE}'" 
            OUTPUT_VARIABLE result
        )
endfunction(execute_odfrc)

