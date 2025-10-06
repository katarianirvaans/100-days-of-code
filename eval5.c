/*Write a C program that collects and displays the following details about a product:
•	Product Name (single word, e.g., "Laptop")
•	Product ID (integer, e.g., 12345)
•	Quantity (integer, e.g., 20)
•	Price (floating-point number, e.g., 999.99)
•	Manufacturer (single word, e.g., "Dell")
•	Category (single word, e.g., "Electronics") */


#include <stdio.h>
int main()
{
     char name[10];
    int product_id,quantity;
    float price;
    char manufacturer[10];
    char category [10];

    

    printf("Enter the name of the product:");
    scanf("%s",name);

    printf("Enter the manufacturer of the product:");
    scanf("%s",manufacturer);

    printf("Enter the product Id:");
    scanf("%d",product_id);

    printf("Enter the quantity of the product:");
    scanf("%d",quantity);
    
    printf("Enter price of the product:");
    scanf("%f",price);

    printf("The name of the product is %s \n",name);
    printf("The manufacturer of the product is %s \n",manufacturer);
    printf("The product Id of the product is %d \n",product_id);
    printf("The quantity of the product is %d \n",quantity);
    printf("The price of the product %f \n",price);

}
