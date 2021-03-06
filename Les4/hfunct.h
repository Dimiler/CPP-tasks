//========================
// include guard defined
#ifndef __HFUNC_H__
#define __HFUNC_H__

//========================
// used dependencies
#include <stdio.h>
#include "hfunct.h"


//========================
// used functionality
void readInt(char* message, int& n);
int factorial(int a);
int mostProblemSolver(int a, int b, bool(*f)(int));

#endif //__HFUNC_H__