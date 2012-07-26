/*  ============================================================================
 *   Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *   Use of this software is controlled by the terms and conditions found in the
 *   license agreement under which this software has been supplied.
 *   ===========================================================================
 */
/** ============================================================================
 *   @file  cslr_gpio.h
 *
 *   @path  $(CSLPATH)\inc
 *
 *   @desc  This file contains the Register Descriptions for GPIO
 */
#ifndef _CSLR_GPIO_H_
#define _CSLR_GPIO_H_

#include <cslr.h>
#include <tistdtypes.h>

#define CSL_GPIO_NUM_PINS           (16)

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint8 RSVD0[8];
    volatile Uint32 BINTEN;
    volatile Uint8 RSVD1[4];
    volatile Uint32 DIR;
    volatile Uint32 OUT_DATA;
    volatile Uint32 SET_DATA;
    volatile Uint32 CLR_DATA;
    volatile Uint32 IN_DATA;
    volatile Uint32 SET_RIS_TRIG;
    volatile Uint32 CLR_RIS_TRIG;
    volatile Uint32 SET_FAL_TRIG;
    volatile Uint32 CLR_FAL_TRIG;
} CSL_GpioRegs;

/**************************************************************************\
* Overlay structure typedef definition
\**************************************************************************/
typedef volatile CSL_GpioRegs             *CSL_GpioRegsOvly;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* BINTEN */

#define CSL_GPIO_BINTEN_EN_MASK          (0x00000001u)
#define CSL_GPIO_BINTEN_EN_SHIFT         (0x00000000u)
#define CSL_GPIO_BINTEN_EN_RESETVAL      (0x00000000u)

/*----EN Tokens----*/
#define CSL_GPIO_BINTEN_EN_DISABLE       (0x00000000u)
#define CSL_GPIO_BINTEN_EN_ENABLE        (0x00000001u)

#define CSL_GPIO_BINTEN_RESETVAL         (0x00000000u)

/* DIR */

#define CSL_GPIO_DIR_DIR15_MASK          (0x00008000u)
#define CSL_GPIO_DIR_DIR15_SHIFT         (0x0000000Fu)
#define CSL_GPIO_DIR_DIR15_RESETVAL      (0x00000001u)

#define CSL_GPIO_DIR_DIR14_MASK          (0x00004000u)
#define CSL_GPIO_DIR_DIR14_SHIFT         (0x0000000Eu)
#define CSL_GPIO_DIR_DIR14_RESETVAL      (0x00000001u)

#define CSL_GPIO_DIR_DIR13_MASK          (0x00002000u)
#define CSL_GPIO_DIR_DIR13_SHIFT         (0x0000000Du)
#define CSL_GPIO_DIR_DIR13_RESETVAL      (0x00000001u)

#define CSL_GPIO_DIR_DIR12_MASK          (0x00001000u)
#define CSL_GPIO_DIR_DIR12_SHIFT         (0x0000000Cu)
#define CSL_GPIO_DIR_DIR12_RESETVAL      (0x00000001u)

#define CSL_GPIO_DIR_DIR11_MASK          (0x00000800u)
#define CSL_GPIO_DIR_DIR11_SHIFT         (0x0000000Bu)
#define CSL_GPIO_DIR_DIR11_RESETVAL      (0x00000001u)

#define CSL_GPIO_DIR_DIR10_MASK          (0x00000400u)
#define CSL_GPIO_DIR_DIR10_SHIFT         (0x0000000Au)
#define CSL_GPIO_DIR_DIR10_RESETVAL      (0x00000001u)

