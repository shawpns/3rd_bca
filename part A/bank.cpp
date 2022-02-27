// Write A Program To Perform Bank Transactions

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Bank
{
private:
  long long Accno;
  string AccName;
  char AccType;
  float BalanceAmt;

public:
  void getAccountDetails()
  {
    cout << "\nPlease enter account details:" << endl;
    cout << "\nAccount Number: ";
    cin >> Accno;
    cout << "Account Holder Name: ";
    cin >> AccName;
    cout << "AccountType(c-Current,s-Savings): ";
    cin >> AccType;
    cout << "Balance Amount: ";
    cin >> BalanceAmt;
  }
  void printAccountDetails()
  {
    cout << "\nAccount holder details:" << endl;
    cout << "Account Number:" << Accno << endl;
    cout << "Name:" << AccName << endl;
    cout << "Account type:" << AccType << endl;
    cout << "Balance Amount:" << BalanceAmt << endl;
  }
  void doTransaction()
  {
    char type;
    float tamt;
    cout << "\nTransaction Process" << endl;
    cout << "Enter transaction amount: ";
    cin >> tamt;
    cout << "Mention Transaction type(W-withdrawl,D-deposite):";
    cin >> type;
    if (type == 'W' || type == 'w')
    {
      if (BalanceAmt - tamt > 0)
      {
        BalanceAmt = BalanceAmt - tamt;
        cout << "Transaction completed" << endl;
        cout << "Your current Balance is: " << BalanceAmt << endl;
      }
      else
      {
        cout << "Sorry! Insufficient funds in your account." << endl;
      }
    }
    else if (type == 'D' || type == 'd')
    {
      BalanceAmt = BalanceAmt + tamt;
      cout << "Your current Balance is: " << BalanceAmt << endl;
    }
  }
};

int main()
{
  Bank B;
  B.getAccountDetails();
  cout << "\nAccount Details Before Transaction:" << endl;
  B.printAccountDetails();
  B.doTransaction();
  cout << "\nAccount Details after Transaction:" << endl;
  B.printAccountDetails();
  return 0;
}
