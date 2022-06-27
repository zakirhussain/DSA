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
    O/P: 6, 15, 24
*/

void rowSum(int ar[][3], int row, int col){
    for (int i = 0; i < row; i++){
        int rowsum = 0;
        for(int j = 0; j < col; j++){
            rowsum += ar[i][j];
        }
        cout << "Rowsum [" <<i+1<<"] = " << rowsum <<endl;
    }
}

void colSum(int ar[][3], int row, int col){
    for (int i = 0; i < row; i++){
        int colsum = 0;
        for(int j = 0; j < col; j++){
            colsum += ar[j][i];
        }
        cout << "ColSum [" <<i+1<<"] = " << colsum <<endl;
    }
}

void print(int ar[][3], int row, int col){
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<ar[i][j]<<" ";
        }
        cout << endl;
    }
}

int main (){
    int ar[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    rowSum(ar,3,3);
    colSum(ar,3,3);
  return 0;
}
