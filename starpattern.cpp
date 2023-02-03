#include<iostream>
using namespace std ; 

int main(){
    int trows;
    cin>>trows;

    int rowno = 1 ;

    while(rowno<=trows){
    int spc = 0 ; 
    while(spc<=trows-rowno){
        cout<<"   ";
        spc = spc + 1 ;
    }
    int star = 0 ; 
    while(star<rowno){
        cout<<" * ";
        star = star + 1;
    }
    cout<<endl;
    rowno = rowno +1 ;
    }

    return 0 ; 

}