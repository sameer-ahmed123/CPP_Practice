/*This programming example demonstrates a program that calculates a customer’s bill for a
local cable company. There are two types of customers: residential and business. There
are two rates for calculating a cable bill: one for residential customers and one for
business customers.

For residential customers, the following rates apply:
 Bill processing fee: $4.50
 Basic service fee: $20.50
 Premium channels: $7.50 per channel.

For business customers, the following rates apply:
 Bill processing fee: $15.00
 Basic service fee: $75.00 for first 10 connections, $5.00 for each additional
connection
 Premium channels: $50.00 per channel for any number of connections

The program should ask the user for an account number (an integer) and a customer code.
Assume that R or r stands for a residential customer, and B or b stands for a business
customer.

Program Input
The customer’s account number, customer code, number of premium channels to which
the user subscribes, and, in the case of business customers, number of basic service
connections.

Program Output
Customer’s account number and the billing amount.*/


#include <iostream>
using namespace std;

int main(){
    const float res_bill_process = 4.50;
    const float res_basic_service = 20.50;
    const float res_premium_channel = 7.50;

    const float busi_bill_process = 15;
    const float busi_basic_service = 75;
    const float busi_basic_additional = 5;
    const float busi_premium_channel = 50.00;

    int account_number;
    char customer_type;
    int channel_numbers;
    int num;
    float amount_due;
    cout << "Enter Your Account number : \n";
    cin >> account_number;
    cout << "Are you Residential or Bussiness customer?: B or R \n";
    cin >> customer_type;

    switch (customer_type)
    {
    case 'r':
    case 'R':
        cout << "Enter Number of Premium Channels\n";
        cin >> channel_numbers;
        amount_due = res_bill_process + res_basic_service + channel_numbers * res_premium_channel;
        cout << "Ammount Due is :" << amount_due;

        break;
    case 'b':
    case 'B':
        cout << "Enter Number of Premium Channels\n";
        cin >> channel_numbers;
        cout << "enter Number of  Connection that you want:\n";
        cin >> num;
        if (num <=10){
            amount_due = busi_bill_process + busi_basic_service + channel_numbers* busi_premium_channel;
            cout << "Ammount  Due is: " <<amount_due;
        }
        else{
            amount_due = busi_bill_process + busi_basic_service + (num-10)*busi_basic_additional + channel_numbers* busi_premium_channel;
            cout << "Ammount due is "  << amount_due;
        }
        break;
    default:
        cout << "Invalid Customer Type !, Please Select A valid Choise.";
        break;
    }

    cout << "your account Number :" << account_number;

}