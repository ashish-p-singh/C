#include <stdio.h>
typedef enum{
    SUCCESS,FALIURE,PENDING
}Status;
void connect(Status status);
int main(int argc, char const *argv[])
{
    Status status=SUCCESS;
    connect(status);
    return 0;
}
void connect(Status status){
    if (status==SUCCESS){
        printf("Connected");
    }
    else if (status==PENDING){
        printf("Connection Pending");
    }
    else{
        printf("Connection Failed");
    }
}

