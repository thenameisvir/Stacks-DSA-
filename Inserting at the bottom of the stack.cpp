#include <iostream>
#include<stack>
#include<string.h>
using namespace std;
void insertatbottom(stack<int>&st,int element){
  if(st.empty()){
    st.push(element);
    return;
  }

  int temp = st.top();
  st.pop();
  insertatbottom(st,element);
  st.push(temp);
}
int main() {
  
  stack<int>st;
  stack<int>pt;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);
  st.push(70);

  int element = 900;

  insertatbottom(st,element);
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }







  return 0;
}