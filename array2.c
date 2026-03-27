// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[10]={1,2,3,4,5};
//     int sum=0;
//     for(int i=0;i<=4;i++){
//         sum=sum+arr[i];
//     }
//     printf("%d",sum);
//     return 0;
// }
//-------------------------------------------------
//  #include <stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     int arr[10]={1,2,3,5,4555};
//     int n=10;
//     int temp=arr[0];
//     for(int i=0;i<n;i++){
//         if (temp<arr[i]){
//             temp=arr[i];
//         }
//     }
//     printf("%d",temp);
//  }
//---------------------------------------------------------
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[7]={2,4,6,8,10,12,15};
//     int temp=arr[6];
//     for (int i=6;i>=0;i--){
//         arr[i]=arr[i-1];
        
//     }
//     arr[0]=temp;
//     for(int i=0;i<7;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//--------------------------------------------------------------00
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[7]={2,4,6,8,10,12,15};
    
//     int n=45;
//     for(int j=0;j<n;j++){
//         int temp=arr[6];
//     for (int i=6;i>=0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
// }
//     for(int i=0;i<7;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//----------------Bubble Sorting Technique--------------------------------
// #include <stdio.h>
// int main(){
//     int arr[]={10,12,2,5,6,89,88,52,45,17,55,68,97,94,13};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int a=n;
//     for (int i=0;i<n;i++){
//         for(int j=0;j<a-1;j++){
//             if(arr[j]<arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//         a--;
//     }
//     for (int b=0;b<n;b++){
//         printf("%d ",arr[b]);
//     }
//     return 0;
// }
//-----------------------------------------------------
// #include <stdio.h>
// int main(){
//     int arr[]={10,12,2,5,6,89,88,52,45,17,55,68,97,94,13};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int a=arr[0];
//     for (int i=0;i<n;i++){
//         if(arr[i]<arr[i+1]){
//             a=arr[i+1];
//         }
//     }
// printf("%d",a);
// }
//-------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     int arr[]={10,12,2,5,6,89,88,52,45,17,55,68,97,94};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int a=arr[0];
//     int b=arr[0];
//     for (int i=0;i<n;i++){
//         if(arr[i]>a){
//             b=a;
//             a=arr[i];
//         }
//         else if (arr[i]>b && arr[i]!=a){
//             b=arr[i];
//         }
//     }
  
// printf("%d",b);
// }
//-------------------------------Anagram of string-------------------------------------
// #include <stdio.h>
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
//------------------------------------------------------
#include <stdio.h>
int main(){
    int mat[4][4]={{2,3,4,5},
                    {4,5,6,7},
                    {6,7,8,9},
                    {7,8,9,0}};
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
