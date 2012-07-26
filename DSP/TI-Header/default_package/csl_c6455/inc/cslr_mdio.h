/*  ============================================================================
 *   Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *   Use of this software is controlled by the terms and conditions found in the
 *   license agreement under which this software has been supplied.
 *   ===========================================================================
 */
/** ============================================================================
 *   @file  cslr_mdio.h
 *
 *   @path  $(CSLPATH)\inc
 *
 *   @desc  This file contains the Register Descriptions for MDIO
 */
#ifndef _CSLR_MDIO_H_
#define _CSLR_MDIO_H_

#include <cslr.h>
#include <tistdtypes.h>

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 VERSION;
    volatile Uint32 CONTROL;
    volatile Uint32 ALIVE;
    volatile Uint32 LINK;
    volatile Uint32 LINKINTRAW;
    volatile Uint32 LINKINTMASKED;
    volatile Uint8 RSVD0[8];
    volatile Uint32 USERINTRAW;
    volatile Uint32 USERINTMASKED;
    volatile Uint32 USERINTMASKSET;
    volatile Uint32 USERINTMASKCLEAR;
    volatile Uint8 RSVD1[80];
    volatile Uint32 USERACCESS0;
    volatile Uint32 USERPHYSEL0;
    volatile Uint32 USERACCESS1;
    volatile Uint32 USERPHYSEL1;
} CSL_MdioRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* VERSION */

#define CSL_MDIO_VERSION_MODID_MASK      (0xFFFF0000u)
#define CSL_MDIO_VERSION_MODID_SHIFT     (0x00000010u)
#define CSL_MDIO_VERSION_MODID_RESETVAL  (0x00000007u)

#define CSL_MDIO_VERSION_REVMAJ_MASK     (0x0000FF00u)
#define CSL_MDIO_VERSION_REVMAJ_SHIFT    (0x00000008u)
#define CSL_MDIO_VERSION_REVMAJ_RESETVAL (0x00000001u)

#define CSL_MDIO_VERSION_REVMIN_MASK     (0x000000FFu)
#define CSL_MDIO_VERSION_REVMIN_SHIFT    (0x00000000u)
#define CSL_MDIO_VERSION_REVMIN_RESETVAL (0x00000003u)

#define CSL_MDIO_VERSION_RESETVAL        (0x00070103u)

/* CONTROL */

#define CSL_MDIO_CONTROL_IDLE_MASK       (0x80000000u)
#define CSL_MDIO_CONTROL_IDLE_SHIFT      (0x0000001Fu)
#define CSL_MDIO_CONTROL_IDLE_RESETVAL   (0x00000001u)

/*----IDLE Tokens----*/
#define CSL_MDIO_CONTROL_IDLE_NO         (0x00000000u)
#define CSL_MDIO_CONTROL_IDLE_YES        (0x00000001u)

#define CSL_MDIO_CONTROL_ENABLE_MASK     (0x40000000u)
#define CSL_MDIO_CONTROL_ENABLE_SHIFT    (0x0000001Eu)
#define CSL_MDIO_CONTROL_ENABLE_RESETVAL (0x00000000u)

/*----ENABLE Tokens----*/
#define CSL_MDIO_CONTROL_ENABLE_NO       (0x00000000u)
#define CSL_MDIO_CONTROL_ENABLE_YES      (0x00000001u)

#define CSL_MDIO_CONTROL_HIGHEST_USER_CHANNEL_MASK (0x1F000000u)
#define CSL_MDIO_CONTROL_HIGHEST_USER_CHANNEL_SHIFT (0x00000018u)
#define CSL_MDIO_CONTROL_HIGHEST_USER_CHANNEL_RESETVAL (0x00000001u)

#define CSL_MDIO_CONTROL_PREAMBLE_MASK   (0x00100000u)
#define CSL_MDIO_CONTROL_PREAMBLE_SHIFT  (0x00000014u)
#define CSL_MDIO_CONTROL_PREAMBLE_RESETVAL (0x00000000u)

