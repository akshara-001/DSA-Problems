#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
void rotate(vector<vector<int>>& matrix) {
      int n = matrix.size();
     

      for(int i = 0; i< n - 1; i++){
        for(int j= i + 1; j < n;j++){
          swap(matrix[i][j],matrix[j][i]);
        }
      }
      for(int i = 0;i<n;i++){
        reverse(matrix[i].begin() , matrix[i].end());
       
      }
    }
int main(){
        vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
        rotate(arr);
        for(int i = 0 ; i< arr.size();i++){
            for(int j =0 ;j < arr[0].size();j++){
               cout<<arr[i][j];
            }
            cout<<endl;
        }
      }