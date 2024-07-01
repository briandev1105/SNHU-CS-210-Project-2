//Brian Gutierrez
//Project Two
//Airgead Banking App



#include <iostream>
#include "agbanking.h";
#include <string>

using namespace std;

//Initalizes and declares varriables
int numYears = 0;
double initialInvestment = 0.0;
double monthlyDeposit = 0.0;
double interestRate = 0.0;
double beginningBalance = 0.0;
double interest = 0.0;
double closingBalance = 0.0;
Banking airGead; //airGead object instance
void printMenu(); //print menu function 

//Main Function
int main() {;
    
    printMenu(); // Call printMenu
    
    airGead.calculateBalanceWithoutMonthlyDeposits(airGead.GetInitialInvestment(), airGead.GetInterestRate(), airGead.GetNumYears()); //call calc balance without monthly deposits
    airGead.calculateBalanceWithMontlhyDepposits(airGead.GetInitialInvestment(), airGead.GetMonthlyDeposit(), airGead.GetInterestRate(), airGead.GetNumYears()); //call calc balance with monthly deposits


    return 0;

} //Main

// Print Menu Function and get user input
void printMenu() {
    cout << string(60, '*') << endl;
    cout << "************************ Data Input ************************" << endl;
    cout << "Initial Investment: $";
    cin >> initialInvestment;
    airGead.SetInitialInvestment(initialInvestment);

    cout << endl;
    cout << "Monthly Deposit: $";
    cin >> monthlyDeposit;
    airGead.SetMonthlyDeposit(monthlyDeposit);

    cout << endl;
    cout << "Interest Rate: %";
    cin >> interestRate;
    airGead.SetInterestRate(interestRate);

    cout << endl;
    cout << "Number of Years: ";
    cin >> numYears;
    airGead.SetNumYears(numYears);
    cout << endl;


}


