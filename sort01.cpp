/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/*
    sorting of 0s and 1s
    I/P: 0,1,1,1,0,1,0,0,1
    O/P: 0 0 0 0 1 1 1 1 1
*/

void sort01(int ar[], int size){
    
    int count = 0;    
    
    for (int i = 0; i < size; i++){
        if (ar[i] == 0)
            count++;
    }
    
    // fill zeros
    for (int i = 0; i < count; i++){
        ar[i] = 0;
    }
    // fill 1's 
    for(int i = count; i < size; i++){
        ar[i] = 1;
    }
}

int main()
{
    int ar[] = {0,1,1,1,0,1,0,0,1};
    int size = sizeof(ar)/sizeof(ar[0]);
    
    cout<<"Before Sorting\n";
    for (int i = 0; i < size; i++){
        cout<< ar[i] << " ";
    }    
    
    cout<<"\n";
    
    sort01(ar, size);
    
    cout<<"After Sorting\n";
    for (int i = 0; i < size; i++){
        cout<< ar[i] << " ";
    }    
    
    return 0;
}
