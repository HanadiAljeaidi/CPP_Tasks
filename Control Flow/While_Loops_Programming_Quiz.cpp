/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
*/
#include <iostream>
#include<sstream>

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;
    std::cout<<"Guess a number between 0 and 100: ";
    std::cin>>guess;
    std::cout<<guess<<"\n";
    
    while(guess != target){
        
        if(guess < target){
            std::cout<<"The guessed number is too low. \n";
            std::cout<<"Try again: \n";
            
            std::cin>>guess;
            std::cout<<guess<<"\n";
        } else if (guess > target){
            
            std::cout<<"The guessed number is too high. \n";
            std::cout<<"Try again: \n";
            
            std::cin>>guess;
            std::cout<<guess<<"\n";
        } else
            std::cout<<"The guessed number is right!";
        }
    
        if (guess == -1){
            std::cout<<"Good bye!";
        }
    } 
        
         
    return 0;
}
