#include "safeint.h"
#include <strings.h>
#include <limits.h>

struct SafeResult safeadd(int a, int b) {
    struct SafeResult result;
    result.value = a + b;
    result.errorflag = b > 0 && a > INT_MAX - b || b < 0 && a < INT_MIN - b ? 1 : 0;
    return result;
}

struct SafeResult safesubtract(int a, int b) {
    struct SafeResult result;
    result.value = a - b;
    result.errorflag = b < 0 && a > INT_MAX + b || b > 0 && a < INT_MIN + b ? 1 : 0;
    return result;
}

struct SafeResult safemultiply(int a, int b) {
    struct SafeResult result;
    result.value = a * b;
    result.errorflag = a != 0 && result.value / a != b ? 1 : 0;
    return result;
}

struct SafeResult safedivide(int a, int b) {
    struct SafeResult result;
    result.value = a / b;
    result.errorflag = b == 0 || a == INT_MIN && b == -1 ? 1 : 0;
    return result;
}

struct SafeResult safestrtoint(char str[]){
    struct SafeResult result;
    result.value = 0;
    int negative = 0;
    
    for(int i = 0; i < strlen(str); i++){
        result.errorflag = 0;

        if((str[i] < '0' || str[i] > '9') && !(i == 0 && str[i] == '-')) {
            result.errorflag = 1;
            break;
        }
        else if(i == 0 && str[i] == '-'){
            negative = 1;
            continue;
        }
        else {
            if(safemultiply(result.value, 10).errorflag){
                result.errorflag = 1;
                break;
            }
            else {
                result.value = safemultiply(result.value, 10).value;

                if(safeadd(result.value, str[i] - 48).errorflag){
                    result.errorflag = 1;
                    break;
                }
                else result.value = safeadd(result.value, str[i] - 48).value;
            }
        }
    }

    if(negative && !result.errorflag) result.value = -result.value;

    return result;
}