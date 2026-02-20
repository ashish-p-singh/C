#include <stdio.h>
int main(int argc, char const *argv[])
{
   int num=787022;
    int rev=0;
    while(num!=0){
        rev=(rev*10)+(num%10);
        num/=10;
    }
    int one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    int final=-1;
    while(rev!=0){
       int temp=rev%10;
        if(temp==1){
            one++;
            if (one ==2){
                final=temp;
                break;
            }}
                
      else  if(temp==2){
            two++;
            if (two ==2){
                final=temp;
                break;
            }
        }
        else if(temp==3){
            three++;
            if (three==2){
                final=temp;
                break;
            }
        }
        else if(temp==4){
            four++;
            if (four==2){
                final=temp;
                break;
            }
        }
        else if(temp==5){
            five++;
            if (five ==2){
                final=temp;
                break;
            }
        }
       else  if(temp==6){
            six++;
            if (six ==2){
                final=temp;
                break;
            }
        }
        else if(temp==7){
            seven++;
            if (seven ==2){
                final=temp;
                break;
            }
        }
       else  if(temp==8){
            eight++;
            if (eight ==2){
                final=temp;
                break;
            }
        }
          else  if(temp==9){
                nine++;
                if (nine ==2){
                    final=temp;
                    break;
                }
            }
            rev/=10;
        }
        
        printf("%d",final);
          return 0;

    }


    
       
