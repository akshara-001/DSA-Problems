#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
 vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int m = matrix.size();
       int n = matrix[0].size();
      vector<int> ans;
       int t = 0;
       int l = 0;
       int r = n - 1;
       int b = m - 1;
       while( l <= r && t<=b){ 
       for(int i = l; i<= r; i++){
          ans.push_back(matrix[t][i]);
       }
       t++;
       for(int i = t; i<= b;i++){
        ans.push_back(matrix[i][r]);

       }
       r--;
       if(t<= b){ 
       for(int i = r; i>= l;i--){
        ans.push_back(matrix[b][i]);

       }
       b--;
       }
       if(l<=r){ 
       for(int i = b;i>=t;i--){
        ans.push_back(matrix[i][l]);
       }
       l++;
       }
       }
       return ans;
    }
int main(){
        vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
        vector<int> ans;
        ans = spiralOrder(arr);
        for(int i = 0 ; i< ans.size();i++){
           cout<<ans[i]<<" ";
        }
      }