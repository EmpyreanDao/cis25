//
//  Header.h
//  Activity24.cpp
//
//  Created by Samuel Tsogbe on 10/21/24.
//

#ifndef Header_h
#define Header_h


#include <string>
using namespace std;

struct Customer{
    int id;
    string name;
    string email;
};
Customer getCustomerDetails();
void printCustomerDetails(const Customer &cust);


#endif /* Header_h */
