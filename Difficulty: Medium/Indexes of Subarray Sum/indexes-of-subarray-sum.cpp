//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int i = 0, j = 0, cur = arr[0];

    while (j < arr.size()) {
        if (cur == target) {
            return {i + 1, j + 1}; // Convert to 1-based index
        } else if (cur < target) {
            j++;
            if (j < arr.size()) cur += arr[j]; // Avoid out-of-bounds
        } else {
            cur -= arr[i];
            i++;
        }
    }
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends