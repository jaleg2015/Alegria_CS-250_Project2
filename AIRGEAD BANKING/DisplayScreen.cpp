#include <iostream>
#include <string>
#include "DisplayScreen.h"

using namespace std;

//creeate constructor
DisplayScreen::DisplayScreen(){}

void DisplayScreen::DisplayScreenBlank(){
    cout << "**********************************" << endl;
    cout << "*********** Data Input ***********" << endl;
    cout << "Initial Investment Amount: " << endl;
    cout << "Monthly Deposit: " << endl;
    cout << "Annual Interest: " << endl;
    cout << "Number of years: " << endl;
    cout << endl;
}