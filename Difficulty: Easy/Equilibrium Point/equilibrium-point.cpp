//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
       int n = arr.size();
       vector<int>start(n,0);
      
       vector<int>end(n,0);
       start[0] = arr[0];
        end[n - 1] = arr[n - 1];
       for(int i =1;i<n;i++){
           start[i] = start[i-1]+arr[i];
       }
       for(int i =n-2;i>=0;i--){
          end[i]=end[i+1]+arr[i];
       }
       for(int i =0;i<n;i++){
           if(start[i]==end[i]) return i;
       }
    
        return -1;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends