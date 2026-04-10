#include <stdio.h>
#include <string.h>
int main(){
    // FILE *pFile=fopen("file.txt","w");
    // char text[]="Rockin Everywhere\nPandey";
    // fprintf(pFile,"%s",text);
    
    // fclose(pFile);
    FILE *pFile=fopen("file.txt","r");
    char buffer[1024]={0};
    while(fgets(buffer,sizeof(buffer),pFile)!=NULL){
        printf("%s",buffer);
    }
    fclose(pFile);
}