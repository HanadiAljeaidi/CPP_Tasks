/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream> 
using namespace std;

int main() {
   int num = 0;
   int maxNum;
   int minNum;
   int sum;
   float average;
   
   for(int i=0; i<15; i++){
       cout<<"Enter a number between 0 to 100";
       cin>>num;
       sum = sum + num;
       
    // to find min and max
    
        if(num > maxNum)
        {
            maxNum = num;
        }
        
        if(num < minNum)
        {
            minNum = num;
        }
   }
   
   average = sum / 15;
   
   cout<<"Maximum number = "<<maxNum<<"\n";
   cout<<"Minimum number = "<<minNum<<"\n";
   cout<<"Sum = "<< sum<<"\n";
   cout<<"The average = "<<average<<"\n";
   
}
