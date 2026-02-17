#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int min=1;
    int max=100;
    int guess=0;
    int tries=0;
    srand(time(NULL));
    int random=(rand()%(max-min+1))+min;
    printf("NUMBER GUESSING GAME\n");
    do{
        printf("Guess the number: ");
        scanf("%d",&guess);
        tries++;
        if(guess<random){
            printf("Low\n");
        }
       else if (guess>random){
            printf("High\n");
       }
        else{
        printf("correct\n");
        }
    }while(guess!=random);
    printf("The answer is %d\n",random);
    printf("You took %d tries",tries);
}