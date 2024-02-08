#include <stdio.h>
#include "safeint.h"

void main(int argc, char *argv[]){
    if(safestrtoint(argv[1]).errorflag==1 || safestrtoint(argv[2]).errorflag==1){
        printf("\nGreshka");
    }
    else{
        int a = safestrtoint(argv[1]).value;
        int b = safestrtoint(argv[2]).value;
        
        if(safemultiply(a,b).errorflag==1) printf("\nGreshka");
        else printf("\n%d", safemultiply(a,b).value);
    }
}