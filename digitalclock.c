#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    time_t rawtime=0;
    struct tm *pTime=NULL;
    bool isRunning=true;
    printf("DigitalClock!!! (Press 'Q' to quit)\n");
    
    while(isRunning){
        time(&rawtime);
        pTime=localtime(&rawtime);
        printf("\r%02d:%02d:%02d",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);
        
        // Check if user pressed a key
        if(_kbhit() && _getch() == 'q') {
            isRunning = false;
        }
        
        Sleep(1000);  
    }
    
    printf("\n\nClock stopped.\n");
    return 0;
}
