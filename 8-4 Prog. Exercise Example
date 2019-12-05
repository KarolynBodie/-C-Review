//Example program for Prog Exer 8-4
#include <iostream>
#include <iomanip> //using setw(3) etc for data organization
#include <fstream> // using file stream library to read data file
using namespace std;
//Two function prototypes to read data file and to print results. readData uses input file stream (ifstream) and list (array) and size (will be assigned as 4 which gives 4 ranges of 50 to go from 0-49, 50-99,100-149, and 150-200)

void readData(ifstream& inputFile, int list[], int size);
//The print function will set up the screen output as range (the 4 ranges) and the # of students in each range (0-49, 50-99,100-149, and 150-200)

void print(int list[], int size);

int main() {
//Using array of size 4 and initializing all values to 0. Then declaring the infile and opening the infile if it can be opened. 
int scores[4]  = {0};
ifstream infile;
infile.open("Ch8_Ex4Data.txt");
      if(!infile)
      {
        cout << "Cannot open the input file. Program terminates!" << endl;
        return 1;
      } 

 //Call functions to readData and to print data 
  readData(infile, scores, 4); //4 used for ranges of 50, starting with 0-49, as 0, 50-99 as 1, 100-149 as 2 and 150-200 as 3 (meaning 4 ranges)
    print(scores,4);
    cout << endl;
    infile.close();
    return 0;
 }
 
 //int main is ended next function definitions and function code 
 void readData(ifstream& inputFile, int list[], int size)
 {
   int score; //each of the 26 scores being read
   int index;// which range the score is in (0 range = 0-49, 1 range = 50-99, 2 range = 100-149 and 3 range as 150-200 (and 3 is really 4 ranges because there's a 0 range too))
    inputFile >> score; //read score
    while (inputFile)//while there are records to be read
    {
        index = score / 50; //the 1st score is 76 so 76/50 = 1, meanin the 2nd index (50-99) because it goes 0,1,2,3. etc...
          if (index == size)
                  index--;
          if (index < size)        
                  list[index]++;
          inputFile >> score;
          
    }
 }
  void print(int list[], int size) //print has 2 parameters, the array and the size
  {
    int range; //4 ranges starting with 0 from 0-49, then going to 1 from 50-99 up to 3 from 150-200
    int lowRange = 0; //setting up the 0 range with the low number
    int upperRange = 49; //setting up the top number of the 0 range

    cout << " Range     #of Students" << endl;
    for (range = 0; range < size; range++)
  
  {
    cout << setw(3) << lowRange << "-" << setw(3) << upperRange << setw(15) << list[range] << endl;

    lowRange = upperRange + 1; //setting up 2nd range from 50 (49 from upper range of range 0 so 49+1 = 50 is the low range of range 1 and 99 will be the top of range of range 1, then 100 will be the low range of range 2 and 149 will be the upper range of 2, up to range 3 which goes from 150-200)
  
      upperRange = upperRange + 50;
      if (range == size -2)
        upperRange++;
    }
      cout << endl;
  }
  
