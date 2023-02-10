#include<iostream>
using namespace std;

int main(){

    int trows;
    cin>>trows;//5

    int rowno = 1 ;
    // int i = 1 ; 
    // int sqaurenoprint = i*i ; 
    while(rowno<=trows){//1<=5 2<=5
    int squarenocount = 1 ;
    int starc = 1 ;
    
    
    while(starc<=rowno){//1<=5 2<=5
        int squarevalue = squarenocount*squarenocount ;
        cout<<squarevalue<<" ";//1 
        starc = starc + 1;//2
        squarenocount = squarenocount  + 1 ;//2
    }
    cout<<endl;
    rowno = rowno + 1 ; 
}

    return 0 ;
}