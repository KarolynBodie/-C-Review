#include <iostream>
#include <cmath>    //  <<Remember to include
#include <iomanip>  //   <<Remember to include

using namespace std;

int main() {
 
    double kg;                //Assign Variables
    double pound = 2.2;
    double convert;
    
    
    cout << "Enter the weight of a person in kilograms and hit enter: " << endl;
    cin >> kg;
    convert = kg * pound;   //  Create Algorithm
    
      cout << "Weight of a person in kilograms converted to pounds: " << fixed << setprecision(2) << convert << endl;
                                                //*Remember to include* ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    return 0;
}