#define CSL_GPIO_DIR_DIR9_MASK           (0x00000200u)
#define CSL_GPIO_DIR_DIR9_SHIFT          (0x00000009u)
#define CSL_GPIO_DIR_DIR9_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR8_MASK           (0x00000100u)
#define CSL_GPIO_DIR_DIR8_SHIFT          (0x00000008u)
#define CSL_GPIO_DIR_DIR8_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR7_MASK           (0x00000080u)
#define CSL_GPIO_DIR_DIR7_SHIFT          (0x00000007u)
#define CSL_GPIO_DIR_DIR7_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR6_MASK           (0x00000040u)
#define CSL_GPIO_DIR_DIR6_SHIFT          (0x00000006u)
#define CSL_GPIO_DIR_DIR6_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR5_MASK           (0x00000020u)
#define CSL_GPIO_DIR_DIR5_SHIFT          (0x00000005u)
#define CSL_GPIO_DIR_DIR5_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR4_MASK           (0x00000010u)
#define CSL_GPIO_DIR_DIR4_SHIFT          (0x00000004u)
#define CSL_GPIO_DIR_DIR4_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR3_MASK           (0x00000008u)
#define CSL_GPIO_DIR_DIR3_SHIFT          (0x00000003u)
#define CSL_GPIO_DIR_DIR3_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR2_MASK           (0x00000004u)
#define CSL_GPIO_DIR_DIR2_SHIFT          (0x00000002u)
#define CSL_GPIO_DIR_DIR2_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR1_MASK           (0x00000002u)
#define CSL_GPIO_DIR_DIR1_SHIFT          (0x00000001u)
#define CSL_GPIO_DIR_DIR1_RESETVAL       (0x00000001u)

#define CSL_GPIO_DIR_DIR0_MASK           (0x00000001u)
#define CSL_GPIO_DIR_DIR0_SHIFT          (0x00000000u)
#define CSL_GPIO_DIR_DIR0_RESETVAL       (0x00000001u)

/*----DIR Tokens----*/
#define CSL_GPIO_DIR_DIR_OUT             (0x00000000u)
#define CSL_GPIO_DIR_DIR_IN              (0x00000001u)

#define CSL_GPIO_DIR_RESETVAL            (0x0000FFFFu)

/* OUT_DATA */

#define CSL_GPIO_OUT_DATA_OUT15_MASK     (0x00008000u)
#define CSL_GPIO_OUT_DATA_OUT15_SHIFT    (0x0000000Fu)
#define CSL_GPIO_OUT_DATA_OUT15_RESETVAL (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT14_MASK     (0x00004000u)
#define CSL_GPIO_OUT_DATA_OUT14_SHIFT    (0x0000000Eu)
#define CSL_GPIO_OUT_DATA_OUT14_RESETVAL (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT13_MASK     (0x00002000u)
#define CSL_GPIO_OUT_DATA_OUT13_SHIFT    (0x0000000Du)
#define CSL_GPIO_OUT_DATA_OUT13_RESETVAL (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT12_MASK     (0x00001000u)
#define CSL_GPIO_OUT_DATA_OUT12_SHIFT    (0x0000000Cu)
#define CSL_GPIO_OUT_DATA_OUT12_RESETVAL (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT11_MASK     (0x00000800u)
#define CSL_GPIO_OUT_DATA_OUT11_SHIFT    (0x0000000Bu)
#define CSL_GPIO_OUT_DATA_OUT11_RESETVAL (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT10_MASK     (0x00000400u)
#define CSL_GPIO_OUT_DATA_OUT10_SHIFT    (0x0000000Au)
#define CSL_GPIO_OUT_DATA_OUT10_RESETVAL (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT9_MASK      (0x00000200u)
#define CSL_GPIO_OUT_DATA_OUT9_SHIFT     (0x00000009u)
#define CSL_GPIO_OUT_DATA_OUT9_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT8_MASK      (0x00000100u)
#define CSL_GPIO_OUT_DATA_OUT8_SHIFT     (0x00000008u)
#define CSL_GPIO_OUT_DATA_OUT8_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT7_MASK      (0x00000080u)
#define CSL_GPIO_OUT_DATA_OUT7_SHIFT     (0x00000007u)
#define CSL_GPIO_OUT_DATA_OUT7_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT6_MASK      (0x00000040u)
#define CSL_GPIO_OUT_DATA_OUT6_SHIFT     (0x00000006u)
#define CSL_GPIO_OUT_DATA_OUT6_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT5_MASK      (0x00000020u)
#define CSL_GPIO_OUT_DATA_OUT5_SHIFT     (0x00000005u)
#define CSL_GPIO_OUT_DATA_OUT5_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT4_MASK      (0x00000010u)
#define CSL_GPIO_OUT_DATA_OUT4_SHIFT     (0x00000004u)
#define CSL_GPIO_OUT_DATA_OUT4_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT3_MASK      (0x00000008u)
#define CSL_GPIO_OUT_DATA_OUT3_SHIFT     (0x00000003u)
#define CSL_GPIO_OUT_DATA_OUT3_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT2_MASK      (0x00000004u)
#define CSL_GPIO_OUT_DATA_OUT2_SHIFT     (0x00000002u)
#define CSL_GPIO_OUT_DATA_OUT2_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT1_MASK      (0x00000002u)
#define CSL_GPIO_OUT_DATA_OUT1_SHIFT     (0x00000001u)
#define CSL_GPIO_OUT_DATA_OUT1_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_OUT0_MASK      (0x00000001u)
#define CSL_GPIO_OUT_DATA_OUT0_SHIFT     (0x00000000u)
#define CSL_GPIO_OUT_DATA_OUT0_RESETVAL  (0x00000000u)

