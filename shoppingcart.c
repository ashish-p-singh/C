#include <stdio.h>
#include <string.h>
int main(){
    char item[50];
    int quantity;
    float price=0.0f;
    char currency='$';
    float total=0.0f;
    printf("Enter the item you want to buy: ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1]='\0';
    printf("Enter the quantity: ");
    scanf("%d",&quantity);
    printf("Enter the price per item: ");
    scanf("%f",&price);
    total=quantity*price;
    printf("You have purchased %s in quantity of %d at a price of %.2f each for a total of %c%.2f \n",item,quantity,price,currency,total);
    return 0;
}
