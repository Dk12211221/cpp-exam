#include<iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string ownerName;
    double balance;

public:
    BankAccount(string accountNumber, string ownerName, double balance) {
        this->accountNumber = accountNumber;
        this->ownerName = ownerName;
        this->balance = balance;
    }

    void credit(double amount) {
        balance += amount;
    }

    void debit(double amount) {
        if(amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account("123456", "Darshan", 5000);
    account.credit(2000);  
    account.debit(1000);   
    cout << "Current balance: " << account.getBalance() << endl;  

    return 0;
}

