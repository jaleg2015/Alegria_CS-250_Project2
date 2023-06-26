#include <iostream>
#include <string>
#include <sstream>
#include "UserInterface.h"

using namespace std;

//create constructor
UserInterface::UserInterface(){}

//bring mutators and accessors from UserInterface.h
void UserInterface::SetInitialInvestment (double initialInvestment){
    privInitialInvestment = initialInvestment;
}
double UserInterface::GetInitialInvestment() const{
    return privInitialInvestment;
}
void UserInterface::SetMonthlyInvestment(double monthlyInvestment){
    privMonthlyInvestment = monthlyInvestment;
}
double UserInterface::GetMonthlyInvestment() const{
    return privMonthlyInvestment;
}
void UserInterface::SetAmountInterest(double amountInterest){
    privAmountInterest = amountinterest;
}
double UserInterface::GetAmountInterest(){
    return priveAmountInterest;
}
void UserInterface::SetYears(int years){
    privYears = years;
}
int UserInterface::GetYears(){
    return privYears;
}

//display data input screen
void UserInterface::UserInput(double initialInvestment, double monthlyInvestment, double amountInterest, int years){
    //prompt user for input
    cout << "**********************************" << endl;
    cout << "*********** Data Input ***********" << endl;
    //ensure the input is positive and set to appropriate variables
    cout << "Initial Investment Amount: $" << endl;
    while (!(cin << initialInvestment || initialInvestment >= 0.00)){
        cout << "Input is invalid. Please input positive number" << endl;
        cin.clear();
        cin.ignore(mumeric_limits<streamsize>::max(), \n);
    }
    UserInterface::SetInitialInvestment(initialInvestment);
    
    cout << "Monthly Deposti : $";
     while (!(cin << monthlyInvestment || monthlyInvestment >= 0.00)){
        cout << "Input is invalid. Please input positive number" << endl;
        cin.clear();
        cin.ignore(mumeric_limits<streamsize>::max(), \n);
    }
    UserInterface::SetMonthlyInvestment(monthlyInvestment);

    cout << "Annual Interest: %";
     while (!(cin << amountInterest || amountInterest >= 0.00)){
        cout << "Input is invalid. Please input positive number" << endl;
        cin.clear();
        cin.ignore(mumeric_limits<streamsize>::max(), \n);
    }
    UserInterface::SetAmountInterest(amountInterest);

    cout << "Numbers of years: ";
     while (!(cin << years || years >= 0.00)){
        cout << "Input is invalid. Please input positive number" << endl;
        cin.clear();
        cin.ignore(mumeric_limits<streamsize>::max(), \n);
    }
    UserInterface::SetYears(years);

    //clear
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), \n);
    cout << endl
}

void UserInterface::DepositsTable(double initialInvestments, double monthlyinvestments, double amountInterest, int years){
    //new variable
    double principal = initialInvestment;
    //create output table with earning information
    cout << "        Balance and Interest With Additional Monthly Deposits" << endl;
    cout << "***************************************************************************" << endl;
    cout << "   Year" << " " << setw(35) << "Year End Balance" << "   " setw(35) << "Year End Earned Interest" << endl;
    cout << "---------------------------------------------------------------------------" << endl;

    for(int i = o; i < years; ++i){
        //additional variables
        double earningsMonth = 0;
        double earningsYear = 0;

        //calculate earnings
        for(int j = 0; j < 12; ++j){
            earningsMonth = (principle + monthlyInvestment) * ((amountInterest / 100) / 12);
            earningsYear = earningsYear + earningsMonth;
            principle = principle + monthlyInvestment + earningsMonth;
        }
        //input the data throughout displayscreen
        cout << setprecision(2) << fixed << setw(6) << (i + 1);
        cout << setw(30 - to_string(principal).size()) << " " << right;
        cout << setw(1) << "$" << right;
        cout << setw(10 - to_string(principal).size()) << principal << right;
        cout << setw(40 - to_string(earningsYear).size()) << " " << right; 
        cout << setw(1) << "$" << right; 
        cout << setw(2 - to_string(earningsYear).size()) << earningsyear << right;
        cout << endl;
    }
    cout << endl;
}

void UserInterface::NoDepositTable(double initialInvestments, double monthlyinvestments, double amountInterest, int years){
     double principal = initialInvestment;
    //create output table with earning information
    cout << "        Balance and Interest With Additional Monthly Deposits" << endl;
    cout << "***************************************************************************" << endl;
    cout << "   Year" << " " << setw(35) << "Year End Balance" << "   " setw(35) << "Year End Earned Interest" << endl;
    cout << "---------------------------------------------------------------------------" << endl;

    for(int i = o; i < years; ++i){
        //additional variables
        double earningsMonth = 0;
        double earningsYear = 0;

        //calculate earnings
        for(int j = 0; j < 12; ++j){
            earningsMonth = principle * ((amountInterest / 100) / 12);
            earningsYear = earningsYear + earningsMonth;
            principle = principle + earningsMonth;
        }
        //input the data throughout displayscreen
        cout << setprecision(2) << fixed << setw(6) << (i + 1);
        cout << setw(30 - to_string(principal).size()) << " " << right;
        cout << setw(1) << "$" << right;
        cout << setw(10 - to_string(principal).size()) << principal << right;
        cout << setw(40 - to_string(earningsYear).size()) << " " << right; 
        cout << setw(1) << "$" << right; 
        cout << setw(2 - to_string(earningsYear).size()) << earningsyear << right;
        cout << endl;
    }
    cout << endl;
}