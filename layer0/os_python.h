

/* 
A* -------------------------------------------------------------------
B* This file contains source code for the PyMOL computer program
C* Copyright (c) Schrodinger, LLC. 
D* -------------------------------------------------------------------
E* It is unlawful to modify or remove this copyright notice.
F* -------------------------------------------------------------------
G* Please see the accompanying LICENSE file for further information. 
H* -------------------------------------------------------------------
I* Additional authors of this source file include:
-* 
-* 
-*
Z* -------------------------------------------------------------------
*/
#ifndef _H_os_python
#define _H_os_python

#ifdef PYMOL_ICC_LINUX
#include"/usr/include/bits/types.h"
#endif

#ifdef _PYMOL_NOPY
typedef int PyObject;
#else
#include"Python.h"
#endif

#include "os_predef.h"

#endif
