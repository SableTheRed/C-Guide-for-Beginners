// main() is a function which is being declared in the program. 
// Because C is a compiled language, it won't necessarily look at code in the order it is written.
// The main() function is always run first, no matter where it is in your code. All other code is run from within main()
// The "void" in line 22 declares that the function "main()" will not be returning a value. (Remember, void = nothing)
// This is necessary because C requires you to declare the data type of the value the function will return.
// For example, you might put "int" in front of a function to declare that it will return an integer.

/*

Example format:
data_type function()
{
   body of the function.
   this is where you put the code you want to run from the function.
} 

*/


#include<stdio.h>

void main()
{
   printf("Hello_World !");
}


