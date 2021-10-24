#include <iostream>
#include "investment.h"
#include <iomanip>
using namespace std;

/* Author: Tray Bridgewater
   Course: Programming Languages */

float GetInput() {
    float input;
    cin >> input;
    while (1) { //input validation 
        if (cin.fail()) {
            cout << "Invalid input.\nTry again: " << endl;
            cin.clear();
            cin.ignore();
            cin >> input;
        } 
        
        if (!cin.fail())
            break;
    }

    return input;
}

float CalculateInterest(float openingAmount, float deposit, float interestRate) { //calculates interest
    float interest;
    interest = (openingAmount + deposit) * (interestRate / 100.0);
    return interest;
}

void DisplayInstructions() { 
    cout << "Welcome to the Airgead Investment Simulator!" << endl;
    cout << "INSTRUCTIONS: Enter a NUMBER (no letters) into each slot." << endl;
    cout << "We will show you the value of your investment over time." << endl;
    cout << endl;
    cout << "************************************" << endl;
    cout << "************ DATA INPUT ************" << endl;
}

void ClearScreen() {
    cout << "\033[2J\033[1;1H"; //special char that clears screen
}
void DisplayMenu(Investment investment) {
    cout << "\nBalance & Interest w/ Additional Monthly Deposits" << endl;
    cout << "==================================================" << endl;
    cout << "Year   Year End Balance   Year End Earned Interest" << endl;

    float yearEndBalance = investment.GetInitialInvestmentAmount();
    for (int i = 1; i < investment.GetYears()+1; ++i) { //code starts at zero; humans don't. shifted i +1 for output
        float amountToAdd;
        float interest; 
        
        interest = CalculateInterest(yearEndBalance , investment.GetMonthlyDeposit(), investment.GetAnnualInterest());
        amountToAdd = (investment.GetMonthlyDeposit() * (12.0));
        yearEndBalance = yearEndBalance + amountToAdd + interest;
        cout << (i) << "      $" << setprecision(2) << fixed << yearEndBalance << " ";
        cout << "            " << "$" << setprecision(2) << interest;
        cout << endl; 
    };

    cout << "\n==================================================" << endl;


    cout << "\nBalance & Interest w/o Additional Monthly Deposits" << endl; // NOTE: No monthly deposits 
    cout << "==================================================" << endl;
    cout << "Year   Year End Balance   Year End Earned Interest" << endl;

    yearEndBalance = investment.GetInitialInvestmentAmount();

    for (int i = 1; i < investment.GetYears() + 1; ++i) { //code starts at zero; humans don't. shifted i +1 for output
        float amountToAdd;
        float interest;

        interest = CalculateInterest(yearEndBalance, 0, investment.GetAnnualInterest());
        amountToAdd = 0; // no deposits
        yearEndBalance = yearEndBalance + amountToAdd + interest;
        cout << (i) << "      $" << yearEndBalance << " ";
        cout << "             " << "$" << interest; 
        cout << endl;
    };

    cout << "\n==================================================" << endl;
}

int main() {
    Investment userInvestment;
    float userInput;
    char quitOrNot;

    while (1) {
        DisplayInstructions();
        cout << "  Initial Investment Amount: $"; // sets up userInvestment object
        userInput = GetInput();
        userInvestment.SetInitialInvestmentAmount(userInput);

        cout << "  Monthly deposit: $";
        userInput = GetInput();
        userInvestment.SetMonthlyDeposit(userInput);

        cout << "  Annual interest: %";
        userInput = GetInput();
        userInvestment.SetAnnualInterest(userInput);

        cout << "  Number of Years: ";
        userInput = GetInput();
        userInvestment.SetYears(userInput);

        DisplayMenu(userInvestment);

        cout << "\nPress 'q' to quit. Press anything else to run a different scenario: "; 
        cin >> quitOrNot; 

        if (quitOrNot == 'q') {  // allows you to choose to terminate program or try a different scenarip
            break;
        }

        ClearScreen();
    }
    return 0;
}