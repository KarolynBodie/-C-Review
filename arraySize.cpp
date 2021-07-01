#include <iostream>
using namespace std;
const int ARRAY_SIZE = 15; //const for max array size
//function prototypes
void printArray(const int x[], int sizeX);
int smallestNumber(const int x[], int sizeX);
int largestNumber(const int x[], int sizeX);


int main() {
 int list [ARRAY_SIZE] = { 'c', 'C','f','F','z','Z','m','M','a','A','o', 'O', 'b','B','t'};
 cout << "List elements (automatically converted to int data type): " << endl << endl; //Call printArray to find results.
 printArray(list, ARRAY_SIZE);
 cout << endl;
 //Call the smmalestIndex function to find the smallest element in the list.
 cout << endl << "The smallest element in list is: " << list[smallestNumber(list, ARRAY_SIZE)] << endl;
 //Call the smallestNumber function to find the position in the array of the smallest index.
 cout << "The position of the first occurrence of the smallest element in the list is: " << smallestNumber(list, ARRAY_SIZE) << endl;
 cout << "The char value of the smallest index is " << char(65) << endl;
 cout << endl;

 //Call the largestNumber function to find the largest element in the list
 cout << "The largest element in list is: " << list[largestNumber(list, ARRAY_SIZE)] << endl;
 cout << "The position of the first occurrence of the largest element in the list is: " << largestNumber(list, ARRAY_SIZE) << endl;
 cout << "The char value of the largest index is " << char(122) << endl;
 cout << endl;
 }
 //Function to print the array
 void printArray(const int list[], int listSize)
 {
   int index;
   for (index = 0; index < listSize; index++)
   cout << list[index] << " ";
 }
 //Function to find and return the index of the smallest element of an array
 int smallestNumber(const int list[], int listSize)
 {
   int counter;
     int minIndex = 0;
   //Cycling through the array to find the smallest element 
   for (counter = 1; counter < listSize; counter++)
        if (list[minIndex] > list [counter])
         minIndex = counter;
         return minIndex;  
 }
 //Function to find and return the index of the largest element of an array
  int largestNumber(const int list[], int listSize)
 {
   int counter;
     int minIndex = 0;
   //Cycling through the array to find the largest element 
   for (counter = 1; counter < listSize; counter++)
        if (list[minIndex] > list [counter])
         minIndex = counter;
         return minIndex;  
 }

