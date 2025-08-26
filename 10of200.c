#include<stdio.h>


 /*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/


int main(){
    

   int input1 , seconds1, hours1, minutes1;
    printf("Input in seconds is:");
    scanf("%d",&input1);
    hours1 = input1/3600 ;
    minutes1 = (input1%3600)/60;
    seconds1 = (input1-((hours1*3600)+(minutes1*60)));

    printf("Time after conversion is: %d , %d , %d" , hours1, minutes1, seconds1);
   
    return 0;
}
