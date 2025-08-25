#include<stdio.h>

/*Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

int main(){

    //input1
    int i1;
    int sum1=0;
    for (int i1 = 1; i1 <= 5; i1++)
    {
        sum1+=i1;
    }
    printf("The sum is: %d \n" , sum1);


    //input2
    int i2;
    int sum2=0;
    for (int i2 = 1; i2 <= 10; i2++)
    {
        sum2+=i2;
    }
    printf("The sum is: %d \n" , sum2);
    
    
    return 0;
}