/*----PREAMBLE Tokens----*/
#define CSL_MDIO_CONTROL_PREAMBLE_ENABLED (0x00000000u)
#define CSL_MDIO_CONTROL_PREAMBLE_DISABLED (0x00000001u)

#define CSL_MDIO_CONTROL_FAULT_MASK      (0x00080000u)
#define CSL_MDIO_CONTROL_FAULT_SHIFT     (0x00000013u)
#define CSL_MDIO_CONTROL_FAULT_RESETVAL  (0x00000000u)

/*----FAULT Tokens----*/
#define CSL_MDIO_CONTROL_FAULT_NO        (0x00000000u)
#define CSL_MDIO_CONTROL_FAULT_YES       (0x00000001u)

#define CSL_MDIO_CONTROL_FAULTENB_MASK   (0x00040000u)
#define CSL_MDIO_CONTROL_FAULTENB_SHIFT  (0x00000012u)
#define CSL_MDIO_CONTROL_FAULTENB_RESETVAL (0x00000000u)

/*----FAULTENB Tokens----*/
#define CSL_MDIO_CONTROL_FAULTENB_NO     (0x00000000u)
#define CSL_MDIO_CONTROL_FAULTENB_YES    (0x00000001u)

#define CSL_MDIO_CONTROL_CLKDIV_MASK     (0x0000FFFFu)
#define CSL_MDIO_CONTROL_CLKDIV_SHIFT    (0x00000000u)
#define CSL_MDIO_CONTROL_CLKDIV_RESETVAL (0x000000FFu)

#define CSL_MDIO_CONTROL_RESETVAL        (0x810000FFu)

/* ALIVE */

#define CSL_MDIO_ALIVE_ALIVE_MASK        (0xFFFFFFFFu)
#define CSL_MDIO_ALIVE_ALIVE_SHIFT       (0x00000000u)
#define CSL_MDIO_ALIVE_ALIVE_RESETVAL    (0x00000000u)

/*----ALIVE Tokens----*/
#define CSL_MDIO_ALIVE_ALIVE_DEAD        (0x00000000u)
#define CSL_MDIO_ALIVE_ALIVE_ALIVE       (0x00000001u)

#define CSL_MDIO_ALIVE_RESETVAL          (0x00000000u)

/* LINK */

#define CSL_MDIO_LINK_LINK_MASK          (0xFFFFFFFFu)
#define CSL_MDIO_LINK_LINK_SHIFT         (0x00000000u)
#define CSL_MDIO_LINK_LINK_RESETVAL      (0x00000000u)

/*----LINK Tokens----*/
#define CSL_MDIO_LINK_LINK_NOLINK        (0x00000000u)
#define CSL_MDIO_LINK_LINK_LINK          (0x00000001u)

#define CSL_MDIO_LINK_RESETVAL           (0x00000000u)

/* LINKINTRAW */

#define CSL_MDIO_LINKINTRAW_LINKINTRAW_MASK (0x00000003u)
#define CSL_MDIO_LINKINTRAW_LINKINTRAW_SHIFT (0x00000000u)
#define CSL_MDIO_LINKINTRAW_LINKINTRAW_RESETVAL (0x00000000u)

#define CSL_MDIO_LINKINTRAW_RESETVAL     (0x00000000u)

/* LINKINTMASKED */

#define CSL_MDIO_LINKINTMASKED_LINKINTMASKED_MASK (0x00000003u)
#define CSL_MDIO_LINKINTMASKED_LINKINTMASKED_SHIFT (0x00000000u)
#define CSL_MDIO_LINKINTMASKED_LINKINTMASKED_RESETVAL (0x00000000u)

#define CSL_MDIO_LINKINTMASKED_RESETVAL  (0x00000000u)

/* USERINTRAW */

#define CSL_MDIO_USERINTRAW_USERINTRAW_MASK (0x00000003u)
#define CSL_MDIO_USERINTRAW_USERINTRAW_SHIFT (0x00000000u)
#define CSL_MDIO_USERINTRAW_USERINTRAW_RESETVAL (0x00000000u)

