#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1, num2;

    // Read two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate results
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;

    return 0;
}
