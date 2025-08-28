#include<stdio.h>
/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

int main(){
    char input, a,e,i,o,u;
    printf("Enter the letter that you want to check:");
    scanf("%c" , &input);

    if (input=='a' || input=='e' || input=='i' || input=='o' || input=='u')
    {
        printf("Vowel.");
    }
    
    else
    {
        printf("consonant.");
    }
    
    
    return 0;
}
