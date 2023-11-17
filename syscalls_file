#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main() {

    int fileDescriptor = open("newfile.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if(fileDescriptor != -1){

        write(fileDescriptor, "This is line 1 \n", 15);


        close(fileDescriptor);
    }
    else {
        printf("ERROR");
        return 1;
    }
return 0;

}
