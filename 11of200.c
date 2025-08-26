#include<stdio.h>


/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
int main(){
    int input;
    printf("Enter the number that you want to check:");
    scanf("%d" , &input);

    if (input%2==0)
    {
        printf("The entered input is even.");
    }
    
    else
    {
        printf("The entered input is odd.");
    }
    
    
    return 0;
}
