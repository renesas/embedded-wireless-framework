/************************************************************************//**
 *
 * @file
 * @version Preview
 * SPDX-License-Identifier: MIT
 * @copyright Copyright (c) Microsoft Corporation. All rights reserved.
 * @brief The Embedded Wireless Framework configuration template.
 * Copy this file into your own project, remove the .template extension
 * and customize its contents.
 *
 ****************************************************************************/


#ifndef __EWF__config__h__included__
#define __EWF__config__h__included__

#ifdef __cplusplus
extern "C" {
#endif

#include "demo_printf.h"

/************************************************************************//**
 * @defgroup group_configuration EWF configuration
 * @brief The definitions to configure the Embedded Wireless Framework.
 * @{
 ****************************************************************************/

 /** Define this symbol to enable compilation of debug code. When this symbol is not defined, debug code is not present and the footprint is reduced.  */
#define EWF_DEBUG

/** Define this symbol to enable verbose logging */
//#define EWF_LOG_VERBOSE

/** Define this symbol to enable checking of function parameters. When this symbol is not defined, parameter checking code is not present and the footprint is reduced.  */
#define EWF_PARAMETER_CHECKING

/* Define the platform to be used, only one is valid */
//#define EWF_PLATFORM_BARE_METAL
#define EWF_PLATFORM_THREADX
//#define EWF_PLATFORM_FREERTOS
//#define EWF_PLATFORM_WIN32

/************************************************************************//**
 * @} *** group_configuration
 ****************************************************************************/

/* Enable CK-RX65N UART config */
#define EWF_RENESAS_RX65N_CK_ENABLE

#ifdef EWF_DEBUG
#define EWF_LOG       demo_printf
#else
#define EWF_LOG(...)
#endif

/** @brief Enable EWF usage with Azure RTOS NETX */
#define EWF_CONFIG_AZURE_RTOS_NETX                                  (1)

/************************************************************************//**
 * @} *** group_configuration
 ****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* __EWF__config__h__included__ */
