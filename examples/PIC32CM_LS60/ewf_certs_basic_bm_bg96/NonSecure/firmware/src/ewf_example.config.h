/************************************************************************//**
 * @file
 * @version Preview
 * SPDX-License-Identifier: MIT
 * @copyright Copyright (c) Microsoft Corporation. All rights reserved.
 * @brief The Embedded Wireless Framework example configuration.
 ****************************************************************************/

#ifndef __ewf_example_conf__h__included__
#define __ewf_example_conf__h__included__

#ifdef __cplusplus
extern "C" {
#endif

/************************************************************************//**
 * @defgroup group_example_configuration EWF example configuration
 * @brief The definitions to configure the sample software.
 * @{
 ****************************************************************************/

/**
 * @defgroup group_example_configuration_allocator Allocator configuration
 * @brief Allocator configuration settings used in examples
 * @{
 */

/** @brief the number of message allocator blocks */
#define EWF_CONFIG_MESSAGE_ALLOCATOR_BLOCK_COUNT                         (4)

/** @brief the size of each message allocator block */
#define EWF_CONFIG_MESSAGE_ALLOCATOR_BLOCK_SIZE                          (1024)

/** @} *** group_example_configuration_allocator */

/**
 * @defgroup group_example_configuration_modem Modem configuration
 * @brief Modem configuration settings used in examples
 * @{
 */
/** @brief The SIM PIN for the modem */
#define EWF_CONFIG_SIM_PIN                                               ("0000")
/** @} */

/**
 * @defgroup group_example_configuration_iot_hub IoT Hub configuration
 * @brief IoT Hub configuration settings used in examples
 * @{
 */
/** @brief The IoT Hub hostname */
#define EWF_CONFIG_IOT_HUB_HOSTNAME                                 ""
/** @brief The device ID */
#define EWF_CONFIG_IOT_HUB_DEVICEID                                 ""
/** @} */

/**
 * @defgroup group_example_configuration_certs Certificate Provisioning configuration
 * @brief Certificate Provisioning configuration used in examples
 * @{
*/

/** @brief Trusted Certificate Authority certificate file name to be stored on the modem */
#define EWF_CONFIG_ADAPTER_QUECTEL_BG96_ROOT_CA_CERTIFICATE_FILE_NAME    ("root_ca_cert.pem")

/** @brief User Certificate Authority certificate file name to be stored on the modem */
#define EWF_CONFIG_ADAPTER_QUECTEL_BG96_USER_CA_CERTIFICATE_FILE_NAME    ("ca_cert.pem")

/** @brief Client certificate file name to be stored on the modem */
#define EWF_CONFIG_ADAPTER_QUECTEL_BG96_CLIENT_CERTIFICATE_FILE_NAME     ("device_cert.pem")

/** @brief Client private key filename  */
#define EWF_CONFIG_ADAPTER_QUECTEL_BG96_CLIENT_PRIVATE_KEY_FILE_NAME     ("device_key.pem")

/** @brief Trusted Certificate Authority certificate buffer name */
#define EWF_CONFIG_ADAPTER_QUECTEL_BG96_ROOT_CA_CERTIFICATE_BUFFER_NAME  (root_ca_cert_pem)

/** @brief User Certificate Authority certificate  buffer name */
#define EWF_CONFIG_ADAPTER_QUECTEL_BG96_USER_CA_CERTIFICATE_BUFFER_NAME  (ca_cert_pem)

/** @brief Client certificate buffer name */
#define EWF_CONFIG_ADAPTER_QUECTEL_BG96_CLIENT_CERTIFICATE_BUFFER_NAME   (device_cert_pem)

/** @brief Client private key buffer name  */
#define EWF_CONFIG_ADAPTER_QUECTEL_BG96_CLIENT_PRIVATE_KEY_BUFFER_NAME   (device_key_pem)

/** @} *** group_example_configuration_certs */
    
/************************************************************************//**
 * @} *** group_example_configuration
 ****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* __ewf_example_conf__h__included__ */
