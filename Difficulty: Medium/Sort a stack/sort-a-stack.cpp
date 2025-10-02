class Solution {
  public:
//   Approach --it is like sort the array
// IBH--induction,base and hypothesis
// Now, we
// 
// 
void insert(stack<int>&st,int temp){
    if(st.size()==0||st.top()<=temp){ //base case
        st.push(temp);
        return;
    }
    int pop=st.top();
    st.pop();
    insert(st,temp);
    st.push(pop);
    return;
    
}

  void recSort(stack<int>&st){
      if(st.size()==1){  //base case
          return;
      }
      int temp=st.top();
      st.pop();
      recSort(st);
      insert(st, temp);
      return;
  }
    void sortStack(stack<int> &st) {
        // code here
        recSort(st);
        return;
    }
};
