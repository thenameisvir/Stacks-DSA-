#include <iostream>
#include<stack>
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
void reversestack(stack<int>&st){
  if(st.empty()){
    return;
  }

  int temp = st.top();
  st.pop();

  reversestack(st);

  insertatbottom(st,temp);

}
int main() {
  stack<int>st;
  st.push(50);
  st.push(40);
  st.push(30);
  st.push(20);
  st.push(10);

  reversestack(st);

  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  return 0;
}