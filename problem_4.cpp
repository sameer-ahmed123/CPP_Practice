// check if year is leap year or not 


#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "enter the year";
    cin >> year;

    if (year %400 == 0){
        cout<< "is leap year";
    }
    else if(year %100 == 0){
        cout << "is not leap year";
    }
    else if (year %4 == 0){
        cout << "is a leap year";
    }
    else{
        cout << "is not a leap year";
    }


    // if (year%400 == 0 && year %100 ==0){
    //     cout << "year is a leap year";
    // }
    // else{
    //     cout <<"is not Leap year";
    // }
}