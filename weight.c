#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int choice =0;
    float pound=0.0f;
    float kilograms=0.0f;
    printf("Weight conversion Calculator: \n");
    printf("1 for kilograms to pounds\n");
    printf("2 for pounds to kilograms\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if (choice == 1){
        printf("Enter you weight in kilograms: ");
        scanf("%f",&kilograms);
        pound=kilograms*2.20462;
        printf("%.2f kilograms will be %.2f pounds\n",kilograms,pound);
    }
    else if(choice == 2){
        printf("Enter yyour weight in pounds: ");
        scanf("%f",&pound);
        kilograms=pound/2.20462;
        printf("%.2f pound will be %.2f kilograms\n",pound,kilograms);
    }
    else{
        printf("enter a valid choice");
    }
}