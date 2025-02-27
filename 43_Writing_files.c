#include<stdio.h>

int main(){
    
    FILE *pF = fopen("C:\\Projects\\test.txt", "w"); // Opens a file called test.txt and the second arg is the mode ie read, write, append etc...You can also create a file in a desired location in your PC by preceding the file name with the path to your destination

    fprintf(pF, "This is the test file");

    fclose(pF); //It's good practise to always close opened files to prevent memory leaks
    

   /*
   //*To delete a file
   if(remove("test.txt")==0){
       printf("That file was deleted successfully");
   }else{
       printf("That file was not deleted");
   }
   */

    return 0;
}