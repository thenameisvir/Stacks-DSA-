#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
bool is_valid(string str){
    stack<char>st;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='('||ch=='['||ch=='{'){
            st.push(ch);
        }
        else{
        if(ch=='}'&&st.top()=='}'){
            st.pop();
        }
        else if(ch==']'&&st.top()==']'){
            st.pop();
        }
        else if(ch==')'&&st.top()==')'){
            st.pop();
        }
        else{
            return false;
        }
        }
    }
    if(st.size()==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
 string str = "(){()}[]";
 if(is_valid){
     cout<<"It is valid parenthesis string ";
 }
 else{
     cout<<"No it is not: "<<endl;
 }
 
}