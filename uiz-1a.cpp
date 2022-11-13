#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
    int pictureLength, pictureWidth, pictureSquareInchSize, picturePerimiter, numberOfStars;
    char frameType;
    string frameColour;
    float totalPrice;
    
    //valuescost per inch
    const float FRAME_COLOURING_PRICE = 0.10;
    const float REGULAR_FRAME_PRICE = 0.15;
    const float FANCY_FRAME_PRICE = 0.25;
    
    //values  square inch
    const float CARDBOARD_PRICE = 0.02;
    const float GLASS_PRICE = 0.07;
    
    const float STARS_PRICE = 0.35;
    
    cout << "Please enter the length & width of the picture: ";
    cin >> pictureLength >> pictureWidth;
    pictureSquareInchSize = pictureLength * pictureWidth;
    picturePerimiter = (pictureLength * 2) + (pictureWidth * 2);
    cout << "Please select your frame type (r for regular & f for fancy): ";
    cin >> frameType;
    
    
    switch (frameType) {
        case 'r':
        case 'R':
            totalPrice = picturePerimiter * REGULAR_FRAME_PRICE;
            break;
        case 'f':
        case 'F':
            totalPrice = picturePerimiter * FANCY_FRAME_PRICE;
            break;
        default:
            cout << "You entered an invalid fram type" << endl;
            return 1;
            break;
    }
    
    cout << "Please enter which colour frame you would like (Note: white is default): ";
    cin >> frameColour;
    
    
    if (frameColour != "white" || frameColour != "") {
        totalPrice += FRAME_COLOURING_PRICE * picturePerimiter;
    }
    
    cout << "Please enter the total number of stars you wish to have on your frame: ";
    cin >> numberOfStars;
    
    if (numberOfStars > 0) {
        totalPrice += numberOfStars * STARS_PRICE;
    }
    
 
    totalPrice += (GLASS_PRICE * pictureSquareInchSize) + (CARDBOARD_PRICE * pictureSquareInchSize);
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Your total bill for your frame comes to: $" << totalPrice << endl;
    
    return 0;
}