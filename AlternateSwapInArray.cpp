/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;
/*
    Alternate Swap
    I/P: 1, 2, 3, 4, 5
    O/P: 2, 1, 4, 3, 5
*/

void AlternateSwapInArray(int ar [], int size){
    
    for (int i=0; i <size-1; i+=2){
        int tmp=ar[i];
        ar[i] = ar[i+1];
        ar[i+1] = tmp;
    }
    
}
int main()
{
    //int ar [] = {10,18,12,7,100,200};
    int ar [] = {10,18,12,7,100};
    int size = sizeof(ar)/sizeof(int);
    
    AlternateSwapInArray(ar, size);
    for (int i = 0;  i<size; i++){
        std::cout << ar[i] << " " ;
    }
    
    return 0;
}
