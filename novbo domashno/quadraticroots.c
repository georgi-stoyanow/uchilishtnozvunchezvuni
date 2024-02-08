#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(double a,double b,double c){
    struct QuadraticRootsResult findroot;
    double D=(b*b)-(4*a*c);
    if(D<0)findroot.norealroot=1;
    else{
    if(a==0){
        if(b==0){
            if(c==0){
                findroot.norealroot=-1;
            }else{
                findroot.x1=0;
                findroot.x2=-b/a;
            }
        }else{
            findroot.x1=-c/b;
            findroot.x2=-c/b;
        }
        
    }else{
        findroot.x1=(-b+sqrtl(D))/(2*a);
        findroot.x2=(-b-sqrtl(D))/(2*a);
    }
   findroot.norealroot=0;
 }
 return findroot;
}
