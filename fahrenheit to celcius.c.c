// Name: Hasnain Ali
// Roll No: 24AI13

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    // Reading temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Converting Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5/9;
    
    // Displaying the result
    printf("Temperature in Celsius: %.2f\n", celsius);
    
    return 0;
}
