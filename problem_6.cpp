#include <iostream>
using namespace std;
int main(){
    int num ;
    cout << "enter a number";
    cin >> num;

    if (num %5 == 0 && num %11 ==0){
        cout << "the number is duvisible by both 5 and 11";
    } 
    else{
        cout << "the number is not divisible by eithe 11 or 5";
    }
}