#include <iostream>
#include<stack>
#include<string.h>
using namespace std;
int main() {
  
  stack<int>st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);
  // st.push(70);

  int size = st.size()/2;
  int num = 0;
  int number = 0;
  while(num<=size){
    num++;
    number = st.top();
    st.pop();
  }
  cout<<number;






  return 0;
}