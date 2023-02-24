#include<iostream>
using namespace std ;

//wrong : int maxvalue(int arr[n]){

int maxvalue(int arr[], int n ){//3 4 5 6

    int i = 0;
    int maxvalue = arr[i]; //max value = 3

    //loop
    while(i<=n-1){
    if(arr[i]>maxvalue){ //3>3 ->no 4>3
        maxvalue =  arr[i] ; //4
    }
    else{
        i++;
    }
    }
    return maxvalue;
}


int main (){
    int n ;
    cin>>n ;

    int arr[n];

    for(int i = 0 ; i <=n-1 ; i++){
        cin>>arr[i];
    }

    cout<<maxvalue(arr,n);



    return 0 ;
}