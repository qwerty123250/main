#include <iostream>
#include <iomanip>
using namespace std;
void showHeader(){ 
    cout << "===========================" << endl;
    cout << "    Currency Converter      " << endl;
    cout << "===========================" << endl;
}
void showCurrencyList(){
    cout << "1. USD" << endl;
    cout << "2. EUR" << endl;
    cout << "3. GBP" << endl;
    cout << "4. RUB" << endl;
    cout << "5. JPY" << endl; 
}
void showResult(double amount,const string& from, double result,const string& to){
cout << "===========================" << endl;
cout << fixed << setprecision(2);
cout <<amount << " " << from << " = " << result << " " << to << endl;
cout << "===========================" << endl;
}
