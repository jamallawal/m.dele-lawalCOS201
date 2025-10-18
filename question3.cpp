#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, salesTax, totalAmount;

    // Ask user for total purchase amount
    cout << "Enter the total purchase amount: ";
    cin >> purchaseAmount;

    // Calculate 6% sales tax
    salesTax = purchaseAmount * 0.06;

    // Calculate total amount after adding tax
    totalAmount = purchaseAmount + salesTax;

    // Display results
    cout << "\nSales Tax (6%): " << salesTax << endl;
    cout << "Total Amount (including tax): " << totalAmount << endl;

    return 0;
}
