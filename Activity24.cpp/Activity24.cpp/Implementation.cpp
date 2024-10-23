#include "Header.h"
#include <iostream>
using namespace std;


//function to hger detials

Customer getCustomerDetails (){
    Customer cust;
    
    // aask user for the input
    
    cout << "Enter Customer ID: ";
    cin >> cust.id;

    
    cout << "Enter  Cusomer Name: ";
    getline(cin , cust.name);
    
    cout << "Enter  Cusomer Emails: ";
    getline(cin , cust.email);
    
    return cust;
}

void printCustomerDetails(const Customer &cust){
    cout << "Customer ID: " << cust.id << endl;
    cout << "Customer Name: " << cust.name << endl;
    cout << "Customer Email: " << cust.email<< endl;
}
