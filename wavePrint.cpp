/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
    I/P: 
    1,2,3
    4,5,6
    7,8,9
    O/P: 1,4,7,8,5,2,3,6,9
*/

vector<int> wavePrint(vector<vector<int>> ar, int row, int col){
    
    vector<int> ans;
    for (int i = 0; i < row; i++){
        
        if (i&1){
            for(int j = col-1; j >=0; j--){
                ans.push_back(ar[j][i]);
            }
        } else {
            for(int j = 0; j < col; j++){
                ans.push_back(ar[j][i]);
            }
        }
    }
    return ans;
}

void print(int ar[][3], int row, int col){
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<ar[i][j]<<" ";
        }
        cout << endl;
    }
}

void printVector(vector<int> v){
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main (){
    vector<vector<int>> v1= {{1,2,3},{4,5,6},{7,8,9}};
    
    vector<int> v2 = wavePrint(v1, 3, 3);
    printVector(v2);
  return 0;
}
