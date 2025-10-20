// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat) {
        // code here
        vector<int>temp;
        for(auto&i:mat){
            for(int&j:i){
                temp.push_back(j);
            }
        }
        sort(temp.begin(),temp.end());
        int k=0;
        for(auto&i:mat){
            for(int&j:i){
                j=temp[k];
                k++;
            }
        }
        return mat;
    }
};