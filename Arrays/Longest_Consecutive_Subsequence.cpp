#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<unordered_set>
using namespace std;
int longestConsecutive_approach1(vector<int>& nums) {
      int n = nums.size();
      int count = 1;
      int max1 = 1;
      if(n == 0) return 0;
     
      
      sort(nums.begin(),nums.end());
      for(int i = 0; i< n - 1;i++ ){
        if(nums[i  + 1] == nums[i] + 1){
            count++;
            max1 = max(count,max1);
        }
        else if (nums[i + 1] == nums[i]){
            continue;
        }
        else {
            count = 1;
        }
      }
      return max1;

    }
     int longestConsecutive_approach2(vector<int>& nums) {
      int n = nums.size();
      int count = 1;
      int max1 = 1;
      if(n == 0)return 0;
      unordered_set<int> st;
      for(int i = 0; i< n; i++){
        st.insert(nums[i]);
      }
      int x;
      for(auto i : st){
        if(st.find(i - 1) == st.end()){
            count = 1;
            x = i;
            while(st.find(x + 1) != st.end()){
                x = x+1;
                count++;
            }
            max1 = max(count,max1);
        }
      }
      return max1;

    }
    int main(){
        vector<int> arr = {100,4,200,1,3,2};
        int maxl = longestConsecutive_approach1(arr);
        int max2 = longestConsecutive_approach2(arr);
        cout<<"Better approach with O(nlogn) complexity : " <<maxl<<endl;
        cout<<" optimal approach with O(n) complexity : "<<max2;

    }