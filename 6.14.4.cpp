// 6.14.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
#include <cmath>
using std::cin;
using std::setw;

int main()
{
    int Downpayment = 1000;
    
    
     float principal; 
     float rate;
     
     float a, b, c, d, e, f, monthly, payment;
     cout << "Price of the car: ";
         cin >> principal;
         cout << "Enter desired rate in percent decimal form: ";
         cin >> rate;
         cout << " How many years in month format:\n";
         cin >> monthly;   
         a = principal - Downpayment;
         b = rate / 12;
         c = b * a;
         d = (1 / (1 + (rate / 12)));
         
         e = (1 - d) * c;
         f = e * pow(e, d);
         payment = c / f;
         
         cout << "total owed for month:\n";
         cout <<setw(5) << payment;
         
         

        
  
}

