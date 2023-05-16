/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    
    std::cout<<"Enter a value of type Integer: "<<"\n";
    std::cout<<"Enter a value of type Float: "<<"\n";
    std::cout<<"Enter a value of type Double: "<<"\n";
    std::cout<<"Enter a value of type String: "<<"\n";
    std::cout<<"Enter a value of type Char: "<<"\n";
    
    std::cin>>givenInt;
    std::cin>>givenFloat;
    std::cin>>givenDouble;
    std::cin>>givenString;
    std::cin>>givenChar;
    



    
    int * loc_givenInt = &givenInt;
    float * loc_givenFloat = &givenFloat;
    double * loc_givenDouble = &givenDouble;
    std::string * loc_givenString = &givenString;
    char * loc_givenChar = &givenChar;
    
    std::cout<<"Value of givenInt: "<< * loc_givenInt<<"\n";
    std::cout<<"Value of givenFloat: "<< * loc_givenFloat<<"\n";
    std::cout<<"Value of givenDouble: "<< *loc_givenDouble<<"\n";
    std::cout<<"Value of givenString: "<< * loc_givenString<<"\n";
    std::cout<<"Value of givenChar: "<<* loc_givenChar<<"\n";
    
    std::cout<<"Value of givenInt: "<< loc_givenInt<<"\n";
    std::cout<<"Value of givenFloat: "<< loc_givenFloat<<"\n";
    std::cout<<"Value of givenDouble: "<< loc_givenDouble<<"\n";
    std::cout<<"Value of givenString: "<<  loc_givenString<<"\n";
    std::cout<<"Value of givenChar: "<< loc_givenChar<<"\n";
    
    return 0;
}