/* 
A* -------------------------------------------------------------------
B* This file contains source code for the PyMOL computer program
C* copyright 1998-2000 by Warren Lyford Delano of DeLano Scientific. 
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
#ifndef _H_RepDot
#define _H_RepDot

#include"Rep.h"
#include"CoordSet.h"

#define cRepDotNormal 0
#define cRepDotAreaType 1

typedef struct RepDot {
  Rep R;
  float dotSize;
  float *V;
  float *VC;
  float *A;
  float *VN; /* vector normal */
  int *T;
  int *F;
  int N,NC;
} RepDot;

Rep *RepDotNew(CoordSet *cset,int mode);
void RepDotInit(void);

#endif
