#include<iostream>
#include<stack>
using namespace std;
void findprev(int arr[],int size){
    stack<int>st;
    st.push(-1);
    
    for(int i=0;i<size;i++){
        int curr = arr[i];
        while(!st.empty()&&st.top()>=curr){
            st.pop();
        }
        
        arr[i] = st.top();
        
        st.push(curr);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10] =  {8,4,6,2,3};
    int size = 5;
    
    findprev(arr,size);
}