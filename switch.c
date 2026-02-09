#include <stdio.h>
int main(int argc, char const *argv[])
{
    int day;
    printf("enter a day of the week: ");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("It is monday");
        break;
        case 2:
        printf("It is tuesday");
        break;
        case 3:
        printf("It is wednesday");
        break;
        case 4:
        printf("It is thrusday");
        break;
        case 5:
        printf("It is friday");
        break;
        case 6:
        printf("It is saturday");
        break;
        case 7:
        printf("It is sunday");
        break;
        default:
        printf("Enter number 1-7");
    }

    return 0;
}
