/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <fstream>
using namespace std;


int main()
{

    int userInput[40];
    cout<<"Enter 40 values: ";

    ifstream inputFile("practiceArrays_input.txt");\

    stringstream ss;
    ss << inputFile.rdbuf(); // rdbuf() reads values in the input file into a stringstream.

    
    for(int i = 0; i < 40; i++)
    {
        ss >> userInput[i];
        // scanf("%d", &userInput[i]);
        // cout<<userInput[i]<<" ";
    }
    
    for(int i = 40; i >= 0; i--){
        cout<<userInput[i]<<" ";
    }
    
   
    for(int i = 0; i < 40; i++){
        for(int j = 0; j < 39 - i; j++){
            if(userInput[j] > userInput[j + 1]){
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = temp;
            }
        }
    }
    
    for(int i = 0; i < 40; i++){
        cout<<userInput[i]<<"\n";
    }
    
    
    return 0;
}
