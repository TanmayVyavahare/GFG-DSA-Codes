//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<int> res;
        int left =0;
        int right = n-1;
        int mindiff = INT_MAX;
        while(left<right){
            int currsum = arr[left]+arr[right];
            if(abs(target-currsum)<mindiff){
                mindiff= abs(target-currsum);
                res ={arr[left],arr[right]};
            }
            else if (currsum < target) left++;
            else if(currsum>target) right--;
            else return res;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends