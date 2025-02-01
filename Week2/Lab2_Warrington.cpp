//============================================================================
// Name        : Lab2_Warrington.cpp
// Author      : Andrew Warrington
// Date         : 9/5/2024
// Description : Complete code for CSC155 Week 3 Lab 2 and Exercise 2
//============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Prompt the user to input their name
    string name;
    cout << "Please enter your name: ";
    cin >> name;

    // Prompt the user to input their age
    int age;
    cout << "Please input your age (in years, as an integer): ";
    cin >> age;

    // Convert age in years to days (using 365.25 days/year for accuracy) & display welcome message
    double age_in_days = age * 365.25;
    cout << "Welcome, " << name << "! You are " << fixed << setprecision(0) << age_in_days << " days old." << endl;

    // Compute the age in number of minutes and seconds
    long long age_in_minutes = static_cast<long long>(age_in_days * 1440); // 1440 minutes in a day
    long long age_in_seconds = age_in_minutes * 60; // 60 seconds in a minute
    
    cout << "You are " << age_in_minutes << " minutes old. You are " << age_in_seconds << " seconds old!" << endl;

    return 0;
}