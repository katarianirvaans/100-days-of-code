#include<stdio.h>


/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

Year is a leap year if divisible by 4 but not 100, except if divisible by 400.

*/
int main(){
    int year;
    printf("Enter the year that you want to check;");
    scanf("%d" , &year);

        if ((year%4==0 && year%100!= 0)|| year%400==0)
        {
            printf("Leap year.");
        }

        else
        {
            printf("not a Leap year.");
        }
        
        
    return 0;
}
