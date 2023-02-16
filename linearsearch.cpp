#include<iostream>
using namespace std ; 

int main(){
    int n ; 
    cin>>n ; 
    
    int arr[n];

    for(int i = 0 ; i<=n-1; i++){
        cin>>arr[i];
    }

    int target ; 
    cin>>target;

    int i = 0 ;
    
    while(i<=n-1){
    if(arr[i] == target){
        cout<<i;
        return 0 ; 
    }
    i++;
    }
    
    if(i == n){
        cout<<"-1";
    }
  
  return 0 ;





}
