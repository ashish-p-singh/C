#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr = malloc(12 * sizeof(int));
    for (int i=11;i>=0;i--){
        *(arr+i)=2*(i+1);
    }
    for (int i=11;i>=0;i--){
        printf("%d ",arr[i]);
}
}