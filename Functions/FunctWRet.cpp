/*Goal: practice writing functions with parameters and return values.*/

#include "main.hpp"

void printEquation(int m1, int m2, char operation);

int main(){
    
    int m1 = 2;
    int m2 = 3;
    int total = sum(m1, m2);
    
    printEquation(m1, m2, total, '+');
    // printEquation(m1,m2,total,'-');
    // printEqaution(m1, m2, total, '*');
    // printEquation(m1, m2, total, '/');

    return 0;
    
}

void printEquation(int m1), int m2, 