#define CSL_MDIO_USERINTRAW_RESETVAL     (0x00000000u)

/* USERINTMASKED */

#define CSL_MDIO_USERINTMASKED_USERINTMASKED_MASK (0x00000003u)
#define CSL_MDIO_USERINTMASKED_USERINTMASKED_SHIFT (0x00000000u)
#define CSL_MDIO_USERINTMASKED_USERINTMASKED_RESETVAL (0x00000000u)

#define CSL_MDIO_USERINTMASKED_RESETVAL  (0x00000000u)

/* USERINTMASKSET */

#define CSL_MDIO_USERINTMASKSET_USERINTMASKSET_MASK (0x00000003u)
#define CSL_MDIO_USERINTMASKSET_USERINTMASKSET_SHIFT (0x00000000u)
#define CSL_MDIO_USERINTMASKSET_USERINTMASKSET_RESETVAL (0x00000000u)

#define CSL_MDIO_USERINTMASKSET_RESETVAL (0x00000000u)

/* USERINTMASKCLEAR */

#define CSL_MDIO_USERINTMASKCLEAR_USERINTMASKCLEAR_MASK (0x00000003u)
#define CSL_MDIO_USERINTMASKCLEAR_USERINTMASKCLEAR_SHIFT (0x00000000u)
#define CSL_MDIO_USERINTMASKCLEAR_USERINTMASKCLEAR_RESETVAL (0x00000000u)

#define CSL_MDIO_USERINTMASKCLEAR_RESETVAL (0x00000000u)

/* USERACCESS0 */

#define CSL_MDIO_USERACCESS0_GO_MASK     (0x80000000u)
#define CSL_MDIO_USERACCESS0_GO_SHIFT    (0x0000001Fu)
#define CSL_MDIO_USERACCESS0_GO_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS0_WRITE_MASK  (0x40000000u)
#define CSL_MDIO_USERACCESS0_WRITE_SHIFT (0x0000001Eu)
#define CSL_MDIO_USERACCESS0_WRITE_RESETVAL (0x00000000u)

/*----WRITE Tokens----*/
#define CSL_MDIO_USERACCESS0_WRITE_READ  (0x00000000u)
#define CSL_MDIO_USERACCESS0_WRITE_WRITE (0x00000001u)

#define CSL_MDIO_USERACCESS0_ACK_MASK    (0x20000000u)
#define CSL_MDIO_USERACCESS0_ACK_SHIFT   (0x0000001Du)
#define CSL_MDIO_USERACCESS0_ACK_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS0_REGADR_MASK (0x03E00000u)
#define CSL_MDIO_USERACCESS0_REGADR_SHIFT (0x00000015u)
#define CSL_MDIO_USERACCESS0_REGADR_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS0_PHYADR_MASK (0x001F0000u)
#define CSL_MDIO_USERACCESS0_PHYADR_SHIFT (0x00000010u)
#define CSL_MDIO_USERACCESS0_PHYADR_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS0_DATA_MASK   (0x0000FFFFu)
#define CSL_MDIO_USERACCESS0_DATA_SHIFT  (0x00000000u)
#define CSL_MDIO_USERACCESS0_DATA_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS0_RESETVAL    (0x00000000u)

/* USERPHYSEL0 */

#define CSL_MDIO_USERPHYSEL0_LINKSEL_MASK (0x00000080u)
#define CSL_MDIO_USERPHYSEL0_LINKSEL_SHIFT (0x00000007u)
#define CSL_MDIO_USERPHYSEL0_LINKSEL_RESETVAL (0x00000000u)

/*----LINKSEL Tokens----*/
#define CSL_MDIO_USERPHYSEL0_LINKSEL_MDIO (0x00000000u)

#define CSL_MDIO_USERPHYSEL0_LINKINTENB_MASK (0x00000040u)
#define CSL_MDIO_USERPHYSEL0_LINKINTENB_SHIFT (0x00000006u)
#define CSL_MDIO_USERPHYSEL0_LINKINTENB_RESETVAL (0x00000000u)

