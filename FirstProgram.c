#include <stdio.h> //TODO Remember: This line is a 'Preprocessor Directive' that tells the compiler to include the standard input-output header file '<stdio.h>'. This Header File contains declarations for input and output functions such as 'printf' .
int main() { //TODO Remeber: Compilers started to translate source code into machine code from main functions. Here int keyword declares that the number of this main functions return value is an integer. 
   printf("Hi, I am Mohammad Noman"); //TODO Remeber: Anything written inside double quotation("") is called as String.
   return 0; //TODO Remember: Returning 0 from the main function is a way to indicate to the operating system that the program has completed successfully without any errors. Also,It marks the end of the main function, and thus the end of the program's execution. When this statement is executed, the program terminates, and control is returned to the operating system.
}
//* #include <stdio.h> is a header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs.
//? This Curly Bracket '{' marked as the Start of the main function and another Curly Bracket '}' marked as the End of the main function.
//* C ignores white space. But we use it to make the code more readable.
//* Another thing that always appear in a C program is main(). This is called a function. Any code inside its curly brackets {} will be executed. Also, program execution has started from main functions.
//* printf() displays the string inside quotation. printf() is a library function used to output/print text to the screen.
//* return 0 ends the main() function. Using return 0; is a standard practice in C programming. While you can technically return any integer value, 0 is widely recognized and understood as the conventional way to signal successful execution.
//* Here I can also use getchar() instead of return 0. getchar command will help removing unnecessery line in outputs.
//! Do not forget to add the closing curly bracket } to actually end the main function.
