#include<stdio.h>

/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

int main(){
char input ;

printf("Enter the input: ");
scanf("%c" , &input);

if (input >= 'A' && input <= 'Z')
{
    printf("Input is an UPPERCASE. \n");
}

else if (input >= 'a' && input <= 'z')
{
    printf("Input is lowercase. \n");

}

else
{
    printf("Input is a Digit.");
}



    return 0;
}
