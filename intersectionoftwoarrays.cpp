#include<iostream>
using namespace std ;

int main(){
    int arr1[100000] ;
    int arr2[100000];
    int n ; 
    cin>>n ; 

    int m ;
    cin>>m;

    for(int l = 0 ; l<=n-1 ; l++){
        cin>>arr1[l];
    }

    for(int k = 0 ; k<=m-1 ; k++){
        cin>>arr2[k];
    }

// 5
// 3 
// 3 4 5 6 7 
// 6 7 8 
// 6 
    //n = 4 and m = 2 
    //j-->m and n --> i 
    int j = 0 ;
    while(j<=m-1){//0<=1 ->yes
          int i = 0 ;
    while(i<=n-1){//0<=3 1<=3
        if(arr2[j]==arr1[i]){//no yes yes 

            cout<<arr2[j]<<" ";//2
            break;//if one element is matched we need not check further 
        }
            i++;//1 2
    }
    j++; //1
    }
    return 0 ; 
}

