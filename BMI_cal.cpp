#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    double weight_kg, height_m;
    string parameter_w, parameter_h;
    double ip_weight, ip_height;

    // Taking in the units
    // of the values of
    //weight and height
    cout << "Enter the units for weight(kg, lb): ";
    cin >> parameter_w;
    cout << "Enter the units for height(ft, m, cm): " ;
    cin >> parameter_h;

    // Taking in values of weight and height.
    cout << "Enter weight and height: ";
    cin >> ip_weight >> ip_height;

    if (parameter_w == "kg") {
        weight_kg = ip_weight;
    } else if (parameter_w == "lb") {
        weight_kg = ip_weight / 2.205;
    } else {
        cout << "Please choose kg or lb (in lower cases)"
             << endl;
        return 1;
    }

    if (parameter_h == "ft") {
        height_m = ip_height * 0.3048;
    } else if (parameter_h == "m") {
        height_m = ip_height;
    } else if (parameter_h == "cm"){
        height_m = ip_height / 100;
    } else {
        cout << "Please choose ft, m or cm only" << endl;
        return 1;
    }

    // Calculating the BMI.
    double bmi = weight_kg / pow(height_m, 2);

    // Displaying the BMI number.
    cout << "Your BMI is ";
    cout << fixed << setprecision(2) << bmi << endl;

    // Categorising based on BMI.
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    }
    else if (bmi < 25) {
        cout << "Congratulations! You have a healthy weight."
             << endl;
    }
    else if (bmi < 30) {
        cout << "You are overweight." << endl;
    }
    else {
        cout << "You are Obese." << endl;
    }
    cout << "_________________________________"<<endl;

    // Positive afformations
    cout << "**This is for educational practice.**" << endl
         << "Everyone has different weights and looks." << endl
         << "Don't feel bad if you don't fit in the box." << endl
         << "You are beautiful the way you are!" << endl;
    return 0;
}
