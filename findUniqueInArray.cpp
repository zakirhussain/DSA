/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;
/*
    Find Unique in Array
    I/P: 1, 2, 3, 1, 2
    O/P: 3
*/

int FindUniqueInArray(int ar [], int size){
    
    int Unique = 0;
    for (int i=0; i <size; i++){
        
        Unique ^= ar[i];
    }
    return Unique;
}
int main()
{
    //int ar [] = {10,18,12,7,100,200};
    int ar [] = {1, 2, 3, 1, 2};
    int size = sizeof(ar)/sizeof(int);
    
    int u = FindUniqueInArray(ar, size);
    for (int i = 0;  i<size; i++){
        std::cout << ar[i] << " " ;
    }
    
    cout<<"Unique: "<< u<<endl;
    
    return 0;
}
