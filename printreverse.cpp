#include<iostream>
using namespace std ;

int main(){

    int n ; 
    cin>>n ;

    int remainno = n ;
    while(remainno>0){
    int rem = remainno%10;
    cout<<rem;
    remainno = remainno/10;
    }

    return 0 ;
}


 // int rem = 0; 
    
    // while(n<=1000000000){
    //     int rem = n%10;
    //     cout<<rem;
    //     rem = rem ++;
    // }
    
    // int i = 1;//543 ->345
    // int rem ;
    // while(i<1000000000){//10<1000 100<1000
    // rem = n%i; //543%10 ==>3 5
    // cout<<rem;
    // rem = n/10;//543/10 ==>54
    // i = i*10;//10*10 = 100 100*10 =1000
    // }