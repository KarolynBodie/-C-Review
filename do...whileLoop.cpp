/*
#include <iostream>
using namespace std;

int main() {
  //Step 1 - Declare variables 
  float number, sum = 0;

  do {//Step 2 and 3 - Ask for user input and assign input to number and add number to sum for as long as they're not entering 0. 
  cout << "Enter a number: ";
  //As long as you're entering a number, assign it to number variable
  cin >> number;
  //Add the number to the sum variable to keep a running total
  sum += number;
  }
  //As long as the number is not 0, go back to the top of the loop
  while (number != 0);
  //When number entered is 0, put the total sum of the numbers that have been entered.
  cout << "The sum of all the numbers you entered is " << sum;
  
 return 0;
}
*/

//More complicated C++ do...while loop:
#include <iostream>
#include <cmath>
using namespace std;

int main()
{//Declare variables 
char ch, ch1;
float length, width, perimeter, area, diagonal;
cout << "Rectangle Menu Selection: ";
cout << endl << " 1.Area";
cout << endl << " 2.Perimeter";
cout << endl << " 3.Diagonal";
cout << endl << " Enter your preference: ";
do
{
  cin >> ch;
  //Check to see if input is 1, 2 , or 3
  if(ch == '1' || ch == '2' || ch == '3')
  {//These three formulas for 1 , 2, or 3 all use length and width
  cout << "Enter the length and width: ";
  cin >> length >> width;
  }
  else
  //invalid input - game over 
  break;
  switch (ch)
  {
    case '1' : area = length * width;
      cout << "Area = " << area << endl;
      break;
    case '2' : perimeter = 2 * (length + width);
      cout << "Perimeter = " << perimeter << endl;
      break;
    case '3' : diagonal = sqrt ((length * length)+ (width * width));
      cout << "Diagonal = " << diagonal << endl;
      break;

  } // end of switch   
  cout << "Do you want to continue playing (y/n)? ";
  cin >> ch1;
  if (ch1 == 'y' || ch1 == 'Y')
    cout << "Enter 1, 2, or 3: ";
} //You're still playing as long as you enter y or Y.
while (ch1 == 'y' || ch1 == 'Y');


return 0;
}
