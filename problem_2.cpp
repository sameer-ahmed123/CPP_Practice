# include <iostream>
using namespace std;

int main(){
    int num1, num2,num3,num4,num5, highest;
    highest = 0;
    cout << "enter num1";
    cin >> num1;
    cout << "enter num2";
    cin >> num2;
    cout << "enter num3";
    cin >> num3;
    cout << "enter num4";
    cin >> num4;
    cout << "enter num5";
    cin >> num5;


    if (num1 > num2){
        highest = num1;
        cout << num1 << "is Gretest";
    }
    else if(num2 > num3){
        highest = num2;
        cout << num2 << "is Gretest";
    }
    else if(num3 > num4){
        highest = num3;
        cout << num3 << "is Gretest";
    }
    else if(num4 > num5){
        highest = num4;
        cout << num4 << "is Gretest";
    }
    else {
        cout << num5 << "is grates";
    }
    return 0;
}