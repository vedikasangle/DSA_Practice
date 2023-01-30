#include<iostream>
using namespace std ;

//for N = 4 ==>
//                         1
//                 2       3       2
//         3       4       5       4       3
// 4       5       6       7       6       5       4
int main(){

    int trows;
    cin>>trows;//4

    int rowno = 1 ; //2

    while(rowno<=trows){//2<=4 ==> yes 

    //for spaces 
    int spc = 0; //1  //2 
    while(spc<trows-rowno){ //0<2 //1 <2 //2<2 ==no ;stop 
        cout<<" "<<'\t';//spc spc 
        spc= spc + 1 ; //1 = 0 + 1 //2 = 1 + 1  
    }

    //for inc nos
    int i = rowno ; //i = 2 3 
    while(i<=((rowno*2-1))){ //2<=3 3<=3 4<=3-no ; stop
        cout<<i<<'\t'; // 2 3 
        i = i + 1 ; //3 4
    }//i =4 

    //for dec nos
    int d = rowno*2 - 2  ;//d = 2*2-2 = 2  || d = 3*2-2 ==> 6-2 =4
    while(d>=rowno){ //4<=2 1<=2 ==no ;stop || 4<=3 
        cout<<d<<'\t'; // 2 
        d = d - 1 ; //1
    }

    cout<<endl;
    rowno = rowno + 1 ; 
    }

    return 0 ; 
}