#define CSL_GPIO_OUT_DATA_RESETVAL       (0x00000000u)

/* SET_DATA */

#define CSL_GPIO_SET_DATA_SET15_MASK     (0x00008000u)
#define CSL_GPIO_SET_DATA_SET15_SHIFT    (0x0000000Fu)
#define CSL_GPIO_SET_DATA_SET15_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_DATA_SET14_MASK     (0x00004000u)
#define CSL_GPIO_SET_DATA_SET14_SHIFT    (0x0000000Eu)
#define CSL_GPIO_SET_DATA_SET14_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_DATA_SET13_MASK     (0x00002000u)
#define CSL_GPIO_SET_DATA_SET13_SHIFT    (0x0000000Du)
#define CSL_GPIO_SET_DATA_SET13_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_DATA_SET12_MASK     (0x00001000u)
#define CSL_GPIO_SET_DATA_SET12_SHIFT    (0x0000000Cu)
#define CSL_GPIO_SET_DATA_SET12_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_DATA_SET11_MASK     (0x00000800u)
#define CSL_GPIO_SET_DATA_SET11_SHIFT    (0x0000000Bu)
#define CSL_GPIO_SET_DATA_SET11_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_DATA_SET10_MASK     (0x00000400u)
#define CSL_GPIO_SET_DATA_SET10_SHIFT    (0x0000000Au)
#define CSL_GPIO_SET_DATA_SET10_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_DATA_SET9_MASK      (0x00000200u)
#define CSL_GPIO_SET_DATA_SET9_SHIFT     (0x00000009u)
#define CSL_GPIO_SET_DATA_SET9_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET8_MASK      (0x00000100u)
#define CSL_GPIO_SET_DATA_SET8_SHIFT     (0x00000008u)
#define CSL_GPIO_SET_DATA_SET8_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET7_MASK      (0x00000080u)
#define CSL_GPIO_SET_DATA_SET7_SHIFT     (0x00000007u)
#define CSL_GPIO_SET_DATA_SET7_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET6_MASK      (0x00000040u)
#define CSL_GPIO_SET_DATA_SET6_SHIFT     (0x00000006u)
#define CSL_GPIO_SET_DATA_SET6_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET5_MASK      (0x00000020u)
#define CSL_GPIO_SET_DATA_SET5_SHIFT     (0x00000005u)
#define CSL_GPIO_SET_DATA_SET5_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET4_MASK      (0x00000010u)
#define CSL_GPIO_SET_DATA_SET4_SHIFT     (0x00000004u)
#define CSL_GPIO_SET_DATA_SET4_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET3_MASK      (0x00000008u)
#define CSL_GPIO_SET_DATA_SET3_SHIFT     (0x00000003u)
#define CSL_GPIO_SET_DATA_SET3_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET2_MASK      (0x00000004u)
#define CSL_GPIO_SET_DATA_SET2_SHIFT     (0x00000002u)
#define CSL_GPIO_SET_DATA_SET2_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET1_MASK      (0x00000002u)
#define CSL_GPIO_SET_DATA_SET1_SHIFT     (0x00000001u)
#define CSL_GPIO_SET_DATA_SET1_RESETVAL  (0x00000000u)

