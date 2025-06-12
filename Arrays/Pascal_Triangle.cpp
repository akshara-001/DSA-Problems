#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;

    for (int i = 1; i <= numRows; i++) {
        vector<int> temp;
        int res = 1;
        temp.push_back(res);  

        for (int j = 1; j < i; j++) {
            res = res * (i - j);
            res = res / j;
            temp.push_back(res);
        }

        ans.push_back(temp);
    }

    return ans;
}

int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> triangle = generate(numRows);

    cout << "Pascal's Triangle:\n";
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
