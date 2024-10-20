// Name: Hasnain Ali
// Roll No: 24AI13

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    // Reading temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Converting Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;
    
    // Displaying the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}
