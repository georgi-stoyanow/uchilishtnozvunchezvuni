#ifndef SAFEINT_
#define SAFEINT_

struct SafeResult{
    int value;
    char errorflag;
};

struct SafeResult safeadd(int a, int b);
struct SafeResult safesubtract(int a, int b);
struct SafeResult safedivide(int a, int b);
struct SafeResult safemultiply(int a, int b);
struct SafeResult safestrtoint(char a[]);

#endif