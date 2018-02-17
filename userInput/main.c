
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char firstName[20] = ""; // char arrays, without putting a char array size, 
    // it prints wrong.
    char gender[] = "";
    int age;
    
    printf ("what is your name \n");
    scanf("%s", firstName); // function for user input, first parameter is a 
    // placeholder for whatever they are going to type in. Next parameter is the 
    // variable where you want to store the input.
    
    printf ("What is your gender?\n");
    scanf ("%s", gender); // cant enter spaces with scanf
    
    printf ("How old are you?\n");
     scanf ("%d", &age); // need to put a & before every int variable
    
    
    
     printf ("your name is %s you are a %s and is %d years old\n", firstName, gender, age); // print back input.
     // This was made by following Buckys video, C Programming Tutorial
     //- 11 - Getting Input with scanf
    
    return (EXIT_SUCCESS);
}

