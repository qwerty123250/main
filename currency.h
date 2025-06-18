#pragma once
using namespace std;
#include <string>
#include <map>
class CurrencyConverter {
    map<string, double>
    rates;
    public:
    CurrencyConverter();
    double convert(double amount, const string& from, const string& to)const;
    string getCurrencyCode(int coice)const;
};
