// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;; 
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['  
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P    
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,  
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->EmuXDInput.h
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************
#ifndef EMUXDINPUT_H
#define EMUXDINPUT_H

#include "EmuX.h"

// ******************************************************************
// * globals
// ******************************************************************
extern VOID EmuXPollController();

// ******************************************************************
// * func: EmuXInitDInput
// ******************************************************************
VOID EmuXInitDInput();

// ******************************************************************
// * offsets into analog button array
// ******************************************************************
#define XINPUT_GAMEPAD_A			    0
#define XINPUT_GAMEPAD_B			    1
#define XINPUT_GAMEPAD_X			    2
#define XINPUT_GAMEPAD_Y			    3
#define XINPUT_GAMEPAD_BLACK		    4
#define XINPUT_GAMEPAD_WHITE		    5
#define XINPUT_GAMEPAD_LEFT_TRIGGER		6
#define XINPUT_GAMEPAD_RIGHT_TRIGGER	7

#endif