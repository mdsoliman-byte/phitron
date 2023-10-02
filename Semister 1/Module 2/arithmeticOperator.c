#include <stdio.h>
int main()
{
    int num1, num2, num3,num4,num5, addition, subtraction, multiplication, division;
    num1 = 20;
    num2 = 50;
    num3 = 10;
    num4 = 18;
    num5 = 3;
    addition = num1 + num2; // additiom Operator
    subtraction = num1 - num3; // Subtraction Operator 
    multiplication = num1 * num3; // Multiplication Operator 
    division = num2 / num3; // division Operator 
    float division2 = num1*1.0 / num5;  // Float Division if you need float number 
    printf("Addition Result = %d\nSubtraction Result = %d\nMultipliction Result = %d\nDivision2 Result = %f\nDivision Result = %d", addition, subtraction, multiplication, division2, division);
    return 0;
}