#define CSL_GPIO_SET_DATA_SET0_MASK      (0x00000001u)
#define CSL_GPIO_SET_DATA_SET0_SHIFT     (0x00000000u)
#define CSL_GPIO_SET_DATA_SET0_RESETVAL  (0x00000000u)

/*----SET Tokens----*/
#define CSL_GPIO_SET_DATA_SET_SET        (0x00000001u)

#define CSL_GPIO_SET_DATA_RESETVAL       (0x00000000u)

/* CLR_DATA */

#define CSL_GPIO_CLR_DATA_CLR15_MASK     (0x00008000u)
#define CSL_GPIO_CLR_DATA_CLR15_SHIFT    (0x0000000Fu)
#define CSL_GPIO_CLR_DATA_CLR15_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR14_MASK     (0x00004000u)
#define CSL_GPIO_CLR_DATA_CLR14_SHIFT    (0x0000000Eu)
#define CSL_GPIO_CLR_DATA_CLR14_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR13_MASK     (0x00002000u)
#define CSL_GPIO_CLR_DATA_CLR13_SHIFT    (0x0000000Du)
#define CSL_GPIO_CLR_DATA_CLR13_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR12_MASK     (0x00001000u)
#define CSL_GPIO_CLR_DATA_CLR12_SHIFT    (0x0000000Cu)
#define CSL_GPIO_CLR_DATA_CLR12_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR11_MASK     (0x00000800u)
#define CSL_GPIO_CLR_DATA_CLR11_SHIFT    (0x0000000Bu)
#define CSL_GPIO_CLR_DATA_CLR11_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR10_MASK     (0x00000400u)
#define CSL_GPIO_CLR_DATA_CLR10_SHIFT    (0x0000000Au)
#define CSL_GPIO_CLR_DATA_CLR10_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR9_MASK      (0x00000200u)
#define CSL_GPIO_CLR_DATA_CLR9_SHIFT     (0x00000009u)
#define CSL_GPIO_CLR_DATA_CLR9_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR8_MASK      (0x00000100u)
#define CSL_GPIO_CLR_DATA_CLR8_SHIFT     (0x00000008u)
#define CSL_GPIO_CLR_DATA_CLR8_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR7_MASK      (0x00000080u)
#define CSL_GPIO_CLR_DATA_CLR7_SHIFT     (0x00000007u)
#define CSL_GPIO_CLR_DATA_CLR7_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR6_MASK      (0x00000040u)
#define CSL_GPIO_CLR_DATA_CLR6_SHIFT     (0x00000006u)
#define CSL_GPIO_CLR_DATA_CLR6_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR5_MASK      (0x00000020u)
#define CSL_GPIO_CLR_DATA_CLR5_SHIFT     (0x00000005u)
#define CSL_GPIO_CLR_DATA_CLR5_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR4_MASK      (0x00000010u)
#define CSL_GPIO_CLR_DATA_CLR4_SHIFT     (0x00000004u)
#define CSL_GPIO_CLR_DATA_CLR4_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR3_MASK      (0x00000008u)
#define CSL_GPIO_CLR_DATA_CLR3_SHIFT     (0x00000003u)
#define CSL_GPIO_CLR_DATA_CLR3_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR2_MASK      (0x00000004u)
#define CSL_GPIO_CLR_DATA_CLR2_SHIFT     (0x00000002u)
#define CSL_GPIO_CLR_DATA_CLR2_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR1_MASK      (0x00000002u)
#define CSL_GPIO_CLR_DATA_CLR1_SHIFT     (0x00000001u)
#define CSL_GPIO_CLR_DATA_CLR1_RESETVAL  (0x00000000u)

