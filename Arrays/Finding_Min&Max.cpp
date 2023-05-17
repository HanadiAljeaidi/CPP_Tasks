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
    int MinNum = 100;
    int MaxNum = 0;
    int sum;
    float average;
    
    
    for(int i = 0; i < 15; i++){
        cout<<"Enter a number between 0 and 100: ";
        scanf("%d", &num);
        cout<<num<<"\n";
        sum += num;
        
        if(num > MaxNum){
            MaxNum = num;
        }
        
        if(num < MinNum){
            MinNum = num;
        }
    }
    
    
    cout<<"Minimum number = "<<MinNum<<"\n";
    cout<<"Maximum number = "<<MaxNum<<"\n";
    
    // cout<<sum<<"\n";
    average = sum / 15;
    cout<<"Average = "<<average<<"\n";
    
}