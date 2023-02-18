#include<iostream>
using namespace std ;

int main(){
    int n1, n2 ; 
    cin>>n1>>n2;//15 21

    int num = 2 ;
    // int gcdcount = 0;
    int gcd ;
    while(num<1000000000){//
        if(n1%num == 0 and n2%num == 0){ 
        gcd = num;//2
        // gcdcount = gcdcount + 1 ;
        }
        num = num + 1;
    }
    cout<<gcd<<endl;
    // cout<<gcdcount;

    // num = num + 1;//3
    // }
  
    return 0 ;
}