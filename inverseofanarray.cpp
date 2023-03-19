#include<iostream>
using namespace std ;

int main(){  
    int n ;
    cin>>n ; //5

    int arr1[1000];

    for(int p = 0 ; p<=n-1 ; p++){
        cin>>arr1[p];
    }

    int arr2[1000];

    int i = n-1 ; //4
    // arr1[i]->3 --> arr2[arr1[i]] = i
    
    //loop
    while(i>=0){
    arr2[arr1[i]] = i;
    i--;
    }

    for(int p = 0 ; p<=n-1 ; p++){
        cout<<arr2[p]<<" ";
    }
    
    return 0 ;


}
