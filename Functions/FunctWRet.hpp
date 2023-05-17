/*Put your functions here. 
**The grader will use this file to check your work. 
*/

#include<iostream>

int printEquation(int m1, int m2, int total, char operation);

int sum(int m1, int m2);


int printEquation(int m1, int m2,int total, char operation){
    switch(operation){
        case '+' :
            return m1 + m2;
            break;
        
        case '-' :
            return m1 - m2;
            break;
        
        case '*' :
            return m1 * m2;
            break;
        
        case '/' :
            return m1 / m2;
            break;
        
        
    }
    
    std::cout<<m1<<" "<<operation<<" "<<m2<<" = "<<sum;
}

int sum(int m1, int m2){
    return m1 + m2;
}