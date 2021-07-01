//Prog Exer 8-5- modified to change the scenario from upper to lower case string manipulation with one simple one dimensional array
#include <iostream>
#include <cstring>
using namespace std;

int main() {
 char str[52]; //array for 52 characters using char data type
 int len; //for length of string calculation
 int index; //loop counter

 cout << "Enter a string with CAPITAL LETTERS: ";
 cin.get(str,52); //using array with up to 52 characters
 cout << endl;
 cout << "The string converted to lower case letters is: " << endl;

 len = strlen(str); //strlen works because we included #include<cstring>
 for(index = 0; index < len; index++)
   cout << static_cast<char>(tolower(str[index])); //using tolower to turn capital letters to lower case
   cout << endl;

   return 0;
}
