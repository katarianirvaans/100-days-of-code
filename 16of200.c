#include<stdio.h>

/*Q16: Write a program to input three numbers and find the largest among them using if–else.
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

int main(){
    int a,b,c;

    printf("Enter the first number: \n");
    scanf("%d", &a); 
    
    printf("Enter the second number: \n");
    scanf("%d", &b);

    printf("Enter the third number: \n");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        printf("The first number is the greatest. \n");
    }

    else if (b>a && b>c)
    {
        printf("The second number is the greatest. \n");
    }

    else
    {
        printf("The third number is the greatest. \n");
    }
    
    return 0;
}
