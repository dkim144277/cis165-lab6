# cis165-lab6
# how to run
To run `bmi` and `color_mixer.cpp`, download the files from the repository to your computer. Then, using onlinegdb.com, click on the "Upload File" at the top left of the programming window, and upload the file you downloaded. Set the language using the dropdown to C++ 17. Press F9 on your keyboard or "Run" at the top of the screen. Repeat for the other program downloaded.
# plans for programs
## bmi.cpp
1. Declare variables for height and weight and ask the user for their values
2. Calculate the BMI
3. Output the calculated BMI as well as a label depending on the BMI using if statements 
## color_mixer.cpp
1. Declare arrays for 2 colors
2. Ask the user to input the 2 colors
3. Check if the colors are valid entries (red blue or yellow)
4. Check each array to see what color it is and using conditional statements output the correct color mixture
# expectations and test runs
## bmi.cpp
Inputs and expected results:  
100, 70, BMI = 14.35 - Underweight  
150, 70, BMI = 21.52 - Optimal weight  
200, 70, BMI = 28.69 - Overweight  
150, 0, BMI = Error  
-150, 70, BMI = Error  
128, 60, BMI = 25.00 - Optimal weight  

Actual results: 
1. 14.35 Underweight
2. 21.52 Optimal weight
3. 28.69 Overweight
4. inf Overweight
5. -21.52 Underweight
6. 25.00 Optimal weight
Program needs to be fixed with error handling
## color_mixer.cpp
Inputs and expected results:  
Red and blue - purple  
Red and yellow - orange  
Red and red - red  
Blue and yellow - green  

Actual results:
1. Inputs and expected results:
2. Red and blue - purple
3. Red and yellow - orange
4. Red and red - red
5. Blue and yellow - green  
# code explanations
* How does the BMI formula use pounds and inches? Why is height * height needed?
> The height is squared using height * height and the weight is multiplied by 703, then divided by height squared
* How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter? Explain how your conditions avoid gaps and handle both endpoints.
> In one of my test cases I used 2 values that result in a BMI of exactly 25. It shows as optimal weight. My conditions define optimal weight as being greater than or equal to 18.5 and less than or equal to 25
* Why do you check weight and height before calculating BMI?
> The BMI formula needs weight and height in its calculation so we need to provide these values beforehand
* Why do you classify the unrounded BMI and round only its displayed value?
> Because the unrounded BMI can put you in a different category compared to the rounded and displayed BMI, for example 25.01 will be shown as 25 which is technically "optimal" but actual optimal weight is defined as 18.5 - 25
* What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?
> strcmp returns 0 for equal text. == doesn't actually compare each character in character arrays
* How do you make each mixture work in either input order and handle two identical primary colors?
> We use the "or" operator to check something like red and blue OR blue and red. For identical colors, we check using strcmp whether or not the first color string is the same as the second color string, and then output whatever color the user inputted
* How do you check for an invalid color in either input position?
> We check if an inputted color isn't one of the 3 valid primary colors using strcmp, and throw an error if it isn't
* How do named constants and result variables make your programs easier to read and check?
> Instead of a constant like COLOR_SIZE being an arbitrary value, we give it a name (color size) so that we know exactly what "20" does in the program
