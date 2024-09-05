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

    //Prompt the user to input their age
    int age;
    cout << "Please input your age (in years): ";
    cin >> age;

    //Convert age in years to days & display welcome message
    int age_in_days = age * 365;
    cout << "Welcome, " << name << "! You are " << age_in_days << " old." << endl;

    return 0;

}