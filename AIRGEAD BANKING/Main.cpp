/*
* Jesse Alegria
* Project 2
* June 4, 2023
*/

#include <iostream>
#include <string>
#include "UserInterface.h"
#include "Display.h"

using namespace std;

int main() {
    
    //connect UserInterface and DisplayScreen classes
    UserInterface userInfo;
    DisplayScreen emptyDisplay;

    //variables
    double initialInvestment = 0;
    double monthlyInvestment = 0;
    double annualInterest = 0;
    int years = 0;

    //show user the blank screen
    emptyDisplay.DisplayScreenBlank()

    //retreive user input
    userInfo.UserInput(initialInvestment, monthlyInvestment, amountInterest, years);

    //show the table with monthly deposits and the table with no monthly deposits
    userInfo.NoDepositTable(userInfo.GetInitialInvestment(), userInfo.GetAmountInterest(), userInfo.GetYears());

    userInfo.DepositsTable(userInfo.GetInitialInvestment(), userInfo.GetMonthlyInvestment(), userInfo.GetAmountInterest(), userInfo.GetYears());

    return 0;
}