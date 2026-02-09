#include <stdio.h>
int main(){
    char choice;
    float fahrenheit;
    float celsius;
    printf("Temperature Conversion Program\n");
    printf("C.celsius to fahrenheit\n");
    printf("F.fahrenheit to celsius\n");
    printf("enter your choice: ");
    scanf("%c",&choice);
    if (choice=='C'){
        printf("Enter the temperature in celsius: \n");
        scanf("%f",&celsius);
        fahrenheit=(celsius *9/5)+32;
        printf("%.2f in farenheit is %.2f",celsius,fahrenheit);
    }
    else if(choice=='F') {
        printf("Enter the temperature in fahrenheit: \n");
        scanf("%f",&fahrenheit);
        celsius=(fahrenheit -32)*5/9;
        printf("%.2f in fahrenheit is %.2f celsius",fahrenheit, celsius);
    }
    else{
        printf("Invalid Choice please select C or F\n");
    }
}