#define CSL_GPIO_CLR_DATA_CLR0_MASK      (0x00000001u)
#define CSL_GPIO_CLR_DATA_CLR0_SHIFT     (0x00000000u)
#define CSL_GPIO_CLR_DATA_CLR0_RESETVAL  (0x00000000u)

/*----CLR Tokens----*/
#define CSL_GPIO_CLR_DATA_CLR_CLR        (0x00000001u)

#define CSL_GPIO_CLR_DATA_RESETVAL       (0x00000000u)

/* IN_DATA */

#define CSL_GPIO_IN_DATA_IN15_MASK       (0x00008000u)
#define CSL_GPIO_IN_DATA_IN15_SHIFT      (0x0000000Fu)
#define CSL_GPIO_IN_DATA_IN15_RESETVAL   (0x00000000u)

#define CSL_GPIO_IN_DATA_IN14_MASK       (0x00004000u)
#define CSL_GPIO_IN_DATA_IN14_SHIFT      (0x0000000Eu)
#define CSL_GPIO_IN_DATA_IN14_RESETVAL   (0x00000000u)

#define CSL_GPIO_IN_DATA_IN13_MASK       (0x00002000u)
#define CSL_GPIO_IN_DATA_IN13_SHIFT      (0x0000000Du)
#define CSL_GPIO_IN_DATA_IN13_RESETVAL   (0x00000000u)

#define CSL_GPIO_IN_DATA_IN12_MASK       (0x00001000u)
#define CSL_GPIO_IN_DATA_IN12_SHIFT      (0x0000000Cu)
#define CSL_GPIO_IN_DATA_IN12_RESETVAL   (0x00000000u)

#define CSL_GPIO_IN_DATA_IN11_MASK       (0x00000800u)
#define CSL_GPIO_IN_DATA_IN11_SHIFT      (0x0000000Bu)
#define CSL_GPIO_IN_DATA_IN11_RESETVAL   (0x00000000u)

#define CSL_GPIO_IN_DATA_IN10_MASK       (0x00000400u)
#define CSL_GPIO_IN_DATA_IN10_SHIFT      (0x0000000Au)
#define CSL_GPIO_IN_DATA_IN10_RESETVAL   (0x00000000u)

#define CSL_GPIO_IN_DATA_IN9_MASK        (0x00000200u)
#define CSL_GPIO_IN_DATA_IN9_SHIFT       (0x00000009u)
#define CSL_GPIO_IN_DATA_IN9_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN8_MASK        (0x00000100u)
#define CSL_GPIO_IN_DATA_IN8_SHIFT       (0x00000008u)
#define CSL_GPIO_IN_DATA_IN8_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN7_MASK        (0x00000080u)
#define CSL_GPIO_IN_DATA_IN7_SHIFT       (0x00000007u)
#define CSL_GPIO_IN_DATA_IN7_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN6_MASK        (0x00000040u)
#define CSL_GPIO_IN_DATA_IN6_SHIFT       (0x00000006u)
#define CSL_GPIO_IN_DATA_IN6_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN5_MASK        (0x00000020u)
#define CSL_GPIO_IN_DATA_IN5_SHIFT       (0x00000005u)
#define CSL_GPIO_IN_DATA_IN5_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN4_MASK        (0x00000010u)
#define CSL_GPIO_IN_DATA_IN4_SHIFT       (0x00000004u)
#define CSL_GPIO_IN_DATA_IN4_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN3_MASK        (0x00000008u)
#define CSL_GPIO_IN_DATA_IN3_SHIFT       (0x00000003u)
#define CSL_GPIO_IN_DATA_IN3_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN2_MASK        (0x00000004u)
#define CSL_GPIO_IN_DATA_IN2_SHIFT       (0x00000002u)
#define CSL_GPIO_IN_DATA_IN2_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN1_MASK        (0x00000002u)
#define CSL_GPIO_IN_DATA_IN1_SHIFT       (0x00000001u)
#define CSL_GPIO_IN_DATA_IN1_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_IN0_MASK        (0x00000001u)
#define CSL_GPIO_IN_DATA_IN0_SHIFT       (0x00000000u)
#define CSL_GPIO_IN_DATA_IN0_RESETVAL    (0x00000000u)

