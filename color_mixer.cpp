#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    const int COLOR_SIZE = 20;
    
    
    char firstColor[COLOR_SIZE];
    char secondColor[COLOR_SIZE];
    
    cout << "Enter a primary color: ";
    cin >> setw(COLOR_SIZE) >> firstColor;
    
    cout << "Enter another primary color: ";
    cin >> setw(COLOR_SIZE) >> secondColor;
    
    // validate color inputs
    if 
    (strcmp(firstColor, "red") != 0 and 
    strcmp(firstColor, "blue") != 0 and
    strcmp(firstColor, "yellow") 
    or 
    strcmp(secondColor, "red") != 0 and 
    strcmp(secondColor, "blue") != 0 and
    strcmp(secondColor, "yellow") != 0)
    {
        cout << "Invalid color(s) entered." << endl;
    }
    
    // same color
    if (strcmp(firstColor, secondColor) == 0)
    {
        cout << firstColor << endl;
    }
    
    // purple
    else if 
    (strcmp(firstColor, "red") == 0 and strcmp(secondColor, "blue") == 0 
    or 
    strcmp(firstColor, "blue") == 0 and strcmp(secondColor, "red") == 0)
    {
        cout << "Purple" << endl;
    }
    
    // orange
    else if 
    (strcmp(firstColor, "red") == 0 and strcmp(secondColor, "yellow") == 0 
    or 
    strcmp(firstColor, "yellow") == 0 and strcmp(secondColor, "red") == 0)
    {
        cout << "Purple" << endl;
    }
    
    // green
    else if 
    (strcmp(firstColor, "yellow") == 0 and strcmp(secondColor, "blue") == 0 
    or 
    strcmp(firstColor, "blue") == 0 and strcmp(secondColor, "yellow") == 0)
    {
        cout << "Purple" << endl;
    }
    
    return 0;
}