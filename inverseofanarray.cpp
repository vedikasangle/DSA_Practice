#include<iostream>
using namespace std ;

// void inverseofanarray(int arr[1000],int n,int i){
//     //base case
//     if(i==n){//0==5 -> no ; 1==5 -->no 
//     // cout<<arr;
//         return ; 
//     } 
    
//     //rec case 
//     // int i = 0 ;//0
//     int ele = arr[i];//holding the element on first element ; //ele = arr[0] ==> ele= 0 //ele = arr[1] ==> ele = 2 
//     arr[ele] = i ; //arr[0] = 0 //arr[2] = 1 
//     inverseofanarray(arr,n,i+1);
//     cout<<arr[ele];
// }

int main(){
    int n ; 
    cin>>n ; 
    
    int arr[1000];

    for(int i = 0 ; i<=n-1 ; i ++){
        cin>>arr[i];
    }//0 2 4 1 3 

    // inverseofanarray(arr,n,0);
    // int k = 0 ; 
    int j = 0 ;
    int ans ; 

    int arr2[1000];

   

    // for(int j= 0 ; j<=n-1 ;  j++){
        // ans =  arr[arr[j]];//ans = 0 ; ans = 4
        // cout<<ans; //0 
        // j = ans; //arr[arr[j]] => arr[0] = 0;
        int i = 0 ;
        arr2[j] = arr[i] ;//arr2[0] = 0 ;arr2[1] = 2 
        arr2[arr[i]] = i; a
        cout<< arr2[arr[i]] ;
        i++;
        j++;
    // }

    // while(i<=n-1){
    // int ele = arr[i];//holding the element on first element ; //ele = arr[0] ==> ele= 0 //ele = arr[1] ==> ele = 2 
    // i = arr[ele] ;
    // cout<<i;
    // i++;
    // }

    //0 2 4 1 3 ;i=1 arr[i] = 2
    //0 3 1 4 2 
   

    return 0 ;


}