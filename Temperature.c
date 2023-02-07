#include <stdio.h>
int main()
{
    float celsius, kelvin, fahren;
    int choice;

    printf("[1] Celsius to fahrenheit\t[2] Fahrenheit to Celsius\n[3] Celsius to Kelvin\t\t[4] Kelvin to Celsius\n[5] Fahrenheit to Kelvin\t[6] Kelvin to Fahrenheit\n");
    printf("\nPlease Select your temperature Conversion: ");
    scanf("%d", &choice);
    switch(choice){
    case 1:
        printf("\nPlease Enter Celsius: ");
        scanf("%f", &celsius);
        fahren = celsius * 1.8 + 32;
        printf("\nThe Fahrenhiet of %.2f celsius is %.2f\n",celsius,fahren);
        break;
    case 2:
        printf("\nPlease Enter Fahrenheit: ");
        scanf("%f", &fahren);
        celsius = (fahren - 32) * 0.5556;
        printf("\nThe Celsius of %.2f Fahrenheit is %.2f\n",fahren, celsius);
        break;
    case 3:
        printf("\nPlease Enter Celsius: ");
        scanf("%f", &celsius);
        kelvin = celsius - 273.15;
        printf("\nThe Kelvin of %.2f Celsius is %.2f\n",celsius, kelvin);
        break;
    case 4:
        printf("\nPlease Enter Kelvin: ");
        scanf("%f", &kelvin);
        celsius = kelvin + 273.15;
        printf("\nThe Celsius of %.2f Kelvin is %.2f\n",kelvin, celsius);
        break;
    case 5:
        printf("\nPlease Enter Kelvin: ");
        scanf("%f", &kelvin);
        fahren = 1.8 * (kelvin - 273.15) + 32;
        printf("\nThe Fahrenheit of %.2f Kelvin is %.2f\n",kelvin, fahren);
        break;
    case 6:
        printf("\nPlease enter Fahrenheit: ");
        scanf("%f", &fahren);
        kelvin = (fahren - 32) * 0.5556 + 273.15;
        printf("\nThe Kelvin of %.2f Fahrenheit is %.2f\n", fahren, kelvin);
        break;
    default:
        printf("\nInvalid Choice, Please Try Again\n");
    }
    return 0;
}
