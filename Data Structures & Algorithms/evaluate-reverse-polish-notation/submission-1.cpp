class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n=tokens.size();
        for(auto i:tokens)
        {
           if(i=="+" || i=="-" || i=="*" || i=="/")
           {
            
               int firstNum=0;
               int secondNum=0;
               if(!st.empty())
               {
                secondNum=st.top();
                st.pop();
               }
                if(!st.empty())
               {
                firstNum=st.top();
                st.pop();
               }
               cout<<firstNum<<" Hello "<<secondNum<<endl;
               if(i=="+"){
                    st.push(firstNum+secondNum);
               }
               else if(i=="-"){
                    st.push(firstNum-secondNum);
               }
               else  if(i=="*"){
                    st.push(firstNum*secondNum);
               }
               else if(i=="/"){
                    st.push(firstNum/secondNum);
               }
           }
           else
           {
            cout<<i<<endl;
             st.push(stoi(i));
           }
        }
        return st.top();
    }
};
