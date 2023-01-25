#include <iostream>
using namespace std;

int main(){
    int trows;
    cin>>trows;
    
    int rowno = 1 ;
    // int spc = 1 ; 

    while(rowno<=trows){
    //for one row===========>
    int i = 1 ;  //initialisation   --i shows loop kitni baar chalega
    int spc = 1 ; 
    while(i<=rowno){
        // int spc = 1 ; 
        cout<<spc<<" ";
        spc= spc + 1 ; 
        i = i+1 ; //updation  
    }
    cout<<endl;
    rowno = rowno + 1;
    //for one row============>    
    }

    return 0 ;
}