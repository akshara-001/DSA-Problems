#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    int el1 = 0, el2 = 1;
    int c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++) {
        if (c1 == 0 && nums[i] != el2) {
            el1 = nums[i];
            c1 = 1;
        }
        else if (c2 == 0 && nums[i] != el1) {
            el2 = nums[i];
            c2 = 1;
        }
        else if (nums[i] == el1) {
            c1++;
        }
        else if (nums[i] == el2) {
            c2++;
        }
        else {
            c1--;
            c2--;
        }
    }

    c1 = 0; c2 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == el1) c1++;
        if (nums[i] == el2) c2++;
    }

    vector<int> ans;
    if (c1 > n / 3) ans.push_back(el1);
    if (c2 > n / 3 && el2 != el1) ans.push_back(el2);

    return ans;
}

int main() {
    vector<int> nums = {0, 0, 0};
    vector<int> result = majorityElement(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
