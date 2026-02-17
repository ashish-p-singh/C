#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int min=50;
    int max=100;
    srand(time(NULL));
    int random=(rand()%(max-min+1))+min;
    int random1=(rand()%(max-min+1))+min;
    int random2=(rand()%(max-min+1))+min;
    int random3=(rand()%(max-min+1))+min;
    int random4=(rand()%(max-min+1))+min;
    printf("%d %d %d %d %d",random,random1,random2,random3,random4);
}