#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int number, double initialBalance) {
        accountNumber = number;
        balance = initialBalance;
    }

    int getAccountNumber() {  // provides read-only access
        return accountNumber;
    }

    void setAccountNumber(int number) {  // provides write-only access
        accountNumber = number;
    }

    double getBalance() {
        return balance;
    }

    void setBalance(double amount) {
        balance = amount;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            return false;
        }
        balance -= amount;
        return true;
    }
};

int main(){
    BankAccount myAccount(450998203, 3000);

    cout<< "---------- Account Details ---------------"<< endl;

    cout << "\nAccount Number: " << myAccount.getAccountNumber() << endl;  // Outputs 450998203
    cout << "Account Balance: " << myAccount.getBalance() << endl;  // Outputs 3000

    myAccount.setAccountNumber(12345678);
    myAccount.setBalance(8000);

    cout<< "\n----------------------------------"<< endl;
    cout << "\nNew Account Number: " <<myAccount.getAccountNumber() << endl;  // Outputs 12345678
    cout << "New Account Balance: " <<myAccount.getBalance() << endl;  // Outputs 8000
    return 0;
}
