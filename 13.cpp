#include <iostream> 
using namespace std;

class BankAccount { 
  private:
  string name; 
  int accNo; 
  float balance;


public:
// Constructor
BankAccount(string n, int a, float b) { 
  name = n;
  accNo = a; 
  balance = b;
}

  void deposit(float amount) { 
    balance += amount;
    cout << "Amount Deposited Successfully \n";

}

  void withdraw(float amount) { 
    if (amount > balance) {
  cout << "Insufficient Balance \n";
  } else {
  balance -= amount;
  cout << "Amount Withdrawn Successfully \n";
  }
}
  void display() {
  cout<<"\n----- Account Details	";
  cout<<"\nName: " << name;
  cout<<"\nAccount No: " << accNo;
  cout<<"\nBalance: " << balance << endl;
  }
};

int main() {
string name; 
int accNo; 
float balance;
cout << "Enter Name: "; 
  cin >> name;
cout << "Enter Account Number: "; 
  cin >> accNo;
cout << "Enter Initial Balance: "; 
  cin >> balance;


BankAccount acc(name, accNo, balance); 
  int choice;
float amount; 
  do {
cout<<"\n===== BANK MENU =====";
cout<<"\n1. Deposit";
cout<<"\n2. Withdraw";
cout<<"\n3. Display Account";
cout << "\n4. Exit";
cout << "\nEnter choice: "; 
cin >> choice;


switch(choice) { 
  case 1:
  cout << "Enter amount to deposit: "; 
  cin >> amount;
  acc.deposit(amount); 
  break;
  
case 2:
cout << "Enter amount to withdraw: "; 
cin >> amount;
acc.withdraw(amount); 
break;
  
case 3:
acc.display(); 
break;
  
case 4:
cout << "Exiting... \n";
break;

default:
cout << "Invalid Choice!\n";
}

} while(choice != 4);

return 0;
}
