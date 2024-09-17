#include<stdio.h>

int main() {
    float celisus;
    printf("Enter the Temperature in Degree Celsius: \n");
    scanf("%f", &celisus);
    
    // Celsius to Fahrenheit conversion
    float fahrenheit = (celisus * 9 / 5) + 32;
    printf("%.3f Degree Celsius is %.3f in Fahrenheit\n", celisus, fahrenheit);

    float fahren;
    printf("Enter the Temperature in Fahrenheit: \n");
    scanf("%f", &fahren);
    
    // Fahrenheit to Celsius conversion
    float celsius_from_fahrenheit = (fahren - 32) * 5 / 9;
    printf("%.3f Fahrenheit is %.3f in Degree Celsius\n", fahren, celsius_from_fahrenheit);

    return 0;
}
