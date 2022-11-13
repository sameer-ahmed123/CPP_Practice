/*A box of cookies can hold 24 cookies, and a container can hold 75 boxes of cookies.
Write a program that prompts the user to enter the total number of cookies, the number of
cookies in a box, and the number of cookie boxes in a container. The program then
outputs the number of boxes and the number of containers to ship the cookies. Note that
each box must contain the specified number of cookies, and each container must contain
the specified number of boxes. If the last box of cookies contains less than the number of
specified cookies, you can discard it and output the number of leftover cookies. Similarly,
if the last container contains less than the number of specified boxes, you can discard it
and output the number of leftover boxes.*/


#include <iostream>
using namespace std;
int main()
{
int cookies, boxes,extraCookies, containers, extraBoxes;

cout<< "Please enter the total number of cookies:";
cin >> cookies;
cout<< "Please enter the total number of cookies in a box:";
cin >> boxes;
cout<< "Please enter the total number of Box contained in a container :";
cin >> containers;
cout<< "\nThe total number of cookies is:"<< cookies<< endl;

boxes = cookies / boxes; 
cout << "boxes needed = " << boxes << endl; // number of cookie ik box me 
extraCookies = cookies % boxes; // number of extra cookies agar specified number se less cookies han
containers = boxes / containers;
cout << "containers needed = " << containers << endl; // number of box ik container me
extraBoxes = boxes % containers;
cout << "leftover cookies = " << extraCookies << endl; // woh box which were not filling containers to the brim.


// if (boxes >= 0){
//     cout << "boxes needed = " << boxes << endl;
// }if (containers >= 0){
//     cout << "containers needed = " << containers << endl;
// }if (extraBoxes >= 0){
//     cout << "leftover boxes = " << extraBoxes << endl;
// }if (extraCookies >= 0){
//     cout << "leftover cookies = " << extraCookies << endl;

// }
return 0;
}