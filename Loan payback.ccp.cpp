#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    double loan_amount = 0.0;
    double annual_rate_percent = 0.0;
    int number_of_payments = 0;
    std::cout << "Enter the loan amount: $";
    std::cin >> loan_amount;
    std::cout << "Enter the annual interest rate: ";
    std::cin >> annual_rate_percentage;
    std::cout << "Enter the number of monthly payments: ";
    std::cin >> number_of_payments;
    double monthly_rate = (annual_rate_percent / 100.0) / 12.0;
    double power_factor = std::pow(1.0 + monthly_rate, number_of_payments);
    double monthly_payment = ((monthly_rate * power_factor) / (power_factor - 1.0)) * loan_amount;
    double amount_paid_back = monthly_payment * number_of_payments;
    double interest_paid = amount_paid_back - loan_amount;
    double monthly_rate_percent = monthly_rate * 100.0;
    std::cout << "\n----------------------------------------\n";
    std::cout << "Loan Payment Report\n";
    std::cout << "----------------------------------------\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left << std::setw(26) << "Loan Amount:" 
              << "$ " << std::right << std::setw(8) << loan_amount << "\n";
    std::cout << std::left << std::setw(26) << "Monthly Interest Rate:" 
              << std::right << std::setw(10) << monthly_rate_percent << "%\n";
    std::cout << std::left << std::setw(26) << "Number of Payments:" 
              << std::right << std::setw(10) << number_of_payments << "\n";
    std::cout << std::left << std::setw(26) << "Monthly Payment:" 
              << "$ " << std::right << std::setw(8) << monthly_payment << "\n";
    std::cout << std::left << std::setw(26) << "Amount Paid Back:" 
              << "$ " << std::right << std::setw(8) << amount_paid_back << "\n";
    std::cout << std::left << std::setw(26) << "Interest Paid:" 
              << "$ " << std::right << std::setw(8) << interest_paid << "\n";
    std::cout << "----------------------------------------\n";
   return 0;}
