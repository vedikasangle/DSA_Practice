#include<iostream>
using namespace std;


int main(){
    int n1; 
    int n2 ; 

    cin>>n1;
    cin>>n2;

    int n = 1 ;
    int count =0 ;
    // int numtoprint = 3*n + 2 ;
    // if(numtoprint%n2==0){
    //         count++;
    //     } 
    //     cout<<count;
    
    while(n<=n1){
    int  numtoprint = 3*n + 2 ;
    if(numtoprint%n2 == 0){
        count++;
    }
    n++;
    }
    // cout<<count<<endl;

     int m = 1; 
    
    // if(numtoprint%n2 !=0 ){
    int totalprint = n1 + count;
    while(m<=totalprint){//1<=10
        int numtoprint = 3*m + 2 ;
        if(numtoprint%n2 != 0){
        cout<<numtoprint<<endl;
    }
     m++;
    }

    // while(n1){
    //     cout<<
    // }

    // cout<<
    


    
    
    return 0;
}