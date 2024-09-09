//
//  main.cpp
//  tax.cpp
//
//  Created by Samuel Tsogbe on 9/8/24.
//

#include <iostream>
using namespace std;

int main(){
    int storeSales = 95000;
    double estateTaxRate = 0.04;
    double countyTaxRate = 0.02;
    
    
    double estateTax = storeSales * estateTaxRate;
    double countyTax = storeSales * countyTaxRate;
    double salesTax = estateTax + countyTax;

    cout << "Your store sales is : $" << storeSales << endl;
    cout << "Your Estate tax owed is : $" << estateTax << endl;
    cout << "Your County tax owed is : $" << countyTax << endl;
    cout << "Your Total sales tax owed is : $" << salesTax << endl;
    

    
    
    
    
    
    
    
}
