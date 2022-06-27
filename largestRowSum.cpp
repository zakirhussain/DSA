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
    O/P: largest Row Sum: 24
		 Index : 2
*/

void largestRowSum(int ar[][3], int row, int col){
    int max = -1;
    int rowIndex = -1;
    for (int i = 0; i < row; i++){
        int rowsum = 0;
        for(int j = 0; j < col; j++){
            rowsum += ar[i][j];
        }
        cout << "Rowsum [" <<i+1<<"] = " << rowsum <<endl;
        if (rowsum > max){
            max = rowsum;
            rowIndex = i;
        }
    }
    cout<<"Largest Rowsum: " << max<< " rowIndex: "<< rowIndex<<endl; 
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
    int ar[][3] = {{1,2,100},{4,5,6},{7,8,9}};
 
    largestRowSum(ar,3,3);
  return 0;
}
