#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double weight;
    double height;
    
    // ask user for weight and height
    cout << "Enter your weight in lbs: ";
    cin >> weight;
    cout << "Enter your height in in.: ";
    cin >> height;
    
    if (weight == 0 or weight < 0)
    {
        cout << "Invalid value entered";
        
        return 0;
    }
    
    if (height == 0 or height < 0)
    {
        cout << "Invalid value entered";
        
        return 0;
    }

    // calc bmi
    double bmi = weight * 703.0 / (height * height);
    
    // output
    cout << fixed << setprecision(2);
    cout << setw(20) << left << "Calculated BMI" << right << setw(20) << "Message\n";
    
    if (bmi < 18.5)
    {
        cout << setw(20) << left << bmi << setw(20) << right << "Underweight";
    }
    else if (bmi >= 18.5 and bmi <= 25)
    {
        cout << setw(20) << left << bmi << setw(20) << right << "Optimal weight";
    }
    else
    {
        cout << setw(20) << left << bmi << setw(20) << right << "Overweight";
    }
    
    return 0;
}