/* Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx,xxx,xxxx:

Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900 (input)
You entered 404.817.6900

*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &num1, &num2, &num3);
    // Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900

    printf("You entered %d.%d.%d", num1, num2, num3);
    // You entered 404.817.6900

    return 0;
}