#include<stdio.h>

/*Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/


int main(){

    //input1
    int r1 = 7;
    printf("the area of circle with radius %d is %f \n" , r1, 3.14*r1*r1);
    printf("the perimeter of circle with radius %d is %f \n" , r1, 3.14*r1*2);

    //input2
    int r2 = 3;
    printf("the area of circle with radius %d is %f \n" , r2, 3.14*r2*r2);
    printf("the perimeter of circle with radius %d is %f \n" , r2, 3.14*r2*2);
    
    
    return 0;
}
