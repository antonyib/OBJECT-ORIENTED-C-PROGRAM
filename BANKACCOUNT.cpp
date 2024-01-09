#include <iostream>
using namespace std;
class BankAccount {
private:
   int accountNumber;
   double balance;
public:
   BankAccount(int accNum, double initialBalance = 0.0) {
       accountNumber = accNum;
       balance = initialBalance;
       cout << "Account created with account number " << accountNumber << endl;
   }
    BankAccount() {
       cout << "Account " << accountNumber << " is being destroyed." << endl;
   }
   void deposit(double amount) {
       balance += amount;
       cout << "Deposited " << amount << ". New balance: " << balance << endl;
   }
   void withdraw(double amount) {
       if (balance >= amount) {
           balance -= amount;
           cout << "Withdrew " << amount << ". Remaining balance: " << balance << endl;
       } else {
           cout << "Insufficient balance." << endl;
       }
   }
   void displayAccountInfo() {
       cout << "Account Number: " << accountNumber << endl;
       cout << "Balance: " << balance << endl;
   }
};
int main() {
   int accNum;
   double initialBalance;
    cout << "Enter account number: ";
   cin >> accNum;
    cout << "Enter initial balance (optional): ";
   cin >> initialBalance;
    BankAccount account(accNum, initialBalance); 
   account.deposit(500);
   account.withdraw(200);
   account.displayAccountInfo();

   return 0;
}