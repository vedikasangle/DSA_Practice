#include<iostream>
using namespace std ;

// 1 2 3 4 5 
// 2 2 3 4 5
// 3 3 3 4 5
// 4 4 4 4 5
// 5 5 5 5 5
int main(){
    int trows;
    cin>>trows;//5

    int rowno = 1 ;
    
    while(rowno<=trows){
    //hash print
    int hashc = 1 ;
    int numberc = 1 ;
    while(hashc<=rowno){
        numberc = rowno;
        cout<<numberc<<" ";
        hashc= hashc + 1; 
    } 
    //star print
    int starc = 1 ; 
    int numberc2 = rowno + 1; 
    while(starc<=trows-rowno){
        cout<<numberc2<<" ";
        starc = starc +1 ;
        numberc2 = numberc2 + 1 ;
    }
    cout<<endl;
    rowno = rowno +1 ;
    }

    
    return 0 ;
}


























    // int rowno = 1 ;
    // int numbercount = 1 ; 
   

    // while(rowno<=trows){//1<=5 2<=5 
    //     int starc = 1 ;
    //     while(starc<=trows){//1<=5 2<=5 3<=5 4<=5 5<=5 6<=5 ->noo
    //         int i = 1;
    //         cout<<numbercount;//*****
    //         starc= starc + 1 ;
    //         numbercount = numbercount + 1 ;
    //     }
    // cout<<endl;
    // rowno = rowno +1;
    // }

