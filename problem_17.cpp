#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    float root1,root2, imaginary;
    float desriminant; 

    cout << "Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ";
    cin >> a >> b >> c;

    //discrimanant find karna pehle
    desriminant = (b * b) -(4*a*c);


    if (desriminant > 0){
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        cout <<"Two distinct and real roots exists:   " << root1 << root2; 
    }
    else if (desriminant == 0){
        root1= -b/(2*a);
        root2= -b/(2*a);
        cout <<"Two eual and real root exits: " << root1 << root2;
    }
    else if(desriminant < 0){
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        imaginary =-desriminant/(2*a); 
        cout << "Two distinct complex roots exists:    " << root1 <<"   " <<imaginary <<"     " << root2 <<" " << imaginary;
    }

}