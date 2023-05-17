/*The program is changed to return 
**the modified variable 'a'
**
**P.S. This is a totally silly program. Why write a function, 
**with all the function overhead, to increment a variable?
**Silly!
*/

#include<iostream>

int increment(int a);
int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    a = increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
int increment(int a)
{
    a++;
    std::cout<<"In the function call a = "<<a<<"\n";
    return a;
}