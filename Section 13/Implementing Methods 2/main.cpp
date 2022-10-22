#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    
    Account sherman_account;
    sherman_account.set_name("Sherman's Account");
    sherman_account.set_balance(1000.0);
    
    if (sherman_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not allowed" << endl;
        
    if (sherman_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Insufficient funds" << endl;
        
    if (sherman_account.withdraw(1500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Insufficient funds" << endl;    
    
    return 0;
    
}
