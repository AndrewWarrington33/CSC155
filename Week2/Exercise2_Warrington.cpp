#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    //Prompt the user to input their name
    string name;
    cout << "Please enter your name: ";
    cin >> name;

    //Lab 2
    //Prompt the user to input their age
    int age;
    cout << "Please input your age (in years, as an integer): ";
    cin >> age;


    //Convert age in years to days (using the more accurate 365.25 days/year vs. 365 days/year) & display welcome message
    double age_in_days = age * 365.25;
    cout << "Welcome, " << name << "! You are " << age_in_days << " days old." << endl;

    //Exercise 2
    //Compute the age in number of minutes and seconds
    double age_in_minutes = 1440 * age_in_days;
    double age_in_seconds = 60 * age_in_minutes;
    cout << fixed << setprecision(2) << "You are " << age_in_minutes << " minutes old. You are " << age_in_seconds << " seconds old!" << endl;

    return 0;

}