/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;
/*
    Linear search
*/

bool LinearSearch(int ar [], int size, int key){
    
    for (int i =0; i< size; i++){
        if (key == ar[i]){
            return true;
        }
    }
    return false;
}
int main()
{
    int ar [5] = {10,18,12,7,100};
    //int ar [5] = {1,1,1,1,1};
    int searchElement;
    cin >> searchElement;
    int size = sizeof(ar)/sizeof(int);
    
    if (LinearSearch(ar, size, searchElement)){
        cout<<"Key is found";
    } else{
        cout<<"Key is not found";
    }
    return 0;
}
