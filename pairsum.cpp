/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
/*
    pairSum
    I/P: 1, 2, 3, 4, 5, 6
    I/P: 5
    O/P: (1,4) (2,3)
*/

std::vector<std::vector<int>> pairSum(std::vector<int> & v, int sum) 
{
    
    std::vector<std::vector<int>> ans;
    
    for(int i=0; i< v.size(); i++){
        
        for(int j=i+1; j<v.size(); j++){
            
            if( (v[i] + v[j]) == sum){
                std::vector<int> tmp;
                tmp.push_back(min(v[i], v[j]));
                tmp.push_back(max(v[i], v[j]));
                ans.push_back(tmp);
            } 
        }
    }
    
    std::sort(ans.begin(), ans.end());
    
    return ans;
}
int main()
{
    //int ar [] = {10,18,12,7,100,200};
    /*int ar [] = {1, 2, 3, 1, 2};
    int size = sizeof(ar)/sizeof(int);
    
    int u = FindUniqueInArray(ar, size);
    for (int i = 0;  i<size; i++){
        std::cout << ar[i] << " " ;
    }
    
    cout<<"Unique: "<< u<<endl;
    */
    std::vector<int> v = {1,2,3,4,5};
    std::vector<std::vector<int>> v2 = pairSum(v, 5);
    for(auto v1 : v2)
    {
        for(auto it : v1){
            cout<< it <<" ";
        }
    }
    return 0;
}
