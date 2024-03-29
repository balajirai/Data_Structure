// sort a stack without using extra stack (recursion)

#include <bits/stdc++.h>
using namespace std;

void sortedInsertion(stack<int> &st, int element) {
    if (st.empty() || st.top() < element) {
        st.push(element);
        return;
    }

    int top_element = st.top();
    st.pop();

    // recursive call
    sortedInsertion(st, element);

    // inseting the poped element
    st.push(top_element);
}

void sortStack(stack<int> &st) {
    // base case
    if (st.empty()) return;

    int element = st.top();
    st.pop();

    // recursive call
    sortStack(st);

    // inset the poped element in sorted stack
    sortedInsertion(st, element);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(2);
    st.push(-2);
    st.push(11);

    // sort stack
    sortStack(st);
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    

return 0;
}