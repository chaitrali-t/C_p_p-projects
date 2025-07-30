#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout << endl;
    cout << "\t\tValue converter" << endl;
    int option;
    double temp_value{0}; // A temporary value for converting into a standard value

    // Loop to keep the program running
    // until the user wants to exit or stop.
    while (option != 4) {
        // This prints out all the available options
        // for convertion
        cout << "Available conversions:\n"
             << "1. Mass\n"
             << "2. Height\n"
             << "3. Temperature\n"
             << "4. Exit\n"
             << "\tEnter a option number: ";
        cin >> option;


        // Operations regarding Mass.
        if (option == 1) {
            string ip_unit, op_unit;
            double ip_value, op_value{0};
            cout << "The converter can convert values in:" << endl
                 << "\tKilogram(kg)\n\tGram(g)\n\tPound(lb)\n\tOunce(oz)" << endl;
            cout << "Enter the mass and its unit: ";
            cin >> ip_value >> ip_unit;

            // Evaluating the input value and
            // to show alert for negative value.
            if (ip_value < 0) {
                cout << "Please enter value correctly\n"
                     << "> The value should be above.\n"
                << endl;
            } else {
                // Converting the input value into a standard value for easier calculation.
                // Here it is kilograms.
                if (ip_unit == "g" or ip_unit == "gram" or ip_unit == "grams") {
                    temp_value = ip_value / 1000;
                } else if (ip_unit == "kg" or ip_unit == "kilogram" or ip_unit == "kgs") {
                    temp_value = ip_value;
                } else if (ip_unit == "lb" or ip_unit == "pound" or ip_unit == "pounds") {
                    temp_value = ip_value / 2.20462;
                } else if (ip_unit == "oz" or ip_unit == "ounce" or ip_unit == "ounces") {
                    temp_value = ip_value / 35.274;
                } else {
                    // If the input unit is outside the given options, it shows alert.
                    cout << "Please enter value correctly\n"
                         << "> The unit should in either 'kg', 'g', 'lb' or 'oz'.\n"
                    << endl;
                }
            }

            // The input is verified and converted into a standard value.

            // Output unit is taken.
            cout << "Enter the desired unit: ";
            cin >> op_unit ;
            // Calculating the output value.
            if (op_unit == "g" or ip_unit == "gram" or ip_unit == "grams") {
                op_value = temp_value * 1000;
            } else if (op_unit == "kg" or ip_unit == "kilogram" or ip_unit == "kgs") {
                op_value = temp_value;
            } else if (op_unit == "lb" or ip_unit == "pound" or ip_unit == "pounds") {
                op_value = temp_value * 2.20462;
            }else if (op_unit == "oz" or ip_unit == "ounce" or ip_unit == "ounces") {
                op_value = temp_value * 35.274;
            } else {
                cout << "Please enter value correctly\n"
                     << "> The unit should in either 'kg', 'g', 'lb' or 'oz'."
                << endl;
            }
            // Converted value in the required units is displayed.
            cout << "Value in " << op_unit << " = " << fixed << setprecision(2)
                 << op_value << "\n" << endl
                 << "**************************" << endl;
        }



        // Length or height conversion
        else if (option == 2) {
            string ip_unit, op_unit;
            double ip_value, op_value{0};
            // Input value and its units are taken.
            cout << "The converter can convert values in:" << endl
                 << "\t Meter(m)\n\t Kilometer(km)\n\t inch(in)\n\t Feet(ft)" << endl;
            cout << "Enter the length and its unit: ";
            cin >> ip_value >> ip_unit;

            // Evaluating the input value and
            // show alert for negative value.
            if (ip_value < 0) {
                cout << "Please enter value correctly\n"
                     << "> The value should be above zero.\n"
                << endl;
            } else {
                // Converting the input value into a standard value for easier calculation.
                // Here it is meters.
                if (ip_unit == "m" or op_unit == "meter" or op_unit == "meters") {
                    temp_value = ip_value ;
                } else if (ip_unit == "km" or op_unit == "kilometer" or op_unit == "kilometers") {
                    temp_value = ip_value * 1000;
                } else if (ip_unit == "in" or op_unit == "inch" or op_unit == "inches") {
                    temp_value = ip_value / 39.3701;
                } else if (ip_unit == "ft" or op_unit == "foot" or op_unit == "feet") {
                    temp_value = ip_value / 3.281;
                } else {
                    // if the input unit is outside the given options, it shows alert.
                    cout << "Please enter value correctly\n"
                         << "> The unit should in either 'm', 'km', 'in' or 'ft'.\n"
                    << endl;
                }
            }

            // The input is verified and converted into a standard value.

            // Output unit is taken.
            cout << "Enter the desired unit: ";
            cin >> op_unit;
            // Calculating the output value.
            if (op_unit == "m" or op_unit == "meter" or op_unit == "meters") {
                op_value = temp_value ;
            } else if (op_unit == "km" or op_unit == "kilometer" or op_unit == "kilometers") {
                op_value = temp_value / 1000;
            } else if (op_unit == "in" or op_unit == "inch" or op_unit == "inches") {
                op_value = temp_value * 39.3701;
            } else if (op_unit == "ft" or op_unit == "foot" or op_unit == "feet") {
                op_value = temp_value * 3.281;
            } else {
                cout << "Please enter value correctly\n"
                     << "> The unit should in either 'm', 'km', 'in' or 'ft'."
                << endl;
            }
            // Converted value in the required units is displayed.
            cout << "Value in " << op_unit << " = " << fixed << setprecision(2)
                 << op_value << "\n" << endl
                 << "**************************" << endl;
        }



        // Temperature conversion logic
        else if (option == 3) {
            string ip_unit, op_unit;
            double ip_value, op_value{0};
            // Input value and its units are taken.
            cout << "The converter can convert values in:" << endl
                 << "\tCelsius(c)\n\tFahrenheit(f)\n\tKelvin(k)\n\t" << endl;
            cout << "Enter the temperature and its unit: ";
            cin >> ip_value >> ip_unit;
            // Converting the input value into a standard value for easier calculation.
            // Here it is Celsius.
            if (ip_unit == "c" or ip_unit == "Celsius" or ip_unit == "celsius") {
                temp_value = ip_value;
            } else if (ip_unit == "f" or ip_unit == "Fahrenheit" or ip_unit == "fahrenheit") {
                temp_value = (ip_value-32)*5/9;
            } else if (ip_unit == "k" or ip_unit == "Kelvin" or ip_unit == "kelvin") {
                temp_value = ip_value - 273.15;
            } else {
                // If the input unit is outside the given options, it shows alert.
                cout << "Please enter value correctly\n"
                     << "> The unit should in either 'c', 'f' or 'k'.\n"
                << endl;
            }

            // The input is verified and converted into a standard value.

            // Output unit is taken.
            cout << "Enter the desired unit: ";
            cin >> op_unit;
            // Calculating the output value.
            if (op_unit == "c" or ip_unit == "Celsius" or ip_unit == "celsius") {
                op_value = temp_value;
            } else if (op_unit == "f" or ip_unit == "Fahrenheit" or ip_unit == "fahrenheit") {
                op_value = (temp_value * 9/5) + 32;
            }else if (op_unit == "k" or ip_unit == "Kelvin" or ip_unit == "kelvin") {
                op_value = temp_value + 273.15;
            } else {
                cout << "Please enter value correctly\n"
                     << "> The unit should in either 'c', 'f' or 'k'.\n"
                << endl;
            }
            // Converted value in the required units is displayed.
            cout << "Value in " << op_unit << " = " << fixed << setprecision(2)
                 << op_value << "\n" << endl
                 << "**************************" << endl;
        }
    }
}