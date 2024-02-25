#include <iostream>
#include<stack>
#include<string.h>
using namespace std;
int main() {
  string str = "Madhur";
  stack<char>st;

  for(int i=0;i<str.length();i++){
    char ch = str[i];
    st.push(ch);
  }
  
  while(!st.empty()){
    cout<<st.top();
    st.pop();
  }



  return 0;
}