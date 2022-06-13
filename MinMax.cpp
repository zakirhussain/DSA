/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;
/*
    Find max and min
*/
int getMin(int ar [], int size){
    
    int min = INT_MAX;
    int i=1;
    for (i=1; i<size; i++){
        if (min > ar [i]){
            min = ar[i];
        }
    }
    
    return min;
    
}

int getMax(int ar [], int size){
    
    int max = INT_MIN;
    
    for (int i=1; i<size; i++){
        if (max < ar [i]){
            max = ar[i];
        }
    }
    
    return max;
    
}

int main()
{
    //int ar [5] = {10,18,12,7,100};
    int ar [5] = {1,1,1,1,1};
    cout<<"Max= "<< getMax(ar, 5)<<endl;
    cout<<"Min= "<< getMin(ar, 5)<<endl;
    
    return 0;
}
