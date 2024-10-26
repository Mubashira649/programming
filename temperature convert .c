#include <stdio.h>
int main() 
{
    float temperature;
    char choice;
    printf("Enter 'C' to convert Celsius to Fahrenheit\n");
    printf("Enter 'F' to convert Fahrenheit to Celsius\n");
    printf("Your choice: ");
    scanf(" %c", &choice);     
    if (choice == 'C' || choice == 'c') 
	{
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature); 
        float fahrenheit = (temperature * 9 / 5) + 32; 
        printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, fahrenheit);
    } else if (choice == 'F' || choice == 'f')
	 {    
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature); 
        float celsius = (temperature - 32) * 5 / 9; 
        printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, celsius);
    } else 
	{  
        printf("Error: Invalid choice. Please enter 'C' or 'F'.\n");
    }
    return 0;
}
