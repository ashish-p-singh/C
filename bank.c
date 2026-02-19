#include <stdio.h>
void checkbalance(float balance){
    printf("Your current balance is: $%.2f\n",balance);
}
float deposit(){
    float amount=0.0f;
    printf("Enter amount to be deposited:");
    scanf("%f",&amount);
    if(amount<0){
        printf("Enter invalid amount\n");
    }
    else if(){
        
    }
}
float withdraw(){}
int main(){
    int choice;
    float balance=0.0f;
    printf("Welcome to Bank ATM");
    do{
        printf("Select an option\n");
        printf("1.Check Balance\n");
        printf("2.Deposit money\n");
        printf("3.Withdraw money\n");
        printf("4.Exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            checkbalance(balance);
            break;
            case 2:
            balance+=deposit();
            break;
            case 3:
            balance-=withdraw();
            break;
            case 4:
            printf("Thank you for using the ATM\n");
            break;
            default:
            printf("Invalid choice,Please enter choice 1-4");
            break;
        }
    }while(choice==4);
}