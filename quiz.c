#include <stdio.h>
#include <ctype.h>
typedef int a ;
int main(int argc, char const *argv[])
{
    char questions[][100]={"What is the largest planet ?\n",
                        "What is the smallest planet ?\n"};
    char options[][100]={"A. Jupiter\nB.Mercury\nC.Venus\nD.Earth\n",
                        "A. Jupiter\nB.Mercury\nC.Venus\nD.Earth\n"};
    char guess[]={'A','B'};
    char choice='0';
    a s=0;
    for (int i=0;i<2;i++){
        printf("%s",questions[i]);
        printf("%s",options[i]);
        scanf("%c",&choice);
        getchar();
        choice=toupper(choice);
        if (choice==guess[i]){
            printf("Correct\n");
            s++;
        }
        else {
            printf("Wrong\n");
        }
        }
    printf("You scored %d points",s);
    return 0;
}
