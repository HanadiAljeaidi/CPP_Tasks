
/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/


#include <iostream>

int main() 
{
    using namespace std;
    cout<<"The size of int: "<<sizeof(int)<<"\n";
    cout<<"The size of short: "<<sizeof(short)<<"\n";
    cout<<"The size of long: "<<sizeof(long)<<"\n";
    cout<<"The size of char: "<<sizeof(char)<<"\n";
    cout<<"The size of float: "<<sizeof(float)<<"\n";
    cout<<"The size of double: "<<sizeof(double)<<"\n";
    cout<<"The size of bool: "<<sizeof(bool)<<"\n";
    
    return 0;
}
