#include <iostream>
using namespace std;
int main(){
    int angle1, angle2, angle3;
    cout << "Enter the angles";
    cin >> angle1 >> angle2 >> angle3;

    if(angle1 + angle2 + angle3 == 180){
        cout << "The Triangle is Valid";
    }
    else{
        cout << "The Triangle is not Valid";
    }
}


// prperty of triangle  is a+b+c = 180degrees