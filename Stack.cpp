#include <iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout<<"The top of the Stack is - "<<st.top()<<endl;


    while(st.top()!=0)
    {
        st.pop();
        cout<<"After popping the top new is "<<st.top()<<endl;
    }
    return 0;
}
