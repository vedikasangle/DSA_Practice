#include<iostream>
using namespace std;

int main(){
    int trows;
    cin>>trows;
    cout<<"1"<<endl;
    int rowno = 2; 
    
    while(rowno<=trows){

        // while(rowno == 1 and rowno == 2){
        //     break;
        // }
        int hashc = 1 ;
        cout<<rowno<<'\t';
        while(hashc<=rowno-2){
            cout<<"0"<<'\t';
            hashc = hashc + 1 ;
        }
        cout<<rowno;
        cout<<endl;
        rowno = rowno +1;



        
            // if(rowno==1){
            //     break;
            // }
            // else{
            //     cout<<rowno;
            //     cout<<endl;
            //     rowno = rowno +1;
            // }
        

    // cout<<endl;
    // rowno = rowno +1;
    }








    return 0;
}