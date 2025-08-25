#include<stdio.h>
/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

int main(){

    //input1
    float c1=0 ,f1 ;
  f1 = (9.0/5.0)*c1 +32;

    printf("value in farenheit is %f \n" , f1);


    //input2
    float c2=100 ,f2 ;
  f2 = (9.0/5.0)*c2 +32;

    printf("value in farenheit is %f \n" , f2);
    
    return 0;
}
