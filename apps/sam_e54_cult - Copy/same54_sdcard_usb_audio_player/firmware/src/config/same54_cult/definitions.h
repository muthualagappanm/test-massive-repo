/*******************************************************************************
  System Definitions

  File Name:
    definitions.h

  Summary:
    project system definitions.

  Description:
    This file contains the system-wide prototypes and definitions for a project.

 *******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
//DOM-IGNORE-END

#ifndef DEFINITIONS_H
#define DEFINITIONS_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include "peripheral/nvmctrl/plib_nvmctrl.h"
#include "audio/driver/i2s/drv_i2s.h"
#include "peripheral/tc/plib_tc0.h"
#include "peripheral/sdhc/plib_sdhc1.h"
#include "driver/i2c/drv_i2c.h"
#include "system/time/sys_time.h"
#include "peripheral/tc/plib_tc4.h"
#include "usb/usb_chapter_9.h"
#include "usb/usb_host.h"
#include "driver/usb/usbfsv1/drv_usbfsv1.h"
#include "driver/input/drv_maxtouch.h"
#include "system/int/sys_int.h"
#include "system/ports/sys_ports.h"
#include "system/cache/sys_cache.h"
#include "system/dma/sys_dma.h"
#include "osal/osal.h"
#include "system/debug/sys_debug.h"
#include "usb/usb_msd.h"
#include "usb/usb_host_msd.h"
#include "usb/usb_host_scsi.h"
#include "peripheral/sercom/usart/plib_sercom1_usart.h"
#include "peripheral/evsys/plib_evsys.h"
#include "driver/sdmmc/drv_sdmmc.h"
#include "gfx/legato/generated/le_gen_harmony.h"
#include "peripheral/sercom/i2c_master/plib_sercom6_i2c_master.h"
#include "peripheral/port/plib_port.h"
#include "peripheral/clock/plib_clock.h"
#include "peripheral/nvic/plib_nvic.h"
#include "peripheral/dmac/plib_dmac.h"
#include "peripheral/cmcc/plib_cmcc.h"
#include "peripheral/sercom/i2c_master/plib_sercom4_i2c_master.h"
#include "bsp/bsp.h"
#include "system/input/sys_input.h"
#include "peripheral/ccl/plib_ccl.h"
#include "system/fs/sys_fs.h"
#include "system/fs/sys_fs_media_manager.h"
#include "system/fs/sys_fs_fat_interface.h"
#include "system/fs/fat_fs/file_system/ff.h"
#include "system/fs/fat_fs/file_system/ffconf.h"
#include "system/fs/fat_fs/hardware_access/diskio.h"
#include "audio/peripheral/i2s/plib_i2s.h"
#include "gfx/driver/controller/external_controller/drv_gfx_external_controller.h"
#include "audio/driver/codec/wm8904/drv_wm8904.h"
#include "app.h"



// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

/* CPU clock frequency */
#define CPU_CLOCK_FREQUENCY 120000000

// *****************************************************************************
// *****************************************************************************
// Section: System Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* System Initialization Function

  Function:
    void SYS_Initialize( void *data )

  Summary:
    Function that initializes all modules in the system.

  Description:
    This function initializes all modules in the system, including any drivers,
    services, middleware, and applications.

  Precondition:
    None.

  Parameters:
    data            - Pointer to the data structure containing any data
                      necessary to initialize the module. This pointer may
                      be null if no data is required and default initialization
                      is to be used.

  Returns:
    None.

  Example:
    <code>
    SYS_Initialize ( NULL );

    while ( true )
    {
        SYS_Tasks ( );
    }
    </code>

  Remarks:
    This function will only be called once, after system reset.
*/

void SYS_Initialize( void *data );

// *****************************************************************************
/* System Tasks Function

Function:
    void SYS_Tasks ( void );

Summary:
    Function that performs all polled system tasks.

Description:
    This function performs all polled system tasks by calling the state machine
    "tasks" functions for all polled modules in the system, including drivers,
    services, middleware and applications.

Precondition:
    The SYS_Initialize function must have been called and completed.

Parameters:
    None.

Returns:
    None.

Example:
    <code>
    SYS_Initialize ( NULL );

    while ( true )
    {
        SYS_Tasks ( );
    }
    </code>

Remarks:
    If the module is interrupt driven, the system will call this routine from
    an interrupt context.
*/

void SYS_Tasks ( void );

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* System Objects

Summary:
    Structure holding the system's object handles

Description:
    This structure contains the object handles for all objects in the
    MPLAB Harmony project's system configuration.

Remarks:
    These handles are returned from the "Initialize" functions for each module
    and must be passed into the "Tasks" function for each module.
*/

typedef struct
{
    /* I2C0 Driver Object */
    SYS_MODULE_OBJ drvI2C0;

    /* I2C1 Driver Object */
    SYS_MODULE_OBJ drvI2C1;

    /* I2S0 Driver Object */
    SYS_MODULE_OBJ drvI2S0;

    SYS_MODULE_OBJ  sysTime;
	SYS_MODULE_OBJ  usbHostObject0;

	SYS_MODULE_OBJ  drvUSBFSV1Object;

    SYS_MODULE_OBJ  drvMAXTOUCH;

    SYS_MODULE_OBJ  drvSDMMC0;


    SYS_MODULE_OBJ drvwm8904Codec0;

} SYSTEM_OBJECTS;

// *****************************************************************************
// *****************************************************************************
// Section: extern declarations
// *****************************************************************************
// *****************************************************************************

extern const USB_HOST_INIT usbHostInitData; 



extern SYSTEM_OBJECTS sysObj;

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* DEFINITIONS_H */
/*******************************************************************************
 End of File
*/

