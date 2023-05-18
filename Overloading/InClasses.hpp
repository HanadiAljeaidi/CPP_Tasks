#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);

    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);

    int findSmaller(int arr[], int size);
    float findSmaller(float arr[], int size);
    char findSmaller(char arr[], int size);
    
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
    if(input1<input2){
        if(input1<input3){
            return input1;
        }else{
            return input3;
        }
    }else{
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

float Compare::findSmaller(float input1, float input2, float input3)
{
    if(input1<input2){
        if(input1<input3){
            return input1;
        }else{
            return input3;
        }
    }else{
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

char Compare::findSmaller(char input1, char input2, char input3)
{
    if(input1<input2){
        if(input1<input3){
            return input1;
        }else{
            return input3;
        }
    }else{
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

int Compare::findSmaller(int arr[], int size)
{
    for(int i=0; i<size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j + 1]< arr[j]){
                
            }
        }
    }
    return arr[0];
}

float Compare::findSmaller(float arr[], int size)
{
    for(int i=0; i<size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j + 1]< arr[j]){
                
            }
        }
    }
    return arr[0];
}

char Compare::findSmaller(char arr[], int size)
{
    for(int i=0; i<size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j + 1]< arr[j]){
                
            }
        }
    }
    return arr[0];
}
