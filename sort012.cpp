/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/*
    sorting of 0s and 1s and 2nd
    I/P: 0,1,1,1,2,0,1,0,0,2,1
    O/P: 0 0 0 0 1 1 1 1 1 2 2
*/

void sort012(int ar[], int size){
    int count0 = 0, count1 = 0, count2 = 0;
    
    for(int i = 0; i<size; i++){
        if (ar[i] == 0){
            count0++;
        } else if(ar[i] == 1){
            count1++;
        } else {
            count2++;
        }
    }
    
    for(int i = 0; i<count0; i++){
        ar[i] = 0;
    }
    
    for(int i = count0; i<(count0+count1); i++){
        ar[i] = 1;
    }
    
    for(int i = (count0+count1); i<size; i++){
        ar[i] = 2;
    }
}

int main()
{
    //int ar[] = {0,1,1,1,0,1,0,0,1,0};
    int ar[] = {0, 0, 1, 0, 0, 2, 1, 0, 1, 0, 0, 2, 0, 0, 1, 1, 2};
    int size = sizeof(ar)/sizeof(ar[0]);
    
    cout<<"Before Sorting\n";
    for (int i = 0; i < size; i++){
        cout<< ar[i] << " ";
    }    
    
    cout<<"\n";
    
    sort012(ar, size);
    
    cout<<"After Sorting\n";
    for (int i = 0; i < size; i++){
        cout<< ar[i] << " ";
    }    
    
    return 0;
}
