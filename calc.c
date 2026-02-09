#include <stdio.h>
int main(int argc, char const *argv[])
{
    char op='\0';
    double num1=0.0;
    double num2=0.0;
    double result=0.0;
    printf("Enter num1: ");
    scanf("%lf",&num1);
    printf("Enter operator: ");
    scanf(" %c",&op);//input buffer
    printf("Enter num2: ");
    scanf("%lf",&num2);
    switch(op){
        case '+':
        result=num1 + num2;
        break;
         case '-':
        result=num1 - num2;
        break;
         case '*':
        result=num1 * num2;
        break;
         case '/':
         if(num2==0)
         {
            printf("You cannpt divide by 0\n");
         }
         else{
        result=num1 / num2;}
        break;
        default:
        printf("Enter a valid operator\n");
    }
    printf("Result: %.2lf",result);
    return 0;
}
