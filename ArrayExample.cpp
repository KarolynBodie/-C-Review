//Ch 8 Array Example #2 using more calculations and array manipulations.

#include <iostream>
#include <string>
#include <iomanip>
#include <limits> //nned this to get rid of newline characters for the program
using namespace std;

struct gasStation //setting up a structure which has its own variables
{
  string name;
  double cost = 0;
  float beginningOdometer = 0; //for beginning odometer after each fill up
  float milesDriven = 0; //miles driven this trip
  float numberGallons = 0; //number of gallons bought
  float gasCost = 0; //cost * numberGallons
};//structures must end with a semi-colon after closing parentheses sign

//int main starts below
int main() {
  int numberFillups = 3;
  //using a structure as an array named store[]
  gasStation store[numberFillups]; //hard coding number fillups

  for (int i = 0; i < numberFillups; i++)
 {
   cout << "Enter the name of the gas station " << i + 1 <<":";
   getline(cin,store[i].name); //using getline to allow spaces for multiple word names
   cout << "Enter the price per gallon at ' " << store[i].name << "':";
   cin >> store[i].cost;

   cout << "Enter the number of gallons you bought at '" << store[i].name << "':";
   cin >> store[i].numberGallons;
   cout << "Enter odometer reading at '" << store[i].name << "':";
   cin >> store[i].beginningOdometer;

 //flushes all newline characters. If we don't use this, the program won't allow more than one getline stmt.
 cin.ignore(numeric_limits<streamsize> :: max(), '\n');
 }
 //output results from 2nd reading to last entry. Why not 1st? 
 cout << setprecision(3) << fixed; //to allow for three decimal place calculations
 for (int i = 1; i < numberFillups; i++)
{
  cout << endl;
  cout << "For fill up number " << i << "you took " << store[i].numberGallons << " gallons at a cost of $" << store[i].cost << " per gallon resulting in a cost of $" << store[i].cost * store[i].numberGallons << ". You have earned " << (store[i].beginningOdometer - store[i-1].beginningOdometer) / store[i].numberGallons << " miles per gallon! This purchase was made at " << store[i].name << endl;
}

 }
