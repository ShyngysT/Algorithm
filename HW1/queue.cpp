#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1000;

struct queue{
       int m_size;
       int m_start;
       int m_elems[MAX_SIZE];

       queue() {
       m_start = 0;
       m_size = 0;

       }
       void push(int d){
       // m_start - > 1
       // m_start  + 1 - > 2
       m_elems[(m_start + m_size) % MAX_SIZE] = d;
       m_size++;
       cout << "OK" << endl;
       }

       int pop() {
        int ans = m_elems[m_start];
        m_start++;
        m_start %= MAX_SIZE;
        return ans;
       }

       int front() {
         return m_elems[m_start];
       }

       int size() {
       return m_size;
       }

       void clear() {
       m_start = 0;
       m_size = 0;
       }

       };



int main()
{

}
