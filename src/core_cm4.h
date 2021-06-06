/**
 * @file   core_cm4.h
 * @author cy023
 * @brief  ARM Cortex-M4 peripherals
 * @ref    Cortex-M4 Devices Generic User Guide
 *         (https://developer.arm.com/documentation/dui0553/latest/)
 * @date   2021.06.05
 */

#ifndef __CORE_CM4_H
#define __CORE_CM4_H

#include <stdint.h>

// TODO : porting to CM4

// /**
//  * Cortex-M3 NVIC
//  *
//  * Reference:
//  *   Filename: DUI0552A_cortex_m3_dgug.pdf
//  *   Chapter:  4.2 Nested Vectored Interrupt Controller
//  *   Position: Page 4-3. Table 4-2 NVIC register summary
//  */
// #define NVIC_ISER           ( (volatile uint32_t *)0xE000E100)
// #define NVIC_ISER0          (*(volatile uint32_t *)0xE000E100)
// #define NVIC_ISER1          (*(volatile uint32_t *)0xE000E104)
// #define NVIC_ISER2          (*(volatile uint32_t *)0xE000E108)
// #define NVIC_ISER3          (*(volatile uint32_t *)0xE000E10C)
// #define NVIC_ISER4          (*(volatile uint32_t *)0xE000E110)
// #define NVIC_ISER5          (*(volatile uint32_t *)0xE000E114)
// #define NVIC_ISER6          (*(volatile uint32_t *)0xE000E118)
// #define NVIC_ISER7          (*(volatile uint32_t *)0xE000E11C)
// #define NVIC_ICER           ( (volatile uint32_t *)0xE000E180)
// #define NVIC_ICER0          (*(volatile uint32_t *)0xE000E180)
// #define NVIC_ICER1          (*(volatile uint32_t *)0xE000E184)
// #define NVIC_ICER2          (*(volatile uint32_t *)0xE000E188)
// #define NVIC_ICER3          (*(volatile uint32_t *)0xE000E18C)
// #define NVIC_ICER4          (*(volatile uint32_t *)0xE000E190)
// #define NVIC_ICER5          (*(volatile uint32_t *)0xE000E194)
// #define NVIC_ICER6          (*(volatile uint32_t *)0xE000E198)
// #define NVIC_ICER7          (*(volatile uint32_t *)0xE000E19C)
// #define NVIC_ISPR           ( (volatile uint32_t *)0xE000E200)
// #define NVIC_ISPR0          (*(volatile uint32_t *)0xE000E200)
// #define NVIC_ISPR1          (*(volatile uint32_t *)0xE000E204)
// #define NVIC_ISPR2          (*(volatile uint32_t *)0xE000E208)
// #define NVIC_ISPR3          (*(volatile uint32_t *)0xE000E20C)
// #define NVIC_ISPR4          (*(volatile uint32_t *)0xE000E210)
// #define NVIC_ISPR5          (*(volatile uint32_t *)0xE000E214)
// #define NVIC_ISPR6          (*(volatile uint32_t *)0xE000E218)
// #define NVIC_ISPR7          (*(volatile uint32_t *)0xE000E21C)
// #define NVIC_ICPR           ( (volatile uint32_t *)0xE000E280)
// #define NVIC_ICPR0          (*(volatile uint32_t *)0xE000E280)
// #define NVIC_ICPR1          (*(volatile uint32_t *)0xE000E284)
// #define NVIC_ICPR2          (*(volatile uint32_t *)0xE000E288)
// #define NVIC_ICPR3          (*(volatile uint32_t *)0xE000E28C)
// #define NVIC_ICPR4          (*(volatile uint32_t *)0xE000E290)
// #define NVIC_ICPR5          (*(volatile uint32_t *)0xE000E294)
// #define NVIC_ICPR6          (*(volatile uint32_t *)0xE000E298)
// #define NVIC_ICPR7          (*(volatile uint32_t *)0xE000E29C)
// #define NVIC_IABR           ( (volatile uint32_t *)0xE000E300)
// #define NVIC_IABR0          (*(volatile uint32_t *)0xE000E300)
// #define NVIC_IABR1          (*(volatile uint32_t *)0xE000E304)
// #define NVIC_IABR2          (*(volatile uint32_t *)0xE000E308)
// #define NVIC_IABR3          (*(volatile uint32_t *)0xE000E30C)
// #define NVIC_IABR4          (*(volatile uint32_t *)0xE000E310)
// #define NVIC_IABR5          (*(volatile uint32_t *)0xE000E314)
// #define NVIC_IABR6          (*(volatile uint32_t *)0xE000E318)
// #define NVIC_IABR7          (*(volatile uint32_t *)0xE000E31C)
// #define NVIC_IPR            ( (volatile  uint8_t *)0xE000E400)
// #define NVIC_IPR0           (*(volatile uint32_t *)0xE000E400)
// #define NVIC_IPR1           (*(volatile uint32_t *)0xE000E404)
// #define NVIC_IPR2           (*(volatile uint32_t *)0xE000E408)
// #define NVIC_IPR3           (*(volatile uint32_t *)0xE000E40C)
// #define NVIC_IPR4           (*(volatile uint32_t *)0xE000E410)
// #define NVIC_IPR5           (*(volatile uint32_t *)0xE000E414)
// #define NVIC_IPR6           (*(volatile uint32_t *)0xE000E418)
// #define NVIC_IPR7           (*(volatile uint32_t *)0xE000E41C)
// #define NVIC_IPR8           (*(volatile uint32_t *)0xE000E420)
// #define NVIC_IPR9           (*(volatile uint32_t *)0xE000E424)
// #define NVIC_IPR10          (*(volatile uint32_t *)0xE000E428)
// #define NVIC_IPR11          (*(volatile uint32_t *)0xE000E42C)
// #define NVIC_IPR12          (*(volatile uint32_t *)0xE000E430)
// #define NVIC_IPR13          (*(volatile uint32_t *)0xE000E434)
// #define NVIC_IPR14          (*(volatile uint32_t *)0xE000E438)
// #define NVIC_IPR15          (*(volatile uint32_t *)0xE000E43C)
// #define NVIC_IPR16          (*(volatile uint32_t *)0xE000E440)
// #define NVIC_IPR17          (*(volatile uint32_t *)0xE000E444)
// #define NVIC_IPR18          (*(volatile uint32_t *)0xE000E448)
// #define NVIC_IPR19          (*(volatile uint32_t *)0xE000E44C)
// #define NVIC_IPR20          (*(volatile uint32_t *)0xE000E450)
// #define NVIC_IPR21          (*(volatile uint32_t *)0xE000E454)
// #define NVIC_IPR22          (*(volatile uint32_t *)0xE000E458)
// #define NVIC_IPR23          (*(volatile uint32_t *)0xE000E45C)
// #define NVIC_IPR24          (*(volatile uint32_t *)0xE000E460)
// #define NVIC_IPR25          (*(volatile uint32_t *)0xE000E464)
// #define NVIC_IPR26          (*(volatile uint32_t *)0xE000E468)
// #define NVIC_IPR27          (*(volatile uint32_t *)0xE000E46C)
// #define NVIC_IPR28          (*(volatile uint32_t *)0xE000E470)
// #define NVIC_IPR29          (*(volatile uint32_t *)0xE000E474)
// #define NVIC_IPR30          (*(volatile uint32_t *)0xE000E478)
// #define NVIC_IPR31          (*(volatile uint32_t *)0xE000E47C)
// #define NVIC_IPR32          (*(volatile uint32_t *)0xE000E480)
// #define NVIC_IPR33          (*(volatile uint32_t *)0xE000E484)
// #define NVIC_IPR34          (*(volatile uint32_t *)0xE000E488)
// #define NVIC_IPR35          (*(volatile uint32_t *)0xE000E48C)
// #define NVIC_IPR36          (*(volatile uint32_t *)0xE000E490)
// #define NVIC_IPR37          (*(volatile uint32_t *)0xE000E494)
// #define NVIC_IPR38          (*(volatile uint32_t *)0xE000E498)
// #define NVIC_IPR39          (*(volatile uint32_t *)0xE000E49C)
// #define NVIC_IPR40          (*(volatile uint32_t *)0xE000E4A0)
// #define NVIC_IPR41          (*(volatile uint32_t *)0xE000E4A4)
// #define NVIC_IPR42          (*(volatile uint32_t *)0xE000E4A8)
// #define NVIC_IPR43          (*(volatile uint32_t *)0xE000E4AC)
// #define NVIC_IPR44          (*(volatile uint32_t *)0xE000E4B0)
// #define NVIC_IPR45          (*(volatile uint32_t *)0xE000E4B4)
// #define NVIC_IPR46          (*(volatile uint32_t *)0xE000E4B8)
// #define NVIC_IPR47          (*(volatile uint32_t *)0xE000E4BC)
// #define NVIC_IPR48          (*(volatile uint32_t *)0xE000E4C0)
// #define NVIC_IPR49          (*(volatile uint32_t *)0xE000E4C4)
// #define NVIC_IPR50          (*(volatile uint32_t *)0xE000E4C8)
// #define NVIC_IPR51          (*(volatile uint32_t *)0xE000E4CC)
// #define NVIC_IPR52          (*(volatile uint32_t *)0xE000E4D0)
// #define NVIC_IPR53          (*(volatile uint32_t *)0xE000E4D4)
// #define NVIC_IPR54          (*(volatile uint32_t *)0xE000E4D8)
// #define NVIC_IPR55          (*(volatile uint32_t *)0xE000E4DC)
// #define NVIC_IPR56          (*(volatile uint32_t *)0xE000E4E0)
// #define NVIC_IPR57          (*(volatile uint32_t *)0xE000E4E4)
// #define NVIC_IPR58          (*(volatile uint32_t *)0xE000E4E8)
// #define NVIC_IPR59          (*(volatile uint32_t *)0xE000E4EC)
// #define STIR                (*(volatile uint32_t *)0xE000EF00)