#define CSL_GPIO_IN_DATA_RESETVAL        (0x00000000u)

/* SET_RIS_TRIG */

#define CSL_GPIO_SET_RIS_TRIG_SETRIS15_MASK (0x00008000u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS15_SHIFT (0x0000000Fu)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS15_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS14_MASK (0x00004000u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS14_SHIFT (0x0000000Eu)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS14_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS13_MASK (0x00002000u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS13_SHIFT (0x0000000Du)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS13_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS12_MASK (0x00001000u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS12_SHIFT (0x0000000Cu)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS12_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS11_MASK (0x00000800u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS11_SHIFT (0x0000000Bu)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS11_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS10_MASK (0x00000400u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS10_SHIFT (0x0000000Au)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS10_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS9_MASK (0x00000200u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS9_SHIFT (0x00000009u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS9_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS8_MASK (0x00000100u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS8_SHIFT (0x00000008u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS8_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS7_MASK (0x00000080u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS7_SHIFT (0x00000007u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS7_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS6_MASK (0x00000040u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS6_SHIFT (0x00000006u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS6_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS5_MASK (0x00000020u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS5_SHIFT (0x00000005u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS5_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS4_MASK (0x00000010u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS4_SHIFT (0x00000004u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS4_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS3_MASK (0x00000008u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS3_SHIFT (0x00000003u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS3_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS2_MASK (0x00000004u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS2_SHIFT (0x00000002u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS2_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS1_MASK (0x00000002u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS1_SHIFT (0x00000001u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS1_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_RIS_TRIG_SETRIS0_MASK (0x00000001u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS0_SHIFT (0x00000000u)
#define CSL_GPIO_SET_RIS_TRIG_SETRIS0_RESETVAL (0x00000000u)

/*----SETRIS Tokens----*/
#define CSL_GPIO_SET_RIS_TRIG_SETRIS_ENABLE (0x00000001u)

#define CSL_GPIO_SET_RIS_TRIG_RESETVAL   (0x00000000u)

