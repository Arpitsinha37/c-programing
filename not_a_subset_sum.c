#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        long long res =1;
        
        for(int i =0;i<arr.size() && arr[i]<=res;i++){
            res+=arr[i];
        }
        return res;
    }
};
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        auto ans = ob.findSmallest(arr);
        cout << ans << "\n";
    }
    return 0;
}