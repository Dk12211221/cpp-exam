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

    double getBalance() {
        return balance;
    }

   
    friend double operator+(BankAccount& a1, BankAccount& a2) {
        return a1.getBalance() + a2.getBalance();
    }
};

int main() {
    BankAccount account1("123456", "Darshan", 5000);
    BankAccount account2("789012", "Darshan2", 3000);

    cout << "Total balance: " << account1 + account2 << endl;

    return 0;
}

