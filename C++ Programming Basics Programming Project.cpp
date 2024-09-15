// C++ Programming Basics Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int SurveyPart = 16500;
    int RegCust = SurveyPart * .15;
    int CitDrink = RegCust * .58;
    cout << "Out of 16,500 customers survey, " << RegCust << " customers purchase one or more energy drinks per week." << endl;
    cout << "Out of the " << RegCust << " customers who purchase one or more energy drinks per week, " << CitDrink << " of those customers prefer citrus-flavored energy drinks." << endl;
}

