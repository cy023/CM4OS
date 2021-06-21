/**
 * @file   same54p20a.ld
 * @author cy023
 * @brief  same54p20a Linker Script
 * @date   2021.06.05
 */

ENTRY(Reset_Handler)

/**
 * Reference:
 *   Filename: SAM_D5x_E5x_Family_Data_Sheet_DS60001507G.pdf
 *   Chapter:  1. Configuration Summary
 *   Position: Page 17 Table 1-1. SAM E53/E54 Family Features with Ethernet
 */
MEMORY
{
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 1024K
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 256K
}

SECTIONS
{
    .text :
    {
        *(.isr_vector)
        *(.text)
        *(.text.*)
        *(.init)
        *(.fini)
        *(.rodata)
        *(.rodata.*)
        . = ALIGN(4);
        _etext = .;
    } >FLASH

    _la_data = LOADADDR(.data);

    .data :
    {
        _sdata = .;
        *(.data)
        *(.data.*)
        . = ALIGN(4);
        _edata = .;
    } >SRAM AT> FLASH

    .bss : 
    {
        _sbss = .;
        __bss_start__ = _sbss;
        *(.bss)
        *(.bss.*)
        *(COMMON)
        . = ALIGN(4);
        _ebss = .;
        __bss_end__ = _ebss;
    } >SRAM
}