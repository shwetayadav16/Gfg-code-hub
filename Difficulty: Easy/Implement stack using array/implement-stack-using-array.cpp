class MyStack {
  public:
  
  int oper[100];
  int i=-1;
    void push(int x) {
        // code here
        i++;
        oper[i]=x;
        
    }

    int pop() {
        // // code here
        // if(!st.empty()){
        //     int top=st.top();
        //     st.pop();
        //     return top;
        // }
        
        if(i==-1) return -1;
        
        int ele=oper[i];
        i--;
        return ele;
    }
};