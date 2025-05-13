#include <stdio.h>

int main(){

    //format specifier = special tokens that begin with a % symbol, followed by a character that specifies the data and optional modifiers (width, precision, flags) They control how data is displayed or interpreted

    int age = 25;
    float price =25.55;
    double pi = 3.14159;
    char currency = '$';
    char name[] = "fury";

    // printf("%d \n", age); // d for decimal
    // printf("%f \n", price); // f for float point number
    // printf("%lf \n", pi); //long floating n number
    // printf("%c \n", currency);  //char single character
    // printf("%s \n", name); //array char for string

    //special character

    //width

    // int num1 = 1;
    // int num2 = 62;
    // int num3 = 30;
    // int num4 = -400;
    // int num5 = 5;

    // printf("%4d \n", num1);   // Output: "   1"
    // printf("%-4d \n", num2);  // added 4 character after the number output:"2    "  
    // printf("%04d \n", num3);  // output 0003
    // printf("%+d \n", num4);   // it will show the plus or minus
    // // printf("%lf \n", num5);

    //floating

    float price1= 19.99;
    float price2= 1.50;
    float price3= -100.00;

    printf("%f \n", price1);
    printf("%.2f \n", price1);  //this will show 2 digit after the decimal 
    printf("%.1f \n \n", price1);  //this will show 1 digit and round it
    

    printf("%8.2f \n", price2);
    printf("%+18.3f \n", price3);

    //width precision flags
    return 0 ;
    
}