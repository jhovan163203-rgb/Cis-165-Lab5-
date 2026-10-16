#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double principal = 0.0;
    double annual_rate_percent = 0.0;
    double times_compounded = 0.0;
    std::cout << "Enter the principal balance: $";
    std::cin >> principal;
    std::cout << "Enter the annual interest rate (e.g., 4.25 for 4.25%): ";
    std::cin >> annual_rate_percent;
    std::cout << "Enter the number of times interest is compounded per year: ";
    std::cin >> times_compounded;
    double rate = annual_rate_percent / 100.0;
    double amount = principal * std::pow(1.0 + (rate / times_compounded), times_compounded);
    double interest_earned = amount - principal;
       std::cout << "\n----------------------------------------\n";
    std::cout << "Compound Interest Report\n";
    std::cout << "----------------------------------------\n";
    std::cout << std::fixed << std::setprecision(2);
        std::cout << std::left << std::setw(26) << "Interest Rate:" 
              << std::right << std::setw(10) << annual_rate_percent << "%\n";
    std::cout << std::left << std::setw(26) << "Times Compounded:" 
              << std::right << std::setw(10) << static_cast<int>(times_compounded) << "\n";
    std::cout << std::left << std::setw(26) << "Principal:" 
              << "$ " << std::right << std::setw(8) << principal << "\n";
    std::cout << std::left << std::setw(26) << "Interest:" 
              << "$ " << std::right << std::setw(8) << interest_earned << "\n";
    std::cout << std::left << std::setw(26) << "Amount in Savings:" 
              << "$ " << std::right << std::setw(8) << amount << "\n";
    std::cout << "----------------------------------------\n";

    return 0;}
