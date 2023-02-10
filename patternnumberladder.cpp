#include <iostream>
using namespace std;

int main()
{
    int trows;
    cin >> trows;//4 

    //what is starc exactly doing???  ==>catching the next place to keep number in it i guess 


    int rowno = 1;
    int numbercount = 1;
    while (rowno <= trows){//1<=4 2<=4
        int starc = 1;
        while (starc <= rowno){//1<=1 1<=2
            cout << numbercount<<'\t';//1 //2
            starc = starc + 1;//2 3
            numbercount = numbercount + 1 ;//2 //3

        }
        cout << endl;
        rowno = rowno + 1;
    }

    return 0;
}