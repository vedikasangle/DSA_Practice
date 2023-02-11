#include<iostream>
using namespace std ; 

int main(){
    int trows; 
    cin>>trows;//5

    int rowno = 1;
    while(rowno<=(trows+1)/2){//1<=3  || 2<=3 || 3<=3 || 4<=3 -->no
    int spc = 1 ;
    int starc = 1;  
    while(spc<=((trows+1)/2)-rowno){//1<=2 2<=2 3<=2 -> no || 1<=1 2<=1 ->no || 1<=0 -> no 
        cout<<"        ";//spc spc || spc || nospc
        spc = spc + 1 ;
    }
    while(starc<=(2*rowno-1)){//1<=1 2<=1 -> no || 1<=3 2<=3 3<=3 4<=3 -> no || 1<=5 2<=5 3<=5 4<=5 5<=5 6<=5 ->no 
        cout<<"*"<<'\t';//* || *** || *****
        starc = starc + 1 ;
    }
      cout<<endl;
    rowno = rowno + 1 ;
    }

    //till here row no == 4 ;

    int rowno2 = 1; 

    while(rowno2<=(trows-1)/2){
        int spc = 1 ;
        int starc = 1 ; 
        while(spc<=rowno2){
        cout<<"        ";
        spc = spc + 1 ;
        }
        while(starc<=trows-2*rowno2){
        cout<<"*"<<'\t';
        starc= starc + 1 ;
        }
        cout<<endl;
        rowno2 = rowno2 + 1 ;
    }

    return 0 ; 
}