/* CLR_RIS_TRIG */

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS15_MASK (0x00008000u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS15_SHIFT (0x0000000Fu)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS15_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS14_MASK (0x00004000u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS14_SHIFT (0x0000000Eu)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS14_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS13_MASK (0x00002000u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS13_SHIFT (0x0000000Du)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS13_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS12_MASK (0x00001000u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS12_SHIFT (0x0000000Cu)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS12_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS11_MASK (0x00000800u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS11_SHIFT (0x0000000Bu)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS11_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS10_MASK (0x00000400u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS10_SHIFT (0x0000000Au)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS10_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS9_MASK (0x00000200u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS9_SHIFT (0x00000009u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS9_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS8_MASK (0x00000100u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS8_SHIFT (0x00000008u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS8_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS7_MASK (0x00000080u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS7_SHIFT (0x00000007u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS7_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS6_MASK (0x00000040u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS6_SHIFT (0x00000006u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS6_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS5_MASK (0x00000020u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS5_SHIFT (0x00000005u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS5_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS4_MASK (0x00000010u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS4_SHIFT (0x00000004u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS4_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS3_MASK (0x00000008u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS3_SHIFT (0x00000003u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS3_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS2_MASK (0x00000004u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS2_SHIFT (0x00000002u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS2_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS1_MASK (0x00000002u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS1_SHIFT (0x00000001u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS1_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS0_MASK (0x00000001u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS0_SHIFT (0x00000000u)
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS0_RESETVAL (0x00000000u)

/*----CLRRIS Tokens----*/
#define CSL_GPIO_CLR_RIS_TRIG_CLRRIS_DISABLE (0x00000000u)

#define CSL_GPIO_CLR_RIS_TRIG_RESETVAL   (0x00000000u)

/* SET_FAL_TRIG */

#define CSL_GPIO_SET_FAL_TRIG_SETFAL15_MASK (0x00008000u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL15_SHIFT (0x0000000Fu)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL15_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL14_MASK (0x00004000u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL14_SHIFT (0x0000000Eu)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL14_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL13_MASK (0x00002000u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL13_SHIFT (0x0000000Du)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL13_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL12_MASK (0x00001000u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL12_SHIFT (0x0000000Cu)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL12_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL11_MASK (0x00000800u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL11_SHIFT (0x0000000Bu)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL11_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL10_MASK (0x00000400u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL10_SHIFT (0x0000000Au)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL10_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL9_MASK (0x00000200u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL9_SHIFT (0x00000009u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL9_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL8_MASK (0x00000100u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL8_SHIFT (0x00000008u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL8_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL7_MASK (0x00000080u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL7_SHIFT (0x00000007u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL7_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL6_MASK (0x00000040u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL6_SHIFT (0x00000006u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL6_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL5_MASK (0x00000020u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL5_SHIFT (0x00000005u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL5_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL4_MASK (0x00000010u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL4_SHIFT (0x00000004u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL4_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL3_MASK (0x00000008u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL3_SHIFT (0x00000003u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL3_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL2_MASK (0x00000004u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL2_SHIFT (0x00000002u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL2_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL1_MASK (0x00000002u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL1_SHIFT (0x00000001u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL1_RESETVAL (0x00000000u)

#define CSL_GPIO_SET_FAL_TRIG_SETFAL0_MASK (0x00000001u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL0_SHIFT (0x00000000u)
#define CSL_GPIO_SET_FAL_TRIG_SETFAL0_RESETVAL (0x00000000u)

/*----SETFAL Tokens----*/
#define CSL_GPIO_SET_FAL_TRIG_SETFAL_ENABLE (0x00000001u)

#define CSL_GPIO_SET_FAL_TRIG_RESETVAL   (0x00000000u)

/* CLR_FAL_TRIG */

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL15_MASK (0x00008000u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL15_SHIFT (0x0000000Fu)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL15_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL14_MASK (0x00004000u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL14_SHIFT (0x0000000Eu)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL14_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL13_MASK (0x00002000u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL13_SHIFT (0x0000000Du)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL13_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL12_MASK (0x00001000u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL12_SHIFT (0x0000000Cu)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL12_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL11_MASK (0x00000800u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL11_SHIFT (0x0000000Bu)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL11_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL10_MASK (0x00000400u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL10_SHIFT (0x0000000Au)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL10_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL9_MASK (0x00000200u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL9_SHIFT (0x00000009u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL9_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL8_MASK (0x00000100u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL8_SHIFT (0x00000008u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL8_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL7_MASK (0x00000080u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL7_SHIFT (0x00000007u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL7_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL6_MASK (0x00000040u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL6_SHIFT (0x00000006u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL6_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL5_MASK (0x00000020u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL5_SHIFT (0x00000005u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL5_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL4_MASK (0x00000010u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL4_SHIFT (0x00000004u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL4_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL3_MASK (0x00000008u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL3_SHIFT (0x00000003u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL3_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL2_MASK (0x00000004u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL2_SHIFT (0x00000002u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL2_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL1_MASK (0x00000002u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL1_SHIFT (0x00000001u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL1_RESETVAL (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL0_MASK (0x00000001u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL0_SHIFT (0x00000000u)
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL0_RESETVAL (0x00000000u)

/*----CLRFAL Tokens----*/
#define CSL_GPIO_CLR_FAL_TRIG_CLRFAL_DISABLE (0x00000000u)

#define CSL_GPIO_CLR_FAL_TRIG_RESETVAL   (0x00000000u)

#endif
