#include <stdio.h>
#include <string.h>
int main() {
    // printf("Enter a number: ");
    // int num;
    // scanf("%d",&num);
    // printf("You entered: %d\n",num);
    // printf("Enter your name: ");
    // char name[20];
    // scanf("%s",&name);
    // printf("Hello, %s!\n",name);
    getchar(); //consume leftover newline
    printf("enter full name: ");
    char fullname[50];
    fgets(fullname,sizeof(fullname),stdin);
    fullname[strlen(fullname)-1]='\0'; //remove newline character
    printf("Your full name without newline is: %s\n",fullname);
    return 0;
}