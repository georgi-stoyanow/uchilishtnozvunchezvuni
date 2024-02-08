#include <stdio.h>
void main(){

    unsigned char lights=237;
    int opciq;
    do {
        printf("\nMenu:\n1. Switch lights\n2. Print state\n3. Exit\nNapishi 1, 2 ili 3: ");
        scanf("%d", &opciq);
   switch(opciq){
    case 1: unsigned char smqna;printf("\n kaji koq trqvbva da se smeni"); scanf("%u", &smqna); smqna = 1<<smqna-1;
        if(lights & smqna) lights=lights ^ smqna;`  
        else lights=lights | smqna;
        printf("\nsled izkluchvane/vkluchvane na lampa : %u", lights);
        break;
        case 2: printf("\nVklucheni lampi: ");
        for(int i=0; i<8; i++){
            unsigned char light = 1<<i;
            if((lights & light)==light){
                printf(" %d, ", i+1);
            }
        }   break;
        case 3: break;  
        default: printf("\n Nevalidna opciq ot menuto."); break;    
        }  
   }while(opciq!=3);
}