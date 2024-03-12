#include<iostream>
#include<stack>
using namespace std;
void findnearest(int arr[],int size){
    stack<int>st;
    st.push(-1);
    
    for(int i=size-1;i>=0;i--){
        int curr = arr[i];
        
        while(st.top()>=curr&&!st.empty()){
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
    int arr[5] = {8,4,6,2,3};
    int size = 5;
    
    findnearest(arr,size);
    
}