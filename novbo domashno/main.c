#include <stdio.h>
#include "quadraticroots.h"

void main(){
    double a=1, b=2 ,c=-3;
    struct QuadraticRootsResult findroot = findroots(a,b,c);    
    printf("\nerror=%c x1=%lf, x2=%lf", findroot.norealroot, findroot.x1, findroot.x2);
} 