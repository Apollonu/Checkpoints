#include <iostream>
using namespace std;

double sales;
double commissionRate;
double advPay;

int main()
{
    cout << "Enter the salesperson's monthly sales: ";
        cin >> sales;
        if (sales < 10000) commissionRate = 0.05;
        else if (10000 < sales and sales < 14999) commissionRate = 0.10;
        else if (15000 < sales and sales < 17999) commissionRate = 0.12;
        else if (18000 < sales and sales < 21999) commissionRate = 0.14;
        else if (22000 < sales) commissionRate = 0.16;

    cout << "Enter the salesperon's Advanced Pay: ";
        cin >> advPay;
        double commission = (sales * commissionRate);
        double remainingPay = commission - advPay;

    cout << "\nPay Results\n-----------";
    cout << "\nSales: $" << sales;
    cout << "\nCommision Rate: " << commissionRate;
    cout << "\nCommission: $" << commission;
    cout << "\nAdvanced Pay: $" << advPay;
    cout << "\nRemaining Pay: $" << remainingPay;
}
