class Solution {
  public:
  
  //Apprach is same-- IBH
  
  void insert(stack<int>&st,int temp){
      if(st.size()==0){
          st.push(temp);
          return;
      }
      int pop=st.top();
      st.pop();
      insert(st,temp);
      st.push(pop);
  }
  void reverse(stack<int>&st){
  if(st.size()==1) return;
        int temp=st.top();
        st.pop();
        reverse(st);
        insert(st,temp);
  }        
        
    void reverseStack(stack<int> &st) {
        // code here
        reverse(st);
    }
};