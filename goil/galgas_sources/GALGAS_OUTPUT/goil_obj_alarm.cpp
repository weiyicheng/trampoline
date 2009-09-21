//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_obj_alarm.cpp'                          *
//                        Generated by version 1.9.1                         *
//                    september 21th, 2009, at 18h17'43"                     *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 572
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "goil_obj_alarm.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_alarm.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                Implementation of production rule 'alarm'                  *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_alarm::
pr_alarm_goil_obj_alarm_47_12_ (goil_lexique & inLexique,
                                GGS_alarm_map  &var_cas_alarms) {
  GGS_lstring  var_cas_alarm_name ;
  GGS_alarm_obj  var_cas_alarm ;
  GGS_action_obj  var_cas_alarm_action ;
  GGS_autostart_obj  var_cas_alarm_autostart ;
  GGS_lstring  var_cas_counter_name ;
  GGS_lstringlist  var_cas_acc_apps ;
  GGS_lstring  var_cas_desc ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ALARM) COMMA_HERE) ;
  inLexique.assignFromAttribute_att_token (var_cas_alarm_name) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
  if ((var_cas_alarms.reader_hasKey (inLexique, var_cas_alarm_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (60)) COMMA_SOURCE_FILE_AT_LINE (60))).isBuiltAndTrue ()) {
    var_cas_alarms.modifier_del (inLexique, var_cas_alarm_name, var_cas_alarm COMMA_SOURCE_FILE_AT_LINE (61)) ;
    var_cas_alarm_action = var_cas_alarm.reader_action_params (inLexique COMMA_SOURCE_FILE_AT_LINE (62)) ;
    var_cas_alarm_autostart = var_cas_alarm.reader_autostart_params (inLexique COMMA_SOURCE_FILE_AT_LINE (63)) ;
    var_cas_counter_name = var_cas_alarm.reader_counter_name (inLexique COMMA_SOURCE_FILE_AT_LINE (64)) ;
    var_cas_acc_apps = var_cas_alarm.reader_acc_apps (inLexique COMMA_SOURCE_FILE_AT_LINE (65)) ;
    var_cas_desc = var_cas_alarm.reader_desc (inLexique COMMA_SOURCE_FILE_AT_LINE (66)) ;
  }else{
    var_cas_alarm_action = GGS_void_action ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
    var_cas_alarm_autostart = GGS_autostart_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
    var_cas_counter_name = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
    var_cas_acc_apps = GGS_lstringlist ::constructor_emptyList () ;
    var_cas_desc = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
    var_cas_alarm = GGS_alarm_obj ::constructor_new (inLexique, var_cas_desc, var_cas_counter_name, var_cas_alarm_action, var_cas_alarm_autostart, var_cas_acc_apps COMMA_HERE) ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
  nt_alarm_parameters_ (inLexique, var_cas_counter_name, var_cas_alarm_action, var_cas_alarm_autostart, var_cas_acc_apps) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
  nt_description_ (inLexique, var_cas_desc) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
  var_cas_alarm = GGS_alarm_obj ::constructor_new (inLexique, var_cas_desc, var_cas_counter_name, var_cas_alarm_action, var_cas_alarm_autostart, var_cas_acc_apps COMMA_HERE) ;
  var_cas_alarms.modifier_put (inLexique, var_cas_alarm_name, var_cas_alarm COMMA_SOURCE_FILE_AT_LINE (83)) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//           Implementation of production rule 'alarm_parameters'            *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_alarm::
pr_alarm_parameters_goil_obj_alarm_86_23_ (goil_lexique & inLexique,
                                GGS_lstring  &var_cas_counter_name,
                                GGS_action_obj  &var_cas_alarm_action,
                                GGS_autostart_obj  &var_cas_alarm_autostart,
                                GGS_lstringlist  &var_cas_acc_apps) {
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_repeat_goil_obj_alarm_0 (inLexique)) {
        case 2 : {
          if (((var_cas_counter_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (94))).operator_isNotEqual (GGS_string (""))).isBuiltAndTrue ()) {
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("COUNTER attribute already defined for this alarm") COMMA_SOURCE_FILE_AT_LINE (96)) ;
            var_cas_counter_name.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (96)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (97)) ;
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_COUNTER) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_token (var_cas_counter_name) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_0 ;
          nt_description_ (inLexique, automatic_var_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          } break ;
        case 3 : {
          { const GGS_action_obj _var_2747 = var_cas_alarm_action ; // CAST instruction
            if (_var_2747.getPtr () != NULL) {
              macroValidPointer (_var_2747.getPtr ()) ;
              if (typeid (cPtr_void_action) == typeid (* (_var_2747.getPtr ()))) {
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("ACTION attribute already defined for this alarm") COMMA_SOURCE_FILE_AT_LINE (104)) ;
                var_cas_alarm_action.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (104)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (105)) ;
              }
            }
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ACTION) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          nt_alarm_action_params_ (inLexique, var_cas_alarm_action) ;
          GGS_lstring  automatic_var_1 ;
          nt_description_ (inLexique, automatic_var_1) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          } break ;
        case 4 : {
          { const GGS_autostart_obj _var_3072 = var_cas_alarm_autostart ; // CAST instruction
            if (_var_3072.getPtr () != NULL) {
              macroValidPointer (_var_3072.getPtr ()) ;
              if (typeid (cPtr_autostart_void) == typeid (* (_var_3072.getPtr ()))) {
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("AUTOSTART attribute already defined for this alarm") COMMA_SOURCE_FILE_AT_LINE (112)) ;
                var_cas_alarm_autostart.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (112)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (113)) ;
              }
            }
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_AUTOSTART) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          switch (select_goil_obj_alarm_1 (inLexique)) {
            case 1 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRUE) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
              nt_alarm_autostart_params_ (inLexique, var_cas_alarm_autostart) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
              } break ;
            case 2 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_FALSE) COMMA_HERE) ;
              var_cas_alarm_autostart = GGS_autostart_false ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          GGS_lstring  automatic_var_2 ;
          nt_description_ (inLexique, automatic_var_2) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          } break ;
        case 5 : {
          GGS_lstring  var_cas_app ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ACCESSING_5F_APPLICATION) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_token (var_cas_app) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_3 ;
          nt_description_ (inLexique, automatic_var_3) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          ::routine_add_lstring_unique (inLexique,  var_cas_acc_apps,  var_cas_app,  GGS_string ("ACCESSING_APPLICATION") COMMA_SOURCE_FILE_AT_LINE (127)) ;
          } break ;
        case 6 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          switch (select_goil_obj_alarm_2 (inLexique)) {
            case 1 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
              } break ;
            case 2 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of production rule 'alarm_action_params'           *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_alarm::
pr_alarm_action_params_goil_obj_alarm_133_26_ (goil_lexique & inLexique,
                                GGS_action_obj  &var_cas_alarm_action) {
  switch (select_goil_obj_alarm_3 (inLexique)) {
    case 1 : {
      GGS_lstring  var_cas_task_name ;
      var_cas_task_name = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
      GGS_lstring  var_cas_event_name ;
      var_cas_event_name = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_SETEVENT) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
      { bool syntaxRepeat_4 = true ;
        while (syntaxRepeat_4) {
          switch (select_repeat_goil_obj_alarm_4 (inLexique)) {
            case 2 : {
              if (((var_cas_task_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (142))).operator_isNotEqual (GGS_string (""))).isBuiltAndTrue ()) {
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("TASK attribute already defined for this alarm action") COMMA_SOURCE_FILE_AT_LINE (144)) ;
                var_cas_task_name.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (144)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (145)) ;
              }
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TASK) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
              inLexique.assignFromAttribute_att_token (var_cas_task_name) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
              GGS_lstring  automatic_var_4 ;
              nt_description_ (inLexique, automatic_var_4) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
              } break ;
            case 3 : {
              if (((var_cas_event_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (151))).operator_isNotEqual (GGS_string (""))).isBuiltAndTrue ()) {
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("EVENT attribute already defined for this alarm action") COMMA_SOURCE_FILE_AT_LINE (153)) ;
                var_cas_event_name.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (153)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (154)) ;
              }
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_EVENT) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
              inLexique.assignFromAttribute_att_token (var_cas_event_name) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
              GGS_lstring  automatic_var_5 ;
              nt_description_ (inLexique, automatic_var_5) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
              } break ;
            default :
              syntaxRepeat_4 = false ;
              break ;
          }
        }
      }
      var_cas_alarm_action = GGS_setevent_action ::constructor_new (inLexique, GGS_location (inLexique), var_cas_task_name, var_cas_event_name COMMA_HERE) ;
      } break ;
    case 2 : {
      GGS_lstring  var_cas_task_name ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ACTIVATETASK) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TASK) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
      inLexique.assignFromAttribute_att_token (var_cas_task_name) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
      GGS_lstring  automatic_var_6 ;
      nt_description_ (inLexique, automatic_var_6) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
      var_cas_alarm_action = GGS_activatetask_action ::constructor_new (inLexique, GGS_location (inLexique), var_cas_task_name COMMA_HERE) ;
      } break ;
    case 3 : {
      if ((gOption_goil_5F_options_autosar_5F_on.value ()).isBuiltAndTrue ()) {
        GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("AUTOSAR flag is on. AUTOSAR spec does not allow alarm callback") COMMA_SOURCE_FILE_AT_LINE (170)) ;
      }
      GGS_lstring  var_cas_function_name ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ALARMCALLBACK) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ALARMCALLBACKNAME) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
      inLexique.assignFromAttribute_a_string (var_cas_function_name) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_string) COMMA_HERE) ;
      GGS_lstring  automatic_var_7 ;
      nt_description_ (inLexique, automatic_var_7) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
      var_cas_alarm_action = GGS_callback_action ::constructor_new (inLexique, GGS_location (inLexique), var_cas_function_name COMMA_HERE) ;
      } break ;
    case 4 : {
      if (((gOption_goil_5F_options_autosar_5F_on.value ()).operator_isEqual (GGS_bool (false))).isBuiltAndTrue ()) {
        GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("AUTOSAR flag is off. Turn it on to allow an INCREMENTCOUNTER action in alarm") COMMA_SOURCE_FILE_AT_LINE (179)) ;
      }
      GGS_lstring  var_cas_counter_name ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_INCREMENTCOUNTER) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_COUNTER) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
      inLexique.assignFromAttribute_att_token (var_cas_counter_name) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
      GGS_lstring  automatic_var_8 ;
      nt_description_ (inLexique, automatic_var_8) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
      var_cas_alarm_action = GGS_incrementcounter_action ::constructor_new (inLexique, GGS_location (inLexique), var_cas_counter_name COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        Implementation of production rule 'alarm_autostart_params'         *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_alarm::
pr_alarm_autostart_params_goil_obj_alarm_189_29_ (goil_lexique & inLexique,
                                GGS_autostart_obj  &var_cas_alarm_autostart) {
  GGS_bool var_cas_alarm_time_known ;
  var_cas_alarm_time_known = GGS_bool (false) ;
  GGS_bool var_cas_cycle_time_known ;
  var_cas_cycle_time_known = GGS_bool (false) ;
  GGS_luint64  var_cas_alarm_time ;
  var_cas_alarm_time = GGS_luint64 ::constructor_new (inLexique, GGS_uint64 (0ULL), GGS_location (inLexique) COMMA_HERE) ;
  GGS_luint64  var_cas_cycle_time ;
  var_cas_cycle_time = GGS_luint64 ::constructor_new (inLexique, GGS_uint64 (0ULL), GGS_location (inLexique) COMMA_HERE) ;
  GGS_lstring  var_cas_app_mode ;
  var_cas_app_mode = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
  GGS_stringset  var_cas_app_modes ;
  var_cas_app_modes = GGS_stringset ::constructor_emptySet () ;
  { bool syntaxRepeat_5 = true ;
    while (syntaxRepeat_5) {
      switch (select_repeat_goil_obj_alarm_5 (inLexique)) {
        case 2 : {
          if ((var_cas_alarm_time_known).isBuiltAndTrue ()) {
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("ALARMTIME attribute already defined for this alarm autostart") COMMA_SOURCE_FILE_AT_LINE (204)) ;
            var_cas_alarm_time.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (204)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (205)) ;
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ALARMTIME) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_alarm_time) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          GGS_lstring  automatic_var_9 ;
          nt_description_ (inLexique, automatic_var_9) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          var_cas_alarm_time_known = GGS_bool (true) ;
          } break ;
        case 3 : {
          if ((var_cas_cycle_time_known).isBuiltAndTrue ()) {
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("CYCLETIME attribute already defined for this alarm autostart") COMMA_SOURCE_FILE_AT_LINE (211)) ;
            var_cas_cycle_time.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (211)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was previously defined here") COMMA_SOURCE_FILE_AT_LINE (212)) ;
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_CYCLETIME) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_cycle_time) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          GGS_lstring  automatic_var_10 ;
          nt_description_ (inLexique, automatic_var_10) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          var_cas_cycle_time_known = GGS_bool (true) ;
          } break ;
        case 4 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_APPMODE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_token (var_cas_app_mode) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_11 ;
          nt_description_ (inLexique, automatic_var_11) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          var_cas_app_modes._addAssign_operation (var_cas_app_mode.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (217))) ;
          } break ;
        default :
          syntaxRepeat_5 = false ;
          break ;
      }
    }
  }
  if (((var_cas_alarm_time_known).operator_not ()).isBuiltAndTrue ()) {
    GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("ALARMTIME attribute is missing") COMMA_SOURCE_FILE_AT_LINE (223)) ;
  }
  var_cas_alarm_autostart = GGS_alarm_autostart_true ::constructor_new (inLexique, GGS_location (inLexique), var_cas_alarm_time, var_cas_cycle_time, var_cas_app_modes COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

