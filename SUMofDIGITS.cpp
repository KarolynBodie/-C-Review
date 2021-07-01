//Adding the sum of digits input 
//does not work with neg numbers

#include <iostream>

using namespace std;

int main()
{
int num;
int sum = 0;

cout << " Enter a number : ";
cin >> num;

while ( num > 0 ) {
sum += num % 10;
num /= 10;
}

cout << "Sum = " << sum;

return 0;
}
