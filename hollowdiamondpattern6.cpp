#include<iostream>
using namespace std;


int main(){
    int trows ; 
    cin>>trows ; 

   


  
    //first line 
    int starc1 = 0 ; 
    while(starc1<=trows){
        cout<<"*";
        starc1 = starc1 + 1 ;
    }
    cout<<endl;

    int rowno= 1 ; 

    //middle part 
    while(rowno<=trows){


        rowno = rowno + 1 ; 
    }







    //last line
    int starc2 = 0 ; 
    while(starc2<=trows){
        cout<<"*";
        starc2 = starc2 + 1 ;
    }
    
  

    return 0;
}