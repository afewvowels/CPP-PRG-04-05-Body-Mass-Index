//
//  main.cpp
//  PRG-4-5-Body-Mass-Index
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that calculates and displays a person's body mass index (BMI). The
//  BMI is often used to determine whether a person is overweight or underweight for his
//  or her height. A person's BMI is calculated with the following formula:
//
//  BMI = weight * 703 / height^2
//
//  where weight is measured in pounds and height is measured in inches. The program should
//  display a message indicating whether the person has optimal weight, is underweight, or is
//  overweight. A person's weight is considered to be optimal if his or her BMI is between
//  18.5 and 25. If the BMI is less than 18.5, the person is considered to be underweight. If
//  the BMI value is greater than 25, the person is considered to be overweight.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float fltWeight,
          fltHeight,
          fltBMI;
    
    cout << "Please enter your weight in pounds:\n";
    cin >> fltWeight;
    while(!cin || fltWeight < 0.0f || fltWeight > 500.0f)
    {
        cout << "Please enter a weight between 0 and 500 pounds:\n";
        cin.clear();
        cin.ignore();
        cin >> fltWeight;
    }
    
    cout << "Please enter your height in inches:\n";
    cin >> fltHeight;
    while(!cin || fltWeight < 0.0f || fltWeight > 500.0f)
    {
        cout << "Please enter a height between 0 and 120 inches:\n";
        cin.clear();
        cin.ignore();
        cin >> fltHeight;
    }
    
    fltBMI = fltWeight * (703.0f / pow(fltHeight, 2.0f));
    
    if(fltBMI > 25)
    {
        cout << "Your BMI is " << fltBMI << endl << "You are overweight.\n";
    }
    else if(fltBMI < 18.5)
    {
        cout << "Your BMI is " << fltBMI << endl <<  "You are underweight.\n";
    }
    else
    {
        cout << "Your BMI is " << fltBMI << endl <<  "Your BMI is within acceptable bounds.\n";
    }
    
    return 0;
}


