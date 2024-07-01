//Brian Gutierrez
//Project Two
//Airgead Banking App

#include "agbanking.h"
#include <iostream>
#include <iomanip>	

using namespace std;

//Constructor
Banking::Banking() {
	numYears = 0;
	initialInvestment = 0.0;
	monthlyDeposit = 0.0;
	interestRate = 0.0;
	beginningBalance = 0.0;
	interest = 0.0;
	closingBalance = 0.0;
}

//setters
void Banking::SetNumYears(int numYears) {
	this->numYears = numYears;
}

void Banking::SetInitialInvestment(double initialInvestment) {
	this->initialInvestment = initialInvestment;
}

void Banking::SetMonthlyDeposit(double monthlyDeposit) {
	this->monthlyDeposit = monthlyDeposit;
}

void Banking::SetInterestRate(double interestRate) {
	this->interestRate = interestRate;
}


//getters
int Banking::GetNumYears() const
{
	return numYears;
}

double Banking::GetInitialInvestment() const
{
	return initialInvestment;
}

double Banking::GetMonthlyDeposit() const
{
	return monthlyDeposit;
}

double Banking::GetInterestRate() const
{
	return interestRate;
}

//Calculates and outputs without Monthly Deposits
double Banking::calculateBalanceWithoutMonthlyDeposits(double without_initialInvestment, double without_interestRate, int without_numYears) {
	closingBalance = without_initialInvestment;

	//Report Heading Without Montlhy Deposits
	cout << endl;
	cout << "       Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << string(85, '=') << endl;
	cout << "Year                    Year End Balance              Year End Earned Interest" << endl;
	cout << string(85, '-') << endl;

	//Calculates iterest and closing balance
	for (int i = 0; i < without_numYears; i++) {
		interest = closingBalance * (without_interestRate / 100);
		closingBalance = closingBalance + interest;
		cout << setw(4) << (i + 1) << setw(30) << fixed << setprecision(2) << closingBalance << setw(40) << fixed << setprecision(2) << interest << endl;
	}


	return closingBalance;
}

//Calcualtes and outputs with monthly deposits
double Banking::calculateBalanceWithMontlhyDepposits(double with_initialInvestment, double with_monthlyDeposit, double with_interestRate, int with_numYears) {
	double yearlyInterest = 0.0;

	// Report Heading
	cout << endl;
	cout << "       Balance and Interest With Additional Monthly Deposits" << endl;
	cout << string(85, '=') << endl;
	cout << "Year                    Year End Balance              Year End Earned Interest" << endl;
	cout << string(85, '-') << endl;


	// Calculate interest and closing balance
	for (int i = 0; i < with_numYears; i++) {
		double yearlyInterest = 0;

		for (int a = 0; a < 12; a++) {
			interest = (closingBalance + with_monthlyDeposit) * ((with_interestRate / 100.00) / 12.00);
			yearlyInterest = yearlyInterest + interest;
			closingBalance = closingBalance + with_monthlyDeposit + interest;

		
		}
		cout << setw(4) << (i + 1) << setw(30) << fixed << setprecision(2) <<  "$" << closingBalance << setw(40) << fixed << setprecision(2) << "$" << yearlyInterest << endl;
	}

	return closingBalance;
}