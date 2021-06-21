/**
 * @file   startup_same54p20a.c
 * @author cy023
 * @brief  Startup Module for SAME54P20A Microcontrollers
 * @date   2021.06.05
 *
 * @brief 
 *      1. Create Vector table
 *      2. Copy .data section to SRAM
 *      3. Init the .bss section to zero in SRAM
 *      4. call main()
 */

#include "../src/core_cm4.h"

#define SRAM_START  0x20000000
#define SRAM_SIZE   (256 * 1024)
#define SRAM_END    ((SRAM_START) + (SRAM_SIZE))
#define STACK_START SRAM_END

/* Section address defined in linker script */
extern uint32_t _etext;
extern uint32_t _la_data;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;
extern uint32_t _estack;

extern int main(void);
void Default_Reset_Handler(void);
void Default_Handler(void);

/* Cortex-M4 processor system handlers */
void Reset_Handler          (void) __attribute__((weak, alias("Default_Reset_Handler")));
void NMI_Handler            (void) __attribute__((weak, alias("Default_Handler")));
void HardFault_Handler      (void) __attribute__((weak, alias("Default_Handler")));
void MemManage_Handler      (void) __attribute__((weak, alias("Default_Handler")));
void BusFault_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler     (void) __attribute__((weak, alias("Default_Handler")));
void SVCall_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void PendSV_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void SysTick_Handler        (void) __attribute__((weak, alias("Default_Handler")));

/**
 * @brief Exception Vector Table
 * see below info:
 *  
 */
