//---------------------------------------------------------------------------*
//                                                                           *
//                      File 'goil_env_verification.h'                       *
//                        Generated by version 1.9.1                         *
//                    september 21th, 2009, at 18h16'54"                     *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_env_verification_DEFINED
#define goil_env_verification_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/C_GGS_Object.h"
#include "galgas/GGS_location.h"
#include "galgas/GGS_data.h"
#include "galgas/GGS_lbool.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_lstring.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_binaryset.h"
#include "galgas/GGS_filewrapper.h"
#include "galgas/predefined_types.h"
#include "galgas/AC_galgas_class.h"
#include "galgas/AC_galgas_domain.h"
#include "galgas/AC_galgas_mapindex.h"
#include "galgas/AC_galgas_map.h"
#include "galgas/AC_galgas_listmap.h"
#include "galgas/AC_galgas_list.h"
#include "galgas/AC_galgas_sortedlist.h"

//---------------------------------------------------------------------------*

#include "galgas/C_Lexique.h"

// Include imported semantics
#include "goil_options.h"
#include "goil_routines.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                   Routine 'getAbsoluteSourceFilePath'                     *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_getAbsoluteSourceFilePath (C_Compiler &,
                                const GGS_string ,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                        Routine 'checkFileExists'                          *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_checkFileExists (C_Compiler &,
                                const GGS_lstring   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Routine 'checkFileDoesNotExists'                      *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_checkFileDoesNotExists (C_Compiler &,
                                const GGS_lstring   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      Routine 'checkTrampolinePath'                        *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_checkTrampolinePath (C_Compiler &,
                                const GGS_lstring   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                          Routine 'check_target'                           *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_check_target (C_Compiler &,
                                const GGS_string  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

#endif
