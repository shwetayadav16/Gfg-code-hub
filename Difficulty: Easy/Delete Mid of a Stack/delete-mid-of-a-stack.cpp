class Solution {
  public:
    // Function to delete middle element of a stack.
    void helper(stack<int>&st,int mid){
        if(st.size()==mid){
            st.pop();
            return;
        }
        int temp=st.top();
        st.pop();
        helper(st,mid);
        st.push(temp);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int mid=floor((s.size()+1)/2);
        helper(s,mid);
    }
};