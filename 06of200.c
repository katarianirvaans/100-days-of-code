#include<stdio.h>

/* Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

int main(){

    //input1
    int a1=3;
    int b1=5;
    int x;

    printf("Before swapping the digits are %d and %d.\n",  a1 , b1);

    x=a1;
    a1=b1;
    b1=x;

    printf("After swapping the digits are %d and %d.\n \n", a1,b1);


    //input2
    int a2=-1;
    int b2=1;
    int y;

    printf("Before swapping the digits are %d and %d.\n",  a2 , b2);

    y=a2;
    a2=b2;
    b2=y;

    printf("After swapping the digits are %d and %d.\n \n", a2,b2);


   
    return 0;
}
