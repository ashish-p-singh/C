#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cchoice(){
    return (rand()%3)+1;
}
int uchoice(){
    int choice;
    do{
        printf("Choose and option:\n");
        printf("1 for Rock\n");
        printf("2 for aper\n");
        printf("3 for Scissors\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
    }while(choice<1 || choice >3);
    return choice;
}
void winner(int uch,int cch){
    if (uch == cch){
        printf("It is a tie🤝");
    }
    else if((uch==1 && cch==3)|| (uch==2 && cch==1)||(uch==3 && cch==2)){
        printf("You Win💖");
    }
    else{
        printf("You Lose💔💔");
    }
}
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    printf("Rock Paper Scissors\n");
    int uch=uchoice();
    int cch=cchoice();
    switch(uch){
        case 1:
        printf("You chose Rock\n");
        break;
        case 2:
        printf("You chose Paper\n");
        break;
        case 3:
        printf("You chose Scissors\n");
        break;
    }
    switch(cch){
        case 1:
        printf("Computer chose Rock\n");
        break;
        case 2:
        printf("Computer chose Paper\n");
        break;
        case 3:
        printf("Computer chose Scissors\n");
        break;
    }
    winner(uch,cch);
    return 0;
}
