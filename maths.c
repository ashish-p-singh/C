#include<stdio.h>
#include<math.h>
// int main(){
//     //x=sqrt(x);
//     //x=pow(x,2);
//     // printf("%d",x);
//     double radius=0.0;
//     double area=0.0;
//     const double PI=3.14159;
//     printf("Enter the radius: ");
//     scanf("%lf",&radius);
//     area=PI*pow(radius,2);
//     printf("%+04.2lf",area);
// }
int main(){
   double principal=0.0;
   double rate=0.0;
   int years =0;
   int tc=0;
   double total=0.0;
   printf("Compound Intrest Calculator\n");
   printf("Enter the principal amount: ");
   scanf("%lf",&principal);
   printf("Enter the rate: ");
   scanf("%lf",&rate);
   printf("Enter the number of years: ");
   scanf("%d",&years);
   printf("Enter the number times compunded each year: ");
   scanf("%d",&tc);
   total=principal*pow(1+rate/100/tc,tc*years);
   printf("\nAfter %d years your total amount will be $%.2lf",years,total);
}