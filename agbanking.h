//Brian Gutierrez
//Project Two
//Airgead Banking App#pragma once

#ifndef banking_h
#define banking_h

//Class Declaration
class Banking {
private:
    int numYears;
    double initialInvestment;
    double monthlyDeposit;
    double interestRate;
    double beginningBalance;
    double interest;
    double closingBalance;

public:
    Banking();

    // Setters
    void SetNumYears(int numYears);
    void SetInitialInvestment(double initialInvestment);
    void SetMonthlyDeposit(double monthlyDeposit);
    void SetInterestRate(double interestRate);

    // Getters
    int GetNumYears() const;
    double GetInitialInvestment() const;
    double GetMonthlyDeposit() const;
    double GetInterestRate() const;

    // Calculations
    double calculateBalanceWithoutMonthlyDeposits(double without_initialInvestment, double without_interestRate, int without_numYears);
    double calculateBalanceWithMontlhyDepposits(double with_initialInvestment, double with_monthlyDeposit, double with_interestRate, int with_numYears);

};

#endif
