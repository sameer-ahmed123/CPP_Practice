#include <iostream>
using namespace std;

int main(){
    int amnt, r1000,r500,r100,r50,r20,r10,r5,r1;
    cout << "enter amount";
    cin >> amnt;
    r1000 = amnt/1000;
    amnt =amnt%1000;
    r500 = amnt/500;
    amnt = amnt %500;
    r100 = amnt/100;
    amnt = amnt%100;
    r50 = amnt/50;
    amnt = amnt%50;
    r20 = amnt/20;
    amnt =amnt%20;
    r10 = amnt/10;
    amnt = amnt%10;
    r5 = amnt/5;
    amnt= amnt%5;
    r1 = amnt/1;
    amnt = amnt%1;

    cout << "r1000 = " << r1000 << endl;
    cout << "r500="<<r500<<endl;
    cout << "r100="<<r100<<endl;
    cout << "r50="<<r50<<endl;
    cout << "r20="<<r20<<endl;
    cout << "r10="<<r10<<endl;
    cout << "r5="<<r5<<endl;
    cout << "r1="<<r1<<endl;
}