#include <iostream>
#include <cmath> // For sqrt()

using namespace std;

// Function to check if a number is positive, negative, or zero
void positive() {
    cout << "To find if the given number is positive or negative or zero" << endl;
    int number;
    cout << "Enter a value: ";
    cin >> number;
    if (number > 0) {
        cout << number << " is positive" << endl;
    } else if (number < 0) {
        cout << number << " is negative" << endl;
    } else {
        cout << number << " is zero" << endl;
    }
}

// Function to find the greatest of three numbers
void greatest_of_3() {
    cout << "To check which number is greatest of 3" << endl;
    int num1, num2, num3;
    cout << "Enter three values: ";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3) {
        cout << num1 << " is greatest" << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << num2 << " is greatest" << endl;
    } else if (num3 > num1 && num3 > num2) {
        cout << num3 << " is greatest" << endl;
    } else {
        cout << "All are equal" << endl;
    }
}

// Function to swap the values of two variables
void swapping() {
    cout << "To swap 2 values" << endl;
    int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;
    cout << "Before swapping the values are " << a << " and " << b << endl;
    int c = a;
    a = b;
    b = c;
    cout << "After swapping the values are " << a << " and " << b << endl;
}

// Function to calculate the sum of natural numbers up to a given range
void sum_of_natural_numbers() {
    cout << "To find the sum of n natural numbers" << endl;
    int n, sum = 0;
    cout << "Enter value range: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of natural numbers is: " << sum << endl;
}

// Function to check if a given year is a leap year
void leap_year() {
    cout << "To find if the given year is a leap year or not" << endl;
    int year;
    cout << "Enter a year: ";
    cin >> year;
    // Leap year condition: divisible by 4 but not by 100, unless also divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
    }
}

// Function to check if a given number is odd or even
void odd_even() {
    cout << "To find if the given value is odd or even" << endl;
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << number << " is even" << endl;
    } else {
        cout << number << " is odd" << endl;
    }
}

// Function to check if a given number is a palindrome
void palindrome() {
    cout << "To find if the given number is a palindrome or not" << endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int original = number;
    int reversed = 0;
    int digit;
    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    if (reversed == original) {
        cout << original << " is palindrome" << endl;
    } else {
        cout << original << " is not palindrome" << endl;
    }
}

// Function to calculate the sum of digits of a given number
void sum_of_digits() {
    int number, sum = 0;
    cout << "Enter a value: ";
    cin >> number;
    while (number > 0) {
        sum += (number % 10);
        number /= 10;
    }
    cout << "The sum of digits is: " << sum << endl;
}

// Function to convert Fahrenheit to Centigrade
void centigrade() {
    float f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    cout << "The temperature in centigrade is: " << ((f - 32.0) * (5.0 / 9.0)) << endl;
}

// Function to convert Centigrade to Fahrenheit
void fahrenheit() {
    float c;
    cout << "Enter temperature in centigrade: ";
    cin >> c;
    cout << "The temperature in Fahrenheit is: " << ((c * (9.0 / 5.0)) + 32.0) << endl;
}

// Function to calculate the cube of a number
void cube() {
    int a;
    cout << "Enter a value to find the cube of it: ";
    cin >> a;
    cout << "The cube of " << a << " is " << a * a * a << endl;
}

// Function to calculate the factorial of a number
void factorial() {
    cout << "To calculate the factorial" << endl;
    int number, factorial_val = 1;
    cout << "Enter a value: ";
    cin >> number;
    for (int i = 1; i <= number; i++) {
        factorial_val *= i;
    }
    cout << "Factorial of " << number << " is " << factorial_val << endl;
}

// Function to perform basic arithmetic operations on two numbers
void arthmetic() {
    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << static_cast<float>(num1) / num2 << endl;
    } else {
        cout << "Division by zero is not allowed!" << endl;
    }
    if (num2 != 0) {
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Modulus by zero is not allowed!" << endl;
    }
}

// Function to calculate the Greatest Common Divisor (GCD) of two numbers using the Euclidean algorithm
void gcd() {
    int number1, number2;
    cout << "Enter a value: ";
    cin >> number1;
    cout << "Enter another value: ";
    cin >> number2;

    while (number2 != 0) {
        int temp = number2;
        number2 = number1 % number2;
        number1 = temp;
    }
    cout << "The greatest common divisor of " << number1 << " and " << number2 << " is: " << number1 << endl;
}

// Function to check if a number is prime
void prime() {
    int number, i;
    cout << "Enter a value: ";
    cin >> number;

    // Numbers less than or equal to 1 are not prime
    if (number <= 1) {
        cout << number << " is not prime" << endl;
        return;
    }

    // Check for divisibility from 2 up to the square root of the number
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            cout << number << " is not prime" << endl;
            return;
        }
    }
    cout << number << " is prime" << endl;
}

// Function to reverse a given number
void reverse() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int original = number;
    int reversed = 0;
    int digit;
    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    cout << "The reversed number is " << reversed << endl;
}

int main() {
    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Odd or even" << endl;
        cout << "2. Positive or negative" << endl;
        cout << "3. Greatest of 3" << endl;
        cout << "4. Swapping" << endl;
        cout << "5. Sum of given natural number" << endl;
        cout << "6. Leap year" << endl;
        cout << "7. Palindrome" << endl;
        cout << "8. Sum of digits" << endl;
        cout << "9. Centigrade to Fahrenheit" << endl;
        cout << "10. Fahrenheit to centigrade" << endl;
        cout << "11. Cube" << endl;
        cout << "12. Factorial" << endl;
        cout << "13. Arithmetic operations" << endl;
        cout << "14. Greatest common divisor" << endl;
        cout << "15. Prime number" << endl;
        cout << "16. Reverse a number" << endl;
        cout << "17. Exit." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                odd_even();
                break;
            case 2:
                positive();
                break;
            case 3:
                greatest_of_3();
                break;
            case 4:
                swapping();
                break;
            case 5:
                sum_of_natural_numbers();
                break;
            case 6:
                leap_year();
                break;
            case 7:
                palindrome();
                break;
            case 8:
                sum_of_digits();
                break;
            case 9:
                centigrade();
                break;
            case 10:
                fahrenheit();
                break;
            case 11:
                cube();
                break;
            case 12:
                factorial();
                break;
            case 13:
                arthmetic();
                break;
            case 14:
                gcd();
                break;
            case 15:
                prime();
                break;
            case 16:
                reverse();
                break;
            case 17:
                cout << "Thank you for using the program. Hope you enjoyed the stay." << endl;
                break;
            default:
                cout << "The selected option is not available. Try again." << endl;
                break;
        }
    } while (choice != 17);
    return 0;
}
