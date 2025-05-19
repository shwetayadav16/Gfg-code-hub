//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        // int freq_arr(3,0);
        int count_0=0;
        int count_1=0;
        int count_2=0;
        for(int ele:arr){
            if(ele==0) count_0++;
            else if(ele==1) count_1++;
            else count_2++;
        }
        for(int i=0;i<count_0;i++){
            arr[i]=0;
        }
        int n2=count_1+count_0;
        for(int i=count_0;i<n2;i++){
            arr[i]=1;
        }
        int n3=count_1+count_0+count_2;
        for(int i=n2;i<n3;i++){
            arr[i]=2;
        }
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends