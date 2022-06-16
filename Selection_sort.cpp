/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
/*
    Selection Sort
    I/P: 4,3,2,1
    O/P: 1,2,3,4
*/

void selectionSort(vector<int> & ar){
    
    for(int i = 0; i< ar.size()-1; i++){
        
        int minIndex =  i;
        
        for(int j=i+1; j < ar.size(); j++){
            
            if(ar[minIndex] > ar[j]){
                minIndex = j;
            }
        }
        int tmp = ar[minIndex];
        ar[minIndex] = ar[i];
        ar[i] = tmp;
    }    
}

int main ()
{
  vector < int >v = { 0,10,5,2 };

  selectionSort (v);
  for(auto &x : v){
    std::cout <<  x << " ";
  }
 
  return 0;
}
