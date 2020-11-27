// Bankrekening.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "BankAccount.h"
#include <iostream>

int main() {
    BankAccount bankAccount;
    Transaction *transaction1 = new Transaction( 303, "27-11-2020" );
    Transaction *transaction2 = new Transaction( 69, "4-20-2016" );

    bankAccount + ( *transaction1 );
    bankAccount - ( *transaction2 );

    std::cout << bankAccount << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
