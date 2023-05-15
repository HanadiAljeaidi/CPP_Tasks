/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main(){
    
    int num;
    float sum = 0;
    float average = 0.0;
    
    std::cout<<"Enter the first number: ";
    
    for(int i = 0; i<5; i++){
        std::cin>>num;
        
        sum = sum + num;
    }
    
    average = sum / 5;
    
    std::cout<<"The sum of the five numbers = "<<sum<<"\n";
    std::cout<<"The verage of the five numbers = "<<average<<"\n";
    
    return 0;
}