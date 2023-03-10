#include<iostream>
using namespace std;


int main(){
    int arr1[100000];
    int n ; 
    cin>>n ; 
    
    int arr2[100000];
    int m ; 
    cin>>m;

      
    for(int i = 0 ; i<=n-1;i++){
        cin>>arr1[i];
    }

    for(int j = 0 ; j<=m-1 ; j++){
        cin>>arr2[j];
    }


    // for(int i = 0 ; i<=n-1;i++){
    //     cout<<arr1[i]<<" ";
    // }

    // cout<<endl;


    // for(int j = 0 ; j<=m-1 ; j++){
    //     cout<<arr2[j]<<" ";
    // }

    // //n = 3 , m = 3 
    
    

    
    // while(q<m){//0<4 and 2<5 
    // int p = 0 ;
    // int q = 0 ;  
    // if(arr1[p]==arr2[q]){//arr1[0] == arr2[2] -> no  
    //     cout<<arr2[q];//
    //     q++;
    // }
    //    p++;
    // //    q++;
    //     //2
    //     // p=0;
    // }



    int p = 0 ;
    while(p<=n-1){
    int q = 0 ; 
    while(q<=m-1){
    if(arr1[p]==arr2[q]){//arr1[0] == arr2[2] -> no  
        cout<<arr2[q];//
        q++;
    }
    }
    p++;
    }


    
    return 0;
}