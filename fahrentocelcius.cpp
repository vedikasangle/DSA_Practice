#include<iostream>
using namespace std ; 


int main(){

    //0 , 300, 20 
    
    int init, final, step;
    cout<<"Enter the initial Fahrenheit Value : "<<endl;
    cin>>init;

    cout<<"Enter the Final Fahrenhiet Value : "<<endl;
    cin>>final;

    cout<<"Enter the step number : "<<endl;;
    cin>>step; 

   
    int cel,fah;
 
    fah = init; //0
    while(fah<=final){//0<=300 20<=300 **************imp step***************
    cel = (5.0/9)*(fah-32); //-17 -6
    cout<<fah<<'\t'<<cel<<endl; //0  -17 
    fah = fah + step ; //
    }




    return 0 ; 
}