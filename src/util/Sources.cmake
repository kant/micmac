set(Util_Src_Files
	${UTIL_DIR}/affin2d.cpp
	${UTIL_DIR}/all.cpp
	${UTIL_DIR}/arg_main.cpp
	${UTIL_DIR}/bicub.cpp
	${UTIL_DIR}/bits_flow.cpp
	${UTIL_DIR}/box.cpp
	${UTIL_DIR}/cElStatErreur.cpp
	${UTIL_DIR}/cEquiv1D.cpp
	${UTIL_DIR}/cGPAO.cpp
	${UTIL_DIR}/cSysCoor.cpp
	${UTIL_DIR}/current_fonc.cpp
	${UTIL_DIR}/dates.cpp
	${UTIL_DIR}/error.cpp
	${UTIL_DIR}/fifo.cpp
	${UTIL_DIR}/files.cpp
	${UTIL_DIR}/num.cpp
	${UTIL_DIR}/num_tpl.cpp
	${UTIL_DIR}/pt2di.cpp
	${UTIL_DIR}/randomm.cpp
	${UTIL_DIR}/regex.cpp
	${UTIL_DIR}/sort.cpp
	${UTIL_DIR}/string_dyn.cpp
	${UTIL_DIR}/stringifie.cpp
	${UTIL_DIR}/tabul.cpp
	${UTIL_DIR}/wildmatch.cpp
	${UTIL_DIR}/xml.cpp
	${UTIL_DIR}/xml2cpp.cpp
	#${UTIL_DIR}/win_regex.c
)

SOURCE_GROUP(Util FILES ${Util_Src_Files})

set(Elise_Src_Files
	${Elise_Src_Files}
	${Util_Src_Files}
)