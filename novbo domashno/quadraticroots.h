#ifndef QUADROOT
#define QUADROOT

struct QuadraticRootsResult{
    double x1;
    double x2;
    int norealroot;
};
struct QuadraticRootsResult findroots(double a,double b,double c);

#endif