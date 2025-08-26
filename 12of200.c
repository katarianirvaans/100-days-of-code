#include<stdio.h>


/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
int main(){
    int input;

    printf("Enter the number that you want to check:");
    scanf("%d" , &input);

    if (input>0)
    {
        printf("Entered number is positive.\n ");
    }
    
    else if (input<0)
    {
        printf("Entered number is negative.\n ");
    }

    else
    {
        printf("Entered number is zero.\n");
    }
    
    
    
    return 0;
}
