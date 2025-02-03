#include <stdio.h>

int main() {
    int num1, num2, difference;
    
    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Performing subtraction
    difference = num1 - num2;
    
    // Displaying the result
    printf("The difference between %d and %d is %d\n", num1, num2, difference);
    
    return 0;
}
