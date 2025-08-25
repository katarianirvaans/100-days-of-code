#include<stdio.h>

/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

int main(){
    //input1
    int a=10;
    int b=2;
    int sum1;
    int difference1;
    int product1;
    int quotient1;

    sum1=a+b;
    printf("sum of a and b is: %d \n" , sum1);

    difference1 = a-b;
    printf("difference of a and b is: %d \n" , difference1);

    product1 = a*b;
    printf("product of a and b is: %d \n" , product1);

    quotient1 = a/b;
    printf("quotient of a and b is: %d \n" ,quotient1);

    //input2
    int c=7;
    int d=3;
    int sum2;
    int difference2;
    int product2;
    int quotient2;

    sum2=c+d;
    printf("sum of c and d is: %d \n" , sum2);

    difference2 = c-d;
    printf("difference of c and d is: %d \n" , difference2);

    product2 = c*d;
    printf("product of c and d is: %d \n" , product2);

    quotient2 = c/d;
    printf("quotient of c and d is: %d \n" ,quotient2);
    
    return 0;
}
