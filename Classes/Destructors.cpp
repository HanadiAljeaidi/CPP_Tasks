/*

Declaring a destructor:

~className()  //this is a destructor
Defining a destructor:

classname::~classname()
{
     //tasks to be completed before going out of scope
}


*/




/*Goal: use pointers to allot memory locations
*for a class. 
*/

#include "main.hpp"

int main()
{
    Dog d2(666666);
    cout<<d2.getLicense();
    return 0;
}