// /**
//  * Cortex-M3 SCB
//  *
//  * Reference:
//  *   Filename: DUI0552A_cortex_m3_dgug.pdf
//  *   Chapter:  4.3 System control block
//  *   Location: Page 4-11. Table 4-12 Summary of the system control block registers
//  */
// #define ACTLR               (*(volatile uint32_t *)0xE000E008)
// #define CPUID               (*(volatile uint32_t *)0xE000ED00)
// #define ICSR                (*(volatile uint32_t *)0xE000ED04)
// #define VTOR                (*(volatile uint32_t *)0xE000ED08)
// #define AIRCR               (*(volatile uint32_t *)0xE000ED0C)
// #define SCR                 (*(volatile uint32_t *)0xE000ED10)
// #define CCR_                (*(volatile uint32_t *)0xE000ED14)
// #define SHPR                ( (volatile  uint8_t *)0xE000ED18)
// #define SHPR1               (*(volatile uint32_t *)0xE000ED18)
// #define SHPR2               (*(volatile uint32_t *)0xE000ED1C)
// #define SHPR3               (*(volatile uint32_t *)0xE000ED20)
// #define SHCRS               (*(volatile uint32_t *)0xE000ED24)
// #define CFSR                (*(volatile uint32_t *)0xE000ED28)
// #define MMSR                (*(volatile  uint8_t *)0xE000ED28)
// #define BFSR                (*(volatile  uint8_t *)0xE000ED29)
// #define UFSR                (*(volatile uint16_t *)0xE000ED2A)
// #define HFSR                (*(volatile uint32_t *)0xE000ED2C)
// #define MMAR                (*(volatile uint32_t *)0xE000ED34)
// #define BFAR                (*(volatile uint32_t *)0xE000ED38)
// #define AFSR                (*(volatile uint32_t *)0xE000ED3C)

