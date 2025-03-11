#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Declare variables
    int age, height, weight;
    char name[20];

    // Ask for input
    printf("What is your name? ");
    scanf("%s", name);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("What is your height in inches? ");
    scanf("%d", &height);

    printf("What is your weight in pounds? ");
    scanf("%d", &weight);

    // Calculate BMI
    float bmi = (float)weight / (height * height) * 703;

    // Print results
    printf("\nYour name is %s.", name);
    printf("You are %d years old.", age);
    printf("Your height is %d inches.", height);
    printf("Your weight is %d pounds.", weight);
    printf("Your BMI is %.2f.", bmi);

    return 0;
}
