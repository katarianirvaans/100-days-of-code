#include<stdio.h>

/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

int main(){

    //input1
    int length1=5;
    int breadth1=10;
    int area1;
    int perimeter1;

    area1 = length1*breadth1;
    printf("area of rectangle is: %d \n" ,area1 );

    perimeter1 = 2*(length1+breadth1);
    printf("perimeter of rectangle is: %d \n" ,perimeter1 );

        //input2
    int length2=3;
    int breadth2=7;
    int area2;
    int perimeter2;

    area2 = length2*breadth2;
    printf("area of rectangle is: %d \n" ,area2 );

    perimeter2= 2*(length2+breadth2);
    printf("perimeter of rectangle is: %d \n" ,perimeter2 );


    
    return 0;
}
