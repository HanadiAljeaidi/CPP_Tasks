/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers, 
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution. 
*/

#include <iostream>
using namespace std;

int main()
{
    // float in1, in2;
    // std::cout<<"Enter two numbers:\n";
    // std::cin>>in1;
    // std::cin>>in2;
    // std::cout<<"Enter the operation '+','-','*','/':\n";
    // return 0;
    
    float int1, int2;
    char operation;
    int result;
    cout<<"Enter two numbers: \n";
    cin>>int1>>int2;
    cout<<"Enter the operation '+', '-', '*', '/': \n";
    cin>>operation;
    
    switch (operation);
    {
        case ('+'):
        {
            result = int1 + int2;
            break;
        }
        case ('-'):
        {
            result = int1 - int2;
            break;
        }
        case ('*'):
        {
            result = int1 * int2;
            break;
            
        }
        case ('/'):
        {
            result = int1 / int2;
            break;
        }
    break
        
    }
    
    cout<<result;
}