// TODO : Find out the vector table in datasheet.
static void *const vector[] __attribute__((section(".isr_vector"))) = {
    /* Initial SP value */
    (void *) STACK_START,   // 0x00000000
    /* Cortex-M3 processor system handlers */
    Reset_Handler,          // 0x00000004
    NMI_Handler,            // 0x00000008
    HardFault_Handler,      // 0x0000000C
    MemManage_Handler,      // 0x00000010
    BusFault_Handler,       // 0x00000014
    UsageFault_Handler,     // 0x00000018
    0,                      // 0x0000001C
    0,                      // 0x00000020
    0,                      // 0x00000024
    0,                      // 0x00000028
    SVCall_Handler,         // 0x0000002C
    0,                      // 0x00000030
    0,                      // 0x00000034
    PendSV_Handler,         // 0x00000038
    SysTick_Handler,        // 0x0000003C
    /* Interrupt Exception Handler */
    Default_Handler, // 16
    Default_Handler, // 17
    Default_Handler, // 18
    Default_Handler, // 19
    Default_Handler, // 20
    Default_Handler, // 21
    Default_Handler, // 22
    Default_Handler, // 23
    Default_Handler, // 24
    Default_Handler, // 25
    Default_Handler, // 26
    Default_Handler, // 27
    Default_Handler, // 28
    Default_Handler, // 29
    Default_Handler, // 30
    Default_Handler, // 31
    Default_Handler, // 32
    Default_Handler, // 33
    Default_Handler, // 34
    Default_Handler, // 35
    Default_Handler, // 36
    Default_Handler, // 37
    Default_Handler, // 38
    Default_Handler, // 39
    Default_Handler, // 40
    Default_Handler, // 41
    Default_Handler, // 42
    Default_Handler, // 43
    Default_Handler, // 44
    Default_Handler, // 45
    Default_Handler, // 46
    Default_Handler, // 47
    Default_Handler, // 48
    Default_Handler, // 49
    Default_Handler, // 50
    Default_Handler, // 51
    Default_Handler, // 52
    Default_Handler, // 53
    Default_Handler, // 54
    Default_Handler, // 55
    Default_Handler, // 56
    Default_Handler, // 57
    Default_Handler, // 58
    Default_Handler, // 59
    Default_Handler, // 60
    Default_Handler, // 61
    Default_Handler, // 62
    Default_Handler, // 63
    Default_Handler, // 64
    Default_Handler, // 65
    Default_Handler, // 66
    Default_Handler, // 67
    Default_Handler, // 68
    Default_Handler, // 69
    Default_Handler, // 70
    Default_Handler, // 71
    Default_Handler, // 72
    Default_Handler, // 73
    Default_Handler, // 74
    Default_Handler, // 75
    Default_Handler, // 76
    Default_Handler, // 77
    Default_Handler, // 78
    Default_Handler, // 79
    Default_Handler, // 80
    Default_Handler, // 81
    Default_Handler, // 82
    Default_Handler, // 83
    Default_Handler, // 84
    Default_Handler, // 85
    Default_Handler, // 86
    Default_Handler, // 87
    Default_Handler, // 88
    Default_Handler, // 89
    Default_Handler, // 90
    Default_Handler, // 91
    Default_Handler, // 92
    Default_Handler, // 93
    Default_Handler, // 94
    Default_Handler, // 95
    Default_Handler, // 96
    Default_Handler, // 97
    Default_Handler, // 98
    Default_Handler, // 99
    Default_Handler, // 100
    Default_Handler, // 101
    Default_Handler, // 102
    Default_Handler, // 103
    Default_Handler, // 104
    Default_Handler, // 105
    Default_Handler, // 106
    Default_Handler, // 107
    Default_Handler, // 108
    Default_Handler, // 109
    Default_Handler, // 110
    Default_Handler, // 111
    Default_Handler, // 112
    Default_Handler, // 113
    Default_Handler, // 114
    Default_Handler, // 115
    Default_Handler, // 116
    Default_Handler, // 117
    Default_Handler, // 118
    Default_Handler, // 119
    Default_Handler, // 120
    Default_Handler, // 121
    Default_Handler, // 122
    Default_Handler, // 123
    Default_Handler, // 124
    Default_Handler, // 125
    Default_Handler, // 126
    Default_Handler, // 127
    Default_Handler, // 128
    Default_Handler, // 129
    Default_Handler, // 130
    Default_Handler, // 131
    Default_Handler, // 132
    Default_Handler, // 133
    Default_Handler, // 134
    Default_Handler, // 135
    Default_Handler, // 136
    Default_Handler, // 137
    Default_Handler, // 138
    Default_Handler, // 139
    Default_Handler, // 140
    Default_Handler, // 141
    Default_Handler, // 142
    Default_Handler, // 143
    Default_Handler, // 144
    Default_Handler, // 145
    Default_Handler, // 146
    Default_Handler, // 147
    Default_Handler, // 148
    Default_Handler, // 149
    Default_Handler, // 150
    Default_Handler, // 151
    Default_Handler, // 152
    Default_Handler, // 153
    Default_Handler, // 154
    Default_Handler, // 155
    Default_Handler, // 156
    Default_Handler, // 157
    Default_Handler, // 158
    Default_Handler, // 159
    Default_Handler, // 160
    Default_Handler, // 161
    Default_Handler, // 162
    Default_Handler, // 163
    Default_Handler, // 164
    Default_Handler, // 165
    Default_Handler, // 166
    Default_Handler, // 167
    Default_Handler, // 168
    Default_Handler, // 169
    Default_Handler, // 170
    Default_Handler, // 171
    Default_Handler, // 172
    Default_Handler, // 173
    Default_Handler, // 174
    Default_Handler, // 175
    Default_Handler, // 176
    Default_Handler, // 177
    Default_Handler, // 178
    Default_Handler, // 179
    Default_Handler, // 180
    Default_Handler, // 181
    Default_Handler, // 182
    Default_Handler, // 183
    Default_Handler, // 184
    Default_Handler, // 185
    Default_Handler, // 186
    Default_Handler, // 187
    Default_Handler, // 188
    Default_Handler, // 189
    Default_Handler, // 190
    Default_Handler, // 191
    Default_Handler, // 192
    Default_Handler, // 193
    Default_Handler, // 194
    Default_Handler, // 195
    Default_Handler, // 196
    Default_Handler, // 197
    Default_Handler, // 198
    Default_Handler, // 199
    Default_Handler, // 200
    Default_Handler, // 201
    Default_Handler, // 202
    Default_Handler, // 203
    Default_Handler, // 204
    Default_Handler, // 205
    Default_Handler, // 206
    Default_Handler, // 207
    Default_Handler, // 208
    Default_Handler, // 209
    Default_Handler, // 210
    Default_Handler, // 211
    Default_Handler, // 212
    Default_Handler, // 213
    Default_Handler, // 214
    Default_Handler, // 215
    Default_Handler, // 216
    Default_Handler, // 217
    Default_Handler, // 218
    Default_Handler, // 219
    Default_Handler, // 220
    Default_Handler, // 221
    Default_Handler, // 222
    Default_Handler, // 223
    Default_Handler, // 224
    Default_Handler, // 225
    Default_Handler, // 226
    Default_Handler, // 227
    Default_Handler, // 228
    Default_Handler, // 229
    Default_Handler, // 230
    Default_Handler, // 231
    Default_Handler, // 232
    Default_Handler, // 233
    Default_Handler, // 234
    Default_Handler, // 235
    Default_Handler, // 236
    Default_Handler, // 237
    Default_Handler, // 238
    Default_Handler, // 239
    Default_Handler, // 240
    Default_Handler, // 241
    Default_Handler, // 242
    Default_Handler, // 243
    Default_Handler, // 244
    Default_Handler, // 245
    Default_Handler, // 246
    Default_Handler, // 247
    Default_Handler, // 248
    Default_Handler, // 249
    Default_Handler, // 250
    Default_Handler, // 251
    Default_Handler, // 252
    Default_Handler, // 253
    Default_Handler, // 254
    (void *)0xFFFFFFFF, // 255
};

/**
 * @brief Initialize .data section.
 */
static void copy_data_section()
{
    uint8_t *src = (uint8_t *) &_la_data;
    uint8_t *des = (uint8_t *) &_sdata;
    while (des < (uint8_t *) &_edata) {
        *des++ = *src++;
    }
}

/**
 * @brief Initialize .bss section.
 */
static void clear_bss_section()
{
    uint8_t *src = (uint8_t *) &_sbss;
    while (src < (uint8_t *) &_ebss) {
        *src++ = 0;
    }
}

/**
 * @brief The entry point after HW reset.
 *
 * Initialize .data and .bss sections and then start main().
 */
void Default_Reset_Handler(void)
{
    SCB_VTOR = (uint32_t) vector;

    copy_data_section();
    clear_bss_section();
    
    main();
    while (1) ;
}

/**
 * @brief Default Exception Handler
 */
void Default_Handler(void)
{
    while (1) ;
}
