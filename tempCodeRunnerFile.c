#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// void anagram(char str1[],char str2[]){
//     int count[256]={0};
//     int n1=strlen(str1);
//     int n2=strlen(str2);
//     for(int i=0;i<n1;i++){
//         count[str1[i]]++;
//         count[str2[i]]--;
//     }
//     for (int i=0;i<256;i++){
//         if(count[i]!=0){
//             printf("not an Anagram");
//             return ;
//         }
//     }
//     printf("Anagaram");
    
// }
// int main()
// {
//     char str1[]="dmm";
//     char str2[]="mdm";
//     anagram(str1,str2);
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int *ptr=malloc(4*4*sizeof(int));
//     *(ptr+(4*4)+(4))=10;
//     printf("%d",*(ptr+(4*4)+(4)));
//     return 0;
// }
int main(){
    int arr[3]={2,0,1};
    int k=0;
    int temp[3];
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
        if(arr[j]==k){
            arr[j]=arr[k];
            j++;
        }
    }
    }
    for(int i=0;i<3;i++){
        printf("%d \n",arr[i]);
    }
    
}
