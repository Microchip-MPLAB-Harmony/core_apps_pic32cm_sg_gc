/*
 * Instance header file for PIC32CM5112GC00100
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2024-07-26T17:56:39Z */
#ifndef _PIC32CMGC00_SERCOM2_INSTANCE_
#define _PIC32CMGC00_SERCOM2_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM2 peripheral ========== */
#define SERCOM2_BRIDGE_ID                        (1)        /* H2PB Bridge ID */
#define SERCOM2_CLK_REDUCTION                    (1)        /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM2_DMA                              (1)        /* DMA support implemented? */
#define SERCOM2_DMAC_ID_RX                       (8)        
#define SERCOM2_DMAC_ID_TX                       (9)        
#define SERCOM2_FIFO_IMPLEMENTED                 (1)        /* FIFO Rx/Tx implemented? */
#define SERCOM2_FIFO_SIZE                        (16)       /* Rx-Tx FIFO size in bytes */
#define SERCOM2_FSYNC_IMPLEMENTED                (1)        /* SPI Frame Synch mode implemented? */
#define SERCOM2_GCLK_ID_CORE                     (23)       
#define SERCOM2_GCLK_ID_SLOW                     (20)       
#define SERCOM2_INSTANCE_ID                      (28)       /* Instance index for SERCOM2 */
#define SERCOM2_MCLK_ID_APB                      (38)       /* Index for SERCOM2 APB clock */
#define SERCOM2_PAC_ID                           (28)       /* Index for SERCOM2 registers write protection */
#define SERCOM2_PERIPH_ID                        (6)        /* H2PB Peripheral ID */
#define SERCOM2_SPI                              (1)        /* SPI mode implemented? */
#define SERCOM2_TWIM                             (1)        /* TWI Master mode implemented? */
#define SERCOM2_TWIS                             (1)        /* TWI Slave mode implemented? */
#define SERCOM2_TWI_HSMODE                       (0)        /* TWI HighSpeed mode implemented? */
#define SERCOM2_ULTRA_IMPLEMENTATION             (0)        /* ULTRA platform compatibility? */
#define SERCOM2_USART                            (1)        /* USART mode implemented? */
#define SERCOM2_USART_AUTOBAUD                   (1)        /* USART autobaud implemented? */
#define SERCOM2_USART_IRDA                       (1)        /* USART IrDA implemented? */
#define SERCOM2_USART_LIN_MASTER                 (1)        /* USART LIN Master mode implemented? */
#define SERCOM2_USART_RS485                      (1)        /* USART RS485 mode implemented? */

#endif /* _PIC32CMGC00_SERCOM2_INSTANCE_ */