//
//  main.cpp
//  classActivity10Salescpp
//
//  Created by Samuel Tsogbe on 9/15/24.
//

#include <iostream>
#include <iomanip> // for formating

int main() {
    double sales;
    double commissionRate;
    double commission;

    //asking for how much
    std::cout << "Enter the total sales amount in dollars: $";
    std::cin >> sales;

    // calculating the amount
    if (sales <= 10000) {
        commissionRate = 0.10; // 10%
    }
    else if (sales <= 15000) {
        commissionRate = 0.15; // 15%
    }
    else {
        commissionRate = 0.20; // 20%
    }

    
    commission = sales * commissionRate;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nSales Amount: $" << sales << std::endl;
    std::cout << "Commission Rate: " << (commissionRate * 100) << "%" << std::endl;
    std::cout << "Commission Earned: $" << commission << std::endl;

    return 0;
}
