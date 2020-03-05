#include <cstdio>
#include <cstring>
#include <stack>
#include <iostream>

using namespace std;
 
stack<int> st;


int main()
{
    
    
   
    stack<int> st;
    while (true) {
        string s;
        cin >> s;
        if (s == "exit") {
            cout << "bye" << endl;
            return 0;
        }
        if (s == "push") {
            int x;
            cin >> x;
            st.push(x);
        }
        if (s == "size") {
            cout << st.size() << endl;
            
        }
        if (s == "pop") {
            cout << st.top() << endl;
           st.pop();
            
        }
        if(s == "clear") {
            st.empty();
            cout << "ok" <<  endl;
        }
        if(s == "back"){
            cout << st.top() << endl;
        }
    }
  
  return 0;
}
