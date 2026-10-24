#include<iostream>
#include<string>
using namespace std;

class JazzCash
{
private:
    int balance;

public:
    // Constructor
    JazzCash()
    {
        balance = 20000;
    }

    // Main Menu Function
    void showMenu()
    {
        int choice;

        do
        {
            cout << "\n\n\t\tJAZZCASH INTERFACE";
            cout << "\n1. Send Money";
            cout << "\n2. Receive Money";
            cout << "\n3. Mobile Load";
            cout << "\n4. Bill Payment";
            cout << "\n5. Check Balance";
            cout << "\n6. Exit";

            cout << "\n\nEnter Choice: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                    sendMoney();
                    break;

                case 2:
                    receiveMoney();
                    break;

                case 3:
                    mobileLoad();
                    break;

                case 4:
                    billPayment();
                    break;

                case 5:
                    checkBalance();
                    break;

                case 6:
                    cout << "\nThank You for using JazzCash!";
                    break;

                default:
                    cout << "\nInvalid Choice!";
            }

        } while(choice != 6);
    }

    // Transaction Confirmation Function
    bool confirmTransaction()
    {
        int confirm;

        cout << "\n1. Confirm";
        cout << "\n2. Cancel";
        cout << "\nEnter Choice: ";
        cin >> confirm;

        if(confirm == 1)
            return true;
        else if(confirm == 2)
        {
            cout << "\nTransaction Cancelled!";
            return false;
        }
        else
        {
            cout << "\nInvalid Choice!";
            return false;
        }
    }

    // Deduct Money Function
    bool deductMoney(int amount)
    {
        if(amount <= 0)
        {
            cout << "\nInvalid Amount!";
            return false;
        }

        if(amount > balance)
        {
            cout << "\nInsufficient Balance!";
            return false;
        }

        balance -= amount;
        return true;
    }

    // Send Money Function
    void sendMoney()
    {
        int choice, amount;
        string mobileNo, cnic, accountNo, name;

        cout << "\n\nSEND MONEY";
        cout << "\n1. JazzCash";
        cout << "\n2. CNIC";
        cout << "\n3. Bank";
        cout << "\n4. Back";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "\nEnter Mobile Number: ";
            cin >> mobileNo;
        }
        else if(choice == 2)
        {
            cout << "\nEnter CNIC Number: ";
            cin >> cnic;
        }
        else if(choice == 3)
        {
            cout << "\nEnter Account Holder Name: ";
            cin >> name;

            cout << "Enter Account Number: ";
            cin >> accountNo;
        }
        else if(choice == 4)
        {
            return;
        }
        else
        {
            cout << "\nInvalid Choice!";
            return;
        }

        cout << "Enter Amount: ";
        cin >> amount;

        if(confirmTransaction())
        {
            if(deductMoney(amount))
                cout << "\nTransaction Successful!";
        }
    }

    // Receive Money Function
    void receiveMoney()
    {
        int choice, amount;
        string senderNo, accountNo;

        cout << "\n\nRECEIVE MONEY";
        cout << "\n1. Receive JazzCash";
        cout << "\n2. Receive Bank";
        cout << "\n3. Back";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "\nEnter Sender Number: ";
            cin >> senderNo;
        }
        else if(choice == 2)
        {
            cout << "\nEnter Account Number: ";
            cin >> accountNo;
        }
        else if(choice == 3)
        {
            return;
        }
        else
        {
            cout << "\nInvalid Choice!";
            return;
        }

        cout << "Enter Amount: ";
        cin >> amount;

        if(amount <= 0)
        {
            cout << "\nInvalid Amount!";
            return;
        }

        if(confirmTransaction())
        {
            balance += amount;
            cout << "\nMoney Received Successfully!";
        }
    }

    // Mobile Load Function
    void mobileLoad()
    {
        int choice, amount;
        string mobileNo;

        cout << "\n\nMOBILE LOAD";
        cout << "\n1. Jazz";
        cout << "\n2. Zong";
        cout << "\n3. Telenor";
        cout << "\n4. Ufone";
        cout << "\n5. Back";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 5)
            return;

        if(choice < 1 || choice > 4)
        {
            cout << "\nInvalid Choice!";
            return;
        }

        cout << "\nEnter Mobile Number: ";
        cin >> mobileNo;

        cout << "Enter Amount: ";
        cin >> amount;

        if(confirmTransaction())
        {
            if(deductMoney(amount))
                cout << "\nLoad Successful!";
        }
    }

    // Bill Payment Function
    void billPayment()
    {
        int choice, amount;
        string referenceNo;

        cout << "\n\nBILL PAYMENT";
        cout << "\n1. Electricity";
        cout << "\n2. Gas";
        cout << "\n3. Water";
        cout << "\n4. Internet";
        cout << "\n5. Telephone";
        cout << "\n6. Back";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 6)
            return;

        if(choice < 1 || choice > 5)
        {
            cout << "\nInvalid Choice!";
            return;
        }

        cout << "\nEnter Reference Number: ";
        cin >> referenceNo;

        cout << "Enter Amount: ";
        cin >> amount;

        if(confirmTransaction())
        {
            if(deductMoney(amount))
                cout << "\nBill Paid Successfully!";
        }
    }

    // Check Balance Function
    void checkBalance()
    {
        string username, mobileNo;

        cout << "\n\nCHECK BALANCE";
        cout << "\nEnter Username: ";
        cin >> username;

        cout << "Enter Mobile Number: ";
        cin >> mobileNo;

        cout << "\nBalance: Rs. " << balance;
    }
};

int main()
{
    // Creating an Object
    JazzCash jc;

    // Calling the Main Menu Function
    jc.showMenu();

    return 0;
}
