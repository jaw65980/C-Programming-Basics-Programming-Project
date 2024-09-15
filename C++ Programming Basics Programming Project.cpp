// C++ Programming Basics Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float Tank = 20, TownAvrg = 23.5, HighwayAvrg = 28.9;
    float TownDis = Tank * TownAvrg;
    float HighwayDis = Tank * HighwayAvrg;
    cout << "The car can travel " << TownDis << " miles on one full tank of gas while driving in town." << endl;
    cout << "The car can travel " << HighwayDis << " miles on one full tank of gas while driving on the highway." << endl;
}

