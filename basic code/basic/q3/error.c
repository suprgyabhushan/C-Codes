#include<stdio.h>
float fahrenheithToCelsius(float temp)
    {
    return (temp - 32) * 5 / 9;
    }

float celsiusToKelvin(float temp)
    {
    return temp + 273;
    }


int main()
    {
    float fahr, cels, kelv;
    printf("Enter the degrees in fahrenheit: \n");
    scanf("%f",&fahr);
    printf("Enter the degrees in celsius: \n");
    scanf("%f",&cels);
    
    printf("Enter the degrees in kelvin: \n");
    scanf("%f",&kelv);
    
    printf("Degrees Fahrenheit is: %3.2f \n",fahr);
    printf("Degrees Celsius is: %3.2f \n",cels);
    printf("Degrees Kelvin is: %3.2f \n",kelv);
    return 0;
    }
