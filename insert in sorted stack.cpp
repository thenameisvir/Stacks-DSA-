#include <iostream>
#include<stack>
using namespace std;
void insert_in_sorted_stack(stack<int>&st,int element){
if(element>st.top()){
  st.push(element);
  return;
}

int temp = st.top();
st.pop();

insert_in_sorted_stack(st,element);

st.push(temp);
}
int main() {
  stack<int>st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  int element = 31;
  insert_in_sorted_stack(st,element);

  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }



  return 0;
}