/*----LINKINTENB Tokens----*/
#define CSL_MDIO_USERPHYSEL0_LINKINTENB_DISABLE (0x00000000u)
#define CSL_MDIO_USERPHYSEL0_LINKINTENB_ENABLE (0x00000001u)

#define CSL_MDIO_USERPHYSEL0_PHYADRMON_MASK (0x0000001Fu)
#define CSL_MDIO_USERPHYSEL0_PHYADRMON_SHIFT (0x00000000u)
#define CSL_MDIO_USERPHYSEL0_PHYADRMON_RESETVAL (0x00000000u)

#define CSL_MDIO_USERPHYSEL0_RESETVAL    (0x00000000u)

/* USERACCESS1 */

#define CSL_MDIO_USERACCESS1_GO_MASK     (0x80000000u)
#define CSL_MDIO_USERACCESS1_GO_SHIFT    (0x0000001Fu)
#define CSL_MDIO_USERACCESS1_GO_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS1_WRITE_MASK  (0x40000000u)
#define CSL_MDIO_USERACCESS1_WRITE_SHIFT (0x0000001Eu)
#define CSL_MDIO_USERACCESS1_WRITE_RESETVAL (0x00000000u)

/*----WRITE Tokens----*/
#define CSL_MDIO_USERACCESS1_WRITE_READ  (0x00000000u)
#define CSL_MDIO_USERACCESS1_WRITE_WRITE (0x00000001u)

#define CSL_MDIO_USERACCESS1_ACK_MASK    (0x20000000u)
#define CSL_MDIO_USERACCESS1_ACK_SHIFT   (0x0000001Du)
#define CSL_MDIO_USERACCESS1_ACK_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS1_REGADR_MASK (0x03E00000u)
#define CSL_MDIO_USERACCESS1_REGADR_SHIFT (0x00000015u)
#define CSL_MDIO_USERACCESS1_REGADR_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS1_PHYADR_MASK (0x001F0000u)
#define CSL_MDIO_USERACCESS1_PHYADR_SHIFT (0x00000010u)
#define CSL_MDIO_USERACCESS1_PHYADR_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS1_DATA_MASK   (0x0000FFFFu)
#define CSL_MDIO_USERACCESS1_DATA_SHIFT  (0x00000000u)
#define CSL_MDIO_USERACCESS1_DATA_RESETVAL (0x00000000u)

#define CSL_MDIO_USERACCESS1_RESETVAL    (0x00000000u)

/* USERPHYSEL1 */

#define CSL_MDIO_USERPHYSEL1_LINKSEL_MASK (0x00000080u)
#define CSL_MDIO_USERPHYSEL1_LINKSEL_SHIFT (0x00000007u)
#define CSL_MDIO_USERPHYSEL1_LINKSEL_RESETVAL (0x00000000u)

/*----LINKSEL Tokens----*/
#define CSL_MDIO_USERPHYSEL1_LINKSEL_MDIO (0x00000000u)

#define CSL_MDIO_USERPHYSEL1_LINKINTENB_MASK (0x00000040u)
#define CSL_MDIO_USERPHYSEL1_LINKINTENB_SHIFT (0x00000006u)
#define CSL_MDIO_USERPHYSEL1_LINKINTENB_RESETVAL (0x00000000u)

/*----LINKINTENB Tokens----*/
#define CSL_MDIO_USERPHYSEL1_LINKINTENB_DISABLE (0x00000000u)
#define CSL_MDIO_USERPHYSEL1_LINKINTENB_ENABLE (0x00000001u)

#define CSL_MDIO_USERPHYSEL1_PHYADRMON_MASK (0x0000001Fu)
#define CSL_MDIO_USERPHYSEL1_PHYADRMON_SHIFT (0x00000000u)
#define CSL_MDIO_USERPHYSEL1_PHYADRMON_RESETVAL (0x00000000u)

#define CSL_MDIO_USERPHYSEL1_RESETVAL    (0x00000000u)

#endif
