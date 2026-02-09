#include <stdio.h>
void happyBirthday(){
    printf("happy birthday\n");
}
int multiply(int x,int y){
    int result=x*y;
    return result;
}
int main(int argc, char const *argv[])
{
    int x=10;
    int y=2;
    happyBirthday();
    printf("%d",multiply(x,y));
    return 0;
}
