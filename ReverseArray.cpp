/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;
/*
    ReverseArray
*/

void ReverseArray(int ar [], int size){
    
    for (int i =0; i< size/2; i++){
        int tmp = ar[i];
        ar[i] = ar[size-i-1];
        ar[size-i-1] = tmp;
    }
    
}
int main()
{
    int ar [6] = {10,18,12,7,100,200};
    
    ReverseArray(ar, 6);
    for (int i = 0;  i<6; i++){
        std::cout << ar[i] << " " ;
    }
    
    return 0;
}
