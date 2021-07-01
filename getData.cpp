#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void getData(char &maritalStatus, int &householdSize, double &grossSalary, double &pension);

double taxAmount(char maritalStatus, int householdSize, double grossSalary, double pension);

double getFederalTax(double taxableIncome);



int main ()
{
     char maritalStatus = ' ';

     int householdSize = 0;

     double grossSalary = 0, pension = 0;

     double federal_tax = 0, taxableIncome = 0;


     getData(maritalStatus, householdSize, grossSalary, pension);

 
     taxableIncome = taxAmount(maritalStatus, householdSize, grossSalary,   pension);



     federal_tax = getFederalTax(taxableIncome);


     cout<<"\nFederal Tax details of a person: "<< endl;

     cout<<"Marital Status: " <<maritalStatus << endl;

     cout<<"Number of people in the family: " <<householdSize <<endl;

     cout<<"Income earned: " <<grossSalary << endl;

     cout<<"Pension Plan contribution: " << pension<<endl;

     cout<<"\nTaxable Income: " <<taxableIncome<<endl;

     cout<<"\nThe Federal Tax payable is: " <<federal_tax<<endl;



     return 0;

}


void getData(char &maritalStatus, int &householdSize, double &grossSalary, double &pension)

{

     char reply;

     int numChildren = 0;


     cout << "Enter your Marital Status: "

          <<"\n M = Married or S = Single: ";

     cin >> maritalStatus;


     if (maritalStatus == 'm' || maritalStatus == 'M')

     {


          cout<<"\nEnter number of children under age 14: ";

          cin>>numChildren;

          householdSize = 2 + numChildren;

         
              cout << "Enter your salary: ";

              cin>> grossSalary;

              cout<< endl;

     }
     else
     {

          cout << "\nPlease enter your salary: ";

          cin >> grossSalary;

          cout << endl;

          householdSize = 1;

     }


     cout << "Enter your Pension Plan contribution(max 6%): ";
     cin >> pension;


     while(pension > 6.00)
     {
          cout<<"The max is 6%." <<endl;

          cout << "Please enter your Pension Plan contribution(max 6%): ";

          cin >> pension;
     }   


     pension = pension/100 * grossSalary;
     cout << endl;

}



double taxAmount(char maritalStatus, int householdSize, double grossSalary, double pension)

{

     double standardExempt = 0;

     double taxableIncome;



     if(maritalStatus == 'm' || maritalStatus == 'M')

          standardExempt = 7000;

     else

          standardExempt = 4000;

     cout << fixed << setprecision(2) << endl;
     taxableIncome = grossSalary -( (1500.00 * householdSize) + pension + standardExempt);


     return (taxableIncome);

}


double getFederalTax(double taxableIncome)

{
     if(taxableIncome >= 0 && taxableIncome <= 15000)

          return taxableIncome * 0.15;

     else if(taxableIncome >= 15001 && taxableIncome <= 40000)

  return ((2250.00 + taxableIncome * 0.25) - 3750);

     else

 return ((8460.00 + taxableIncome * 0.35) - 14000);

}
