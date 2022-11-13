#include <iostream>
using namespace std;

int main(){
    int number;
    cout <<"enter a number";
    cin >> number;

    if (number > 0){
        cout << "number is positive";
    }
    else if(number < 0){
        cout << "number is nagative";
    }
    else if (number == 0){
        cout << "number is zero";
    }

}