#include<stdio.h>
/*Q27: Write a program to print the sum of the first n odd numbers.
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25*/
int main(){
    int n;
    int sum=0;

    printf("Enter the value of n:");
    scanf("%d" , &n);

    for (int i = 1; i <= n ; i++)
    {
        sum = sum + (2*i-1);
    }

    printf("The sum is : %d \n", sum);
    

    
    return 0;
}
