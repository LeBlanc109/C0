#include <stdio.h>

int main(){
    //Today we gon work on, the C Files section

    //declare a pointer type of file
    FILE *fptr;

    //use the fopen function
    // (filename.txt, w- writes to file, a- appends data to a new file, r- reads from file)
    fptr = fopen("filename.txt", "w");

    //now we can write to the file using fprintf()
    fprintf(fptr, "My first attempt writing to a file using the C programming language");

    //always be sure to close the file
    fclose(fptr);

    //When we write to a file that already exists, the OLD content is deleted, and the new content is inserted
    //if we want to add without deleting, then we use the "a", instead of "w"

   return 0;
}