// /**
//  * Cortex-M3 SYST
//  *
//  * Reference:
//  *   Filename: DUI0552A_cortex_m3_dgug.pdf
//  *   Chapter:  4.4 System timer, SysTick
//  *   Location: Page 4-33. Table 4-32 System timer registers summary
//  */
// #define SYST_CSR            (*(volatile uint32_t *)0xE000E010)
// #define SYST_RVR            (*(volatile uint32_t *)0xE000E014)
// #define SYST_CVR            (*(volatile uint32_t *)0xE000E018)
// #define SYST_CALIB          (*(volatile uint32_t *)0xE000E01C)

// /**
//  * Cortex-M3 MPU
//  *
//  * Reference:
//  *   Filename: DUI0552A_cortex_m3_dgug.pdf
//  *   Chapter:  4.5 Optional Memory Protection Unit
//  *   Position: Page 4-37. Table 4-37 Memory attributes summary
//  */
// #define MPU_TYPE            (*(volatile uint32_t *)0xE000ED90)
// #define MPU_CTRL            (*(volatile uint32_t *)0xE000ED94)
// #define MPU_RNR             (*(volatile uint32_t *)0xE000ED98)
// #define MPU_RBAR            (*(volatile uint32_t *)0xE000ED9C)
// #define MPU_RASR            (*(volatile uint32_t *)0xE000EDA0)
// #define MPU_RBAR_A1         (*(volatile uint32_t *)0xE000EDA4)
// #define MPU_RBSR_A1         (*(volatile uint32_t *)0xE000EDA8)
// #define MPU_RBAR_A2         (*(volatile uint32_t *)0xE000EDAC)
// #define MPU_RBSR_A2         (*(volatile uint32_t *)0xE000EDB0)
// #define MPU_RBAR_A3         (*(volatile uint32_t *)0xE000EDB4)
// #define MPU_RBSR_A3         (*(volatile uint32_t *)0xE000EDB8)

// /**
//  * Cortex-M3 CPUID
//  *
//  * Reference:
//  *   Filename: DDI0403E_d_armv7m_arm.pdf
//  *   Chapter:  B4.1 About the CPUID scheme
//  *   Position: B4-644. Table B4-1 Processor Feature ID register support in the SCS
//  *
//  * CPUID (0xE000ED00) is defined previously.
//  */
// #define ID_PFR0             (*(volatile uint32_t *)0xE000ED40)
// #define ID_PFR1             (*(volatile uint32_t *)0xE000ED44)
// #define ID_DFR0             (*(volatile uint32_t *)0xE000ED48)
// #define ID_DFR1             (*(volatile uint32_t *)0xE000ED4C)
// #define ID_MMFR0            (*(volatile uint32_t *)0xE000ED50)
// #define ID_MMFR1            (*(volatile uint32_t *)0xE000ED54)
// #define ID_MMFR2            (*(volatile uint32_t *)0xE000ED58)
// #define ID_MMFR3            (*(volatile uint32_t *)0xE000ED5C)
// #define ID_ISAR0            (*(volatile uint32_t *)0xE000ED60)
// #define ID_ISAR1            (*(volatile uint32_t *)0xE000ED64)
// #define ID_ISAR2            (*(volatile uint32_t *)0xE000ED68)
// #define ID_ISAR3            (*(volatile uint32_t *)0xE000ED6C)
// #define ID_ISAR4            (*(volatile uint32_t *)0xE000ED70)
// #define CLIDR               (*(volatile uint32_t *)0xE000ED78)
// #define CTR                 (*(volatile uint32_t *)0xE000ED7C)
// #define CCSIDR              (*(volatile uint32_t *)0xE000ED80)
// #define CSSELR              (*(volatile uint32_t *)0xE000ED84)

// /**
//  * Cortex-M3 SCS
//  *
//  * Reference:
//  *   Filename: DDI0403E_d_armv7m_arm.pdf
//  *   Chapter:  B3.2 System Control Space (SCS)
//  *   Position: B3-597. Table B3-4 Summary of SCB registers
//  *
//  * This secction define SCS registers which is not defined in
//  * SCB section.
//  */
// #define DFSR                (*(volatile uint32_t *)0xE000ED30)
// #define CPACR               (*(volatile uint32_t *)0xE000ED88)
// #define ICTR                (*(volatile uint32_t *)0xE000E004)
// #define ACTLR               (*(volatile uint32_t *)0xE000E008)

#endif /* __CORE_CM4_H */