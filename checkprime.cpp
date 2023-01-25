#include<iostream>
using namespace std ;

int main(){

    int num;
    cin>>num;

    int i = 2 ; 
    
    while(i<=num-1){
    if(num%i==0){
        cout<<"Not prime";
        return 0 ; 
    }
    i = i + 1;
    }
    
    if(i=num){
        cout<<"Prime";
    }
    

    return 0 ; 
}