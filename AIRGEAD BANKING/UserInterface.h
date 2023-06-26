#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

#include <iostream>
#include <string>
#include "DisplayScreen.h"

using namespace std;

class UserInterface{
    //variable
    public:
        void SetInitialInvestment (double initialInvestment);
        double GetInitialInvestment() const;
        void SetMonthlyInvestment (double monthlyInvestment);
        double GetMonthlyInvestment() const;
        void SetAmountInterest (double amountInterest);
        double GetAmountInterest() const;
        void SetYears (int years);
        int GetYears() const;

        void UserInput (double initialInvestment, double monthlyInvestment, double amountInterest, int years);
        void DepositsTable(double initialInvestment, double monthlyInvestment, double amountInterest, int years);
        void NoDepositTable(double initialInvestment, double monthlyInvestment, double amountInterest, int years);

    private:
        double privInitialInvestment = 0;
        double privMonthlyInvestment = 0;
        double privAmountInterest = 0;
        int privYears = 0;
};

#endif n1            