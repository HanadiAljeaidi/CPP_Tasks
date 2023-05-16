// This file is for trying tasks and playing with them



/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>


int main(){
    
    float l = 0;
    float w = 0;
    float values[2];
    std::string line;
    int i = 0;
    
    std::ifstream inputFile("input.txt");

    if (inputFile.is_open()){
        while(std::getline(inputFile, line)){
            std::stringstream ss(line);

            ss >> values[i];
            i++;
            

           
        }
        l = values[0];
        w = values[1];
        std::cout<<"The length = "<<l<<std::endl;
        std::cout<<"The width = "<<w<<std::endl;

        inputFile.close();

    }else {
        std::cout<<"Unable to open file for reading";
    }
    
    return 0;
}
