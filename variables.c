#include <stdio.h>
#include <stdbool.h>

int main()
{

    // int = whole number (4 bytes in modern system)
    // float= single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    // integer

    int age = 25;
    int year = 2025;
    int quantity = 1.5;

    printf("your %d years old\n", age);
    printf("the year is %d\n", year);
    printf("you have ordered %d x items\n", quantity);

    // float

    float gpa = 2.4;
    float prize = 19.99;
    float temperature = -10.1;
    printf("your gpa is %f\n", gpa);
    // printf("your gpa is %.2f \n", gpa);
    printf("the prize is tk %f\n", prize);
    printf("the prize is tk %f\n", temperature);

    // double

    double pi = 3.141582343;
    printf("the value os pi is %.20lf \n", pi); // long floating point number lf

    // char meaning character

    char grader = 'A';
    char symbol = '%';
    char currency = '$';

    printf("your grade is %c \n", grader);
    printf("favorite symbol %c \n", symbol);
    printf("currency is %c \n", currency);

    // strings example we don't have strings . a series of characters

    char name[] = "ai hay ";
    char food[] = "showrma";
    char email[] = "gmail@gmail.com";

    printf("boshe ja %s \n", name); // s meaning string
    printf("favorite food is %s \n", food);
    printf("ur email is %s \n", email);

    // boolean example . before that we have to add header #include <stdbool.h>

    bool isOnline = true;
    // printf("%d", isOnline);

    // boolean usage on if else statement

    bool isStudent = true; // or false = 1 or 0 work same as it

    if (isStudent)
    {
        printf("he is a student");
    }
    else
    {
        printf("he is not a student");
    }

    return 0;
}