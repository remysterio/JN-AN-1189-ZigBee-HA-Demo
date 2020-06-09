/****************************************************************************
 *
 *                 THIS IS A GENERATED FILE. DO NOT EDIT!
 *
 * MODULE:         OS
 *
 * COMPONENT:      os_gen.h
 *
 * DATE:           Mon Jun  8 15:25:40 2020
 *
 * AUTHOR:         Jennic RTOS Configuration Tool
 *
 * DESCRIPTION:    RTOS Application Configuration
 *
 ****************************************************************************
 *
 * This software is owned by NXP B.V. and/or its supplier and is protected
 * under applicable copyright laws. All rights are reserved. We grant You,
 * and any third parties, a license to use this software solely and
 * exclusively on NXP products [NXP Microcontrollers such as JN5168, JN5179].
 * You, and any third parties must reproduce the copyright and warranty notice
 * and any other legend of ownership on each copy or partial copy of the
 * software.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Copyright NXP B.V. 2017. All rights reserved
 ****************************************************************************/

#ifndef _OS_GEN_H
#define _OS_GEN_H

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

#define OS_STRICT_CHECKS

/* Module ZBPro */

/* Mutex Handles */
#define mutexZPS ((OS_thMutex)&os_Mutex_mutexZPS)
#define mutexPDUM ((OS_thMutex)&os_Mutex_mutexPDUM)
#define mutexMAC ((OS_thMutex)&os_Mutex_mutexMAC)
#define mutexMEDIA ((OS_thMutex)&os_Mutex_mutexMEDIA)

/* Message Handles */
#define zps_msgMlmeDcfmInd ((OS_thMessage)&os_Message_zps_msgMlmeDcfmInd)
#define zps_msgTimeEvents ((OS_thMessage)&os_Message_zps_msgTimeEvents)
#define zps_msgMcpsDcfmInd ((OS_thMessage)&os_Message_zps_msgMcpsDcfmInd)
#define zps_msgMcpsDcfm ((OS_thMessage)&os_Message_zps_msgMcpsDcfm)
#define zps_msgMlmeDcfmInd_C_Type MAC_tsMlmeVsDcfmInd
#define zps_msgTimeEvents_C_Type zps_tsTimeEvent
#define zps_msgMcpsDcfmInd_C_Type MAC_tsMcpsVsDcfmInd
#define zps_msgMcpsDcfm_C_Type MAC_tsMcpsVsCfmData

/* Module ZBProAppCoordinator */

/* Cooperative Task Handles */
#define APP_taskMyEndPoint ((OS_thTask)&os_Task_APP_taskMyEndPoint)
#define APP_taskCoordinator ((OS_thTask)&os_Task_APP_taskCoordinator)
#define zps_taskZPS ((OS_thTask)&os_Task_zps_taskZPS)
#define APP_taskBlinkLED ((OS_thTask)&os_Task_APP_taskBlinkLED)
#define APP_AgeOutChildren ((OS_thTask)&os_Task_APP_AgeOutChildren)

/* Message Handles */
#define APP_msgZpsEvents ((OS_thMessage)&os_Message_APP_msgZpsEvents)
#define APP_msgMyEndPointEvents ((OS_thMessage)&os_Message_APP_msgMyEndPointEvents)
#define APP_msgZpsEvents_C_Type ZPS_tsAfEvent
#define APP_msgMyEndPointEvents_C_Type ZPS_tsAfEvent

/* Timer Handles */
#define APP_cntrTickTimer ((OS_thHWCounter)&os_HWCounter_APP_cntrTickTimer)
#define App_tmr1sec ((OS_thSWTimer)&os_SWTimer_APP_cntrTickTimer_App_tmr1sec)
#define APP_tmrLEDBlinkTimer ((OS_thSWTimer)&os_SWTimer_APP_cntrTickTimer_APP_tmrLEDBlinkTimer)
#define APP_AgeOutChildrenTmr ((OS_thSWTimer)&os_SWTimer_APP_cntrTickTimer_APP_AgeOutChildrenTmr)

/* Module Exceptions */

/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/

typedef void (*OS_tprISR)(void);

/****************************************************************************/
/***        External Variables                                            ***/
/****************************************************************************/


/* Mutex Handles */
extern struct _os_tsMutex os_Mutex_mutexZPS;
extern struct _os_tsMutex os_Mutex_mutexPDUM;
extern struct _os_tsMutex os_Mutex_mutexMAC;
extern struct _os_tsMutex os_Mutex_mutexMEDIA;

/* Message Handles */
extern struct _os_tsMessage os_Message_zps_msgMlmeDcfmInd;
extern struct _os_tsMessage os_Message_zps_msgTimeEvents;
extern struct _os_tsMessage os_Message_zps_msgMcpsDcfmInd;
extern struct _os_tsMessage os_Message_zps_msgMcpsDcfm;

/* Cooperative Task Handles */
extern struct _os_tsTask os_Task_APP_taskMyEndPoint;
extern struct _os_tsTask os_Task_APP_taskCoordinator;
extern struct _os_tsTask os_Task_zps_taskZPS;
extern struct _os_tsTask os_Task_APP_taskBlinkLED;
extern struct _os_tsTask os_Task_APP_AgeOutChildren;

/* Message Handles */
extern struct _os_tsMessage os_Message_APP_msgZpsEvents;
extern struct _os_tsMessage os_Message_APP_msgMyEndPointEvents;

/* Timer Handles */
extern struct _os_tsHWCounter os_HWCounter_APP_cntrTickTimer;
extern struct _os_tsSWTimer os_SWTimer_APP_cntrTickTimer_App_tmr1sec;
extern struct _os_tsSWTimer os_SWTimer_APP_cntrTickTimer_APP_tmrLEDBlinkTimer;
extern struct _os_tsSWTimer os_SWTimer_APP_cntrTickTimer_APP_AgeOutChildrenTmr;

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/

PUBLIC void OS_vStart(void (*)(void), void (*)(void), void (*)(OS_teStatus , void *));
PUBLIC OS_tprISR OS_prGetActiveISR(void);

PUBLIC bool os_bAPP_cbSetTickTimerCompare(uint32 );
PUBLIC uint32 os_u32APP_cbGetTickTimer(void);
PUBLIC void os_vAPP_cbEnableTickTimer(void);
PUBLIC void os_vAPP_cbDisableTickTimer(void);

#endif
