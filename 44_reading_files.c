#include<stdio.h>

int main(){
    FILE *pF = fopen("C:\\Projects\\test2.txt", "r");

    //We need a buffer which will act as a container, an array of characters hold one line of our text document, one line at a time. In order to read all the lines of the text document, we use a while loop
    char buffer[255];

    //Checking if the file exists:
    if(pF == NULL){
        printf("Unable to open file!!!");
    }else{
        while(fgets(buffer, 255, pF )!=NULL){

        printf("%s", buffer);

    }
    }

    

    /*
    If you only want to print one line:
    fgets(buffer, 255, pF );
    printf("%s", buffer);

    */

        fclose(pF);

    return 0;
}