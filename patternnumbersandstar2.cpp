#include<iostream>
using namespace std ; 

int main(){

    int trows;
    cin>>trows;//7


    int rowno = 1 ; 
    
        while(rowno<=trows){//1<=7 2<=7
        int hashc = 1 ; 
        int starc = 1 ;
        int numbercount = 1 ;
        while(hashc<=rowno){//1<=2 2<=2 3<=2->no
        cout<<numbercount;//##
        hashc = hashc + 1;
        numbercount = numbercount + 1; 
        }//hashc = 2
        while(starc<=trows-rowno){//1<=6 2<=6 3<=6 4<=6 5<=6 6<=6 7<=6 -->no
        cout<<"*";//******
        starc = starc + 1;
        }//starc = 7 ;
        cout<<endl;
        rowno = rowno + 1 ;//2
    }
    

    return 0 ; 
}