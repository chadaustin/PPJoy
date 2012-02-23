/***************************************************************************
 *   PPJoy Virtual Joystick for Microsoft Windows                          *
 *   Copyright (C) 2011 Deon van der Westhuysen                            *
 *                                                                         *
 *   This program is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                         *
 ***************************************************************************/


#include "Debug.h"

#include <windows.h> 

#include <stdio.h>
#include <stdarg.h>

#ifdef _DEBUG

#define	DEBUGBUFSIZE	2048
char	DebugTextBuffer[DEBUGBUFSIZE];

void DebugBufferPrint (char *Format,...)
{
 va_list	args;

 va_start (args,Format);
 vsprintf (DebugTextBuffer,Format,args);
 /* puts (DebugTextBuffer); */
 OutputDebugString (DebugTextBuffer);
 /*MessageBox (NULL,DebugTextBuffer,"debug",MB_OK);*/
 va_end(args);
}

#endif
