//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        stack<string> st;
        int n = pre_exp.length();
        int i = n-1;
        string con;
        while(i>=0){
            if(isalnum(pre_exp[i])) st.push(string(1,pre_exp[i]));
            else {
                string t1 = st.top(); st.pop();
                string t2 = st.top(); st.pop();
                con = '('+t1+pre_exp[i]+t2+')';
                st.push(con);
            }
            i--;
        }
        return st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends