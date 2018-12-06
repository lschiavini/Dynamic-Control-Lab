/*
 * template_linear_data.c
 *
 * Real-Time Workshop code generation for Simulink model "template_linear.mdl".
 *
 * Model Version              : 1.66
 * Real-Time Workshop version : 7.2  (R2008b)  04-Aug-2008
 * C source code generated on : Thu Nov 01 17:08:08 2018
 */

#include "template_linear.h"
#include "template_linear_private.h"

/* Block parameters (auto storage) */
Parameters_template_linear template_linear_P = {
  0.0,                                 /* HILInitialize_OOStart : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOEnter : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOTerminate : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOExit : '<Root>/HIL Initialize'
                                        */
  10.0,                                /* HILInitialize_AIHigh : '<Root>/HIL Initialize'
                                        */
  -10.0,                               /* HILInitialize_AILow : '<Root>/HIL Initialize'
                                        */
  10.0,                                /* HILInitialize_AOHigh : '<Root>/HIL Initialize'
                                        */
  -10.0,                               /* HILInitialize_AOLow : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOInitial : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOFinal : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOWatchdog : '<Root>/HIL Initialize'
                                        */
  2.4305934065934067E+004,             /* HILInitialize_POFrequency : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POLeading : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POTrailing : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POInitial : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POFinal : '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POWatchdog : '<Root>/HIL Initialize'
                                        */
  -0.02695,                            /* deltaN_Value : '<S1>/deltaN'
                                        */
  200.0,                               /* SignalGenerator_Amplitude : '<Root>/Signal Generator'
                                        */
  0.05,                                /* SignalGenerator_Frequency : '<Root>/Signal Generator'
                                        */
  2.2749E-005,                         /* cartcountstometers_Gain : '<Root>/cart: counts to meters'
                                        */
  1000.0,                              /* mTomm_Gain : '<Root>/m To mm'
                                        */
  1.9855673397600002E-001,             /* KP_Gain : '<Root>/KP'
                                        */
  0.028066,                            /* KD_Gain : '<Root>/KD'
                                        */
  0.0,                                 /* Integrator_IC : '<Root>/Integrator'
                                        */
  0.5449,                              /* deltaP_Value : '<S1>/deltaP'
                                        */
  0.0,                                 /* Switch_Threshold : '<S1>/Switch'
                                        */
  -1.0,                                /* Gain_Gain : '<S1>/Gain'
                                        */
  0.0,                                 /* Switch1_Threshold : '<S1>/Switch1'
                                        */
  3.0760336000000005E-001,             /* KI_Gain : '<Root>/KI'
                                        */
  5.0,                                 /* Kw_Gain : '<Root>/Kw'
                                        */
  6.0,                                 /* Saturation1_UpperSat : '<Root>/Saturation1'
                                        */
  -6.0,                                /* Saturation1_LowerSat : '<Root>/Saturation1'
                                        */

  /*  HILInitialize_CKChannels : '<Root>/HIL Initialize'
   */
  { 0, 1, 2 },
  0,                                   /* HILInitialize_DOWatchdog : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIInitial : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POModes : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POConfiguration : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POAlignment : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POPolarity : '<Root>/HIL Initialize'
                                        */

  /*  HILInitialize_AIChannels : '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_AOChannels : '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_DOChannels : '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_EIChannels : '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  4U,                                  /* HILInitialize_EIQuadrature : '<Root>/HIL Initialize'
                                        */

  /*  HILInitialize_POChannels : '<Root>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILReadEncoder_Channels : '<Root>/HIL Read Encoder'
   */
  { 0U, 1U },
  0U,                                  /* HILWriteAnalog_Channels : '<Root>/HIL Write Analog'
                                        */
  1U,                                  /* Constant_Value : '<S2>/Constant'
                                        */
  0U,                                  /* SwitchControl_Threshold : '<S2>/SwitchControl'
                                        */
  0,                                   /* HILInitialize_Active : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_CKPStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_CKPEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AIPStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AIPEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOPStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOPEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOTerminate : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOExit : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOReset : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOPStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOPEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_DOStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_DOTerminate : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOExit : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOReset : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_EIPStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIPEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_EIStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POPStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POPEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POStart : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POEnter : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POTerminate : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POExit : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POReset : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_OOReset : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOInitial : '<Root>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOFinal : '<Root>/HIL Initialize'
                                        */
  1,                                   /* HILReadEncoder_Active : '<Root>/HIL Read Encoder'
                                        */
  0                                    /* HILWriteAnalog_Active : '<Root>/HIL Write Analog'
                                        */
};
