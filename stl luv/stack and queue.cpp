#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack top: " << st.top() << endl;
    st.pop();
    cout << "Stack after pop: " << st.top() << endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Queue order: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
