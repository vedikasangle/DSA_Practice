#include<iostream>
using namespace std;
int main(){

    int n ; 
    cin>>n ;//5 

    int arr[100000];

    for(int i = 0 ; i<=n-1 ; i++){
        cin>>arr[i];
    }//1 1 2 2 3 
    
    int j = 0 ; 
    int k = j + 1;//1
    int ans = 0 ; 
     ans = (arr[j]^arr[k]);
    while(k<=n-1){//1<=4 2<=4 
   //0 
    ans = ans^arr[k];
    j++;//1
    k++;//2
    }
    cout<<ans<<endl;
    
    
    
    return 0;
}