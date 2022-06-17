/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
/*
    Insertion Sort
    I/P: 4,3,2,1
    O/P: 1,2,3,4
*/

void InsertionSort(vector<int> & ar){
    
    for(int i = 0; i < ar.size()-1; i++){
        
        int tmp = ar[i+1];
        int j=i;
            
        for(; j >= 0; j--){
            
            if(ar[j] > tmp)
            {
               ar[j+1] = ar[j];
            }else{
                
                break;
                
            }
            
        }
        
        ar[j+1] = tmp;
    }    
}

int main ()
{
  vector < int >v = { 0,10,5,2 };

  InsertionSort (v);
  for(auto &x : v){
    std::cout <<  x << " ";
  }
 
  return 0;
}
