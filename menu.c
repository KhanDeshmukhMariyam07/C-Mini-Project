#include <stdio.h>

// Function to reverse a digit of a number using a while loop
void reverseDigit() {
    int num, reversedNum = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number: %d\n", reversedNum);
}

// Function to calculate factorial of a number
void calculateFactorial() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        factorial *= num;
        num--;
    }

    printf("Factorial: %d\n", factorial);
}

// Function to find roots of a quadratic equation
void quadraticRoots() {
    // Implementation depends on the quadratic equation
    // ax^2 + bx + c = 0
}

// Function to print Fibonacci series up to n numbers
void fibonacciSeries() {
    int n, a = 0, b = 1, next;

    printf("Enter the number of Fibonacci series elements: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d, ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Function to check if entered character is a vowel or consonant
void checkVowelConsonant() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }
}

// Function to print day name of the week using switch case
void printDayName() {
    int day;

    printf("Enter a number (1-7) representing a day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        // Continue for the rest of the days
        // ...
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
    }
}

// Function to find the largest of three values without using if-else
void findLargest() {
    int a, b, c;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = (a > b && a > c) ? a : (b > c) ? b : c;

    printf("Largest value: %d\n", largest);
}

// Function to print a pattern of asterisks as shown
void printAsteriskPattern1() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print another pattern of asterisks as shown
void printAsteriskPattern2() {
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print Floyd's triangle
void printFloydTriangle() {
    int n = 4;
    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Reverse a digit of a number\n");
        printf("2. Calculate factorial\n");
        printf("3. Find roots of quadratic equation\n");
        printf("4. Fibonacci series\n");
        printf("5. Check vowel or consonant\n");
        printf("6. Print day name of the week\n");
        printf("7. Find largest of three values\n");
        printf("8. Print asterisk pattern 1\n");
        printf("9. Print asterisk pattern 2\n");
        printf("10. Print Floyd triangle\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                reverseDigit();
                break;
            case 2:
                calculateFactorial();
                break;
            case 3:
                quadraticRoots();
                break;
            case 4:
                fibonacciSeries();
                break;
            case 5:
                checkVowelConsonant();
                break;
            case 6:
                printDayName();
                break;
            case 7:
                findLargest();
                break;
            case 8:
                printAsteriskPattern1();
                break;
            case 9:
                printAsteriskPattern2();
                break;
            case 10:
                printFloydTriangle();
                break;
            case 0:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
