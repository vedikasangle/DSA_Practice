#include<iostream>
using namespace std ; 

int main(){
    int trows;
    cin>>trows;

    int rowno = 1; 
     
    while(rowno<=trows){
    int starc = 1 ;
    while(starc<=rowno){
        cout<<"*";
        starc = starc + 1; 
    }
    cout<<endl;
    rowno = rowno + 1 ; 
    }

    return 0 ; 
}