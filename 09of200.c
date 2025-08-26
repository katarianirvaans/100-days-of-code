#include<stdio.h>



/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
int main(){
    //input1
    int principal1,rate1,time1, simple_interest1;

    principal1=1000;
    rate1=5;
    time1=2;
    simple_interest1 = (principal1*rate1*time1)/100; 


    printf("The total interest would be: %d \n" , simple_interest1);

    //input2
     int principal2,rate2,time2, simple_interest2;

    principal2=5000;
    rate2=7;
    time2=3;
    simple_interest2 = (principal2*rate2*time2)/100; 


    printf("The total interest would be: %d \n" , simple_interest2);

    

    
    return 0;
}
