#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    int choice, amount, confirm;
    int balance = 20000;

    string mobileNo, cnic, accountNo;
    string senderNo, referenceNo, username, name;

    cout << "\n\t\tJAZZCASH INTERFACE";
    cout << "\n\n1. Send Money";
    cout << "\n2. Receive Money";
    cout << "\n3. Mobile Load";
    cout << "\n4. Bill Payment";
    cout << "\n5. Check Balance";
    cout << "\n6. Exit";

    cout << "\n\nEnter Choice: ";
    cin >> choice;

    switch(choice)
    {
        // SEND MONEY
        case 1:
        {
            cout << "\n\nSEND MONEY";
            cout << "\n1. JazzCash";
            cout << "\n2. CNIC";
            cout << "\n3. Bank";
            cout << "\n4. Back";

            cout << "\nEnter Choice: ";
            cin >> choice;

            switch(choice)
            {
                // JAZZCASH
                case 1:
                {
                    cout << "\nEnter Mobile Number: ";
                    cin >> mobileNo;

                    cout << "Enter Amount: ";
                    cin >> amount;

                    cout << "\n1. Confirm";
                    cout << "\n2. Cancel";
                    cout << "\nEnter Choice: ";
                    cin >> confirm;

                    if(confirm == 1)
                    {
                        balance -= amount;
                        cout << "\nTransaction Successful!";
                    }
                    else if(confirm == 2)
                    {
                        cout << "\nTransaction Cancelled!";
                    }
                    else
                    {
                        cout << "\nInvalid Choice!";
                    }

                    break;
                }

                // CNIC
                case 2:
                {
                    cout << "\nEnter CNIC Number: ";
                    cin >> cnic;

                    cout << "Enter Amount: ";
                    cin >> amount;

                    cout << "\n1. Confirm";
                    cout << "\n2. Cancel";
                    cout << "\nEnter Choice: ";
                    cin >> confirm;

                    if(confirm == 1)
                    {
                        balance -= amount;
                        cout << "\nTransaction Successful!";
                    }
                    else if(confirm == 2)
                    {
                        cout << "\nTransaction Cancelled!";
                    }
                    else
                    {
                        cout << "\nInvalid Choice!";
                    }

                    break;
                }

                // BANK
                case 3:
                {
                    cout << "\nEnter Account Holder Name: ";
                    cin >> name;

                    cout << "Enter Account Number: ";
                    cin >> accountNo;

                    cout << "Enter Amount: ";
                    cin >> amount;

                    cout << "\n1. Confirm";
                    cout << "\n2. Cancel";
                    cout << "\nEnter Choice: ";
                    cin >> confirm;

                    if(confirm == 1)
                    {
                        balance -= amount;
                        cout << "\nTransaction Successful!";
                    }
                    else if(confirm == 2)
                    {
                        cout << "\nTransaction Cancelled!";
                    }
                    else
                    {
                        cout << "\nInvalid Choice!";
                    }

                    break;
                }

                case 4:
                    cout << "\nBack";
                    break;

                default:
                    cout << "\nInvalid Choice!";
            }

            break;
        }

        // RECEIVE MONEY
        case 2:
        {
            cout << "\n\nRECEIVE MONEY";
            cout << "\n1. Receive JazzCash";
            cout << "\n2. Receive Bank";
            cout << "\n3. Back";

            cout << "\nEnter Choice: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                {
                    cout << "\nEnter Sender Number: ";
                    cin >> senderNo;

                    cout << "Enter Amount: ";
                    cin >> amount;

                    cout << "\n1. Confirm";
                    cout << "\n2. Cancel";
                    cout << "\nEnter Choice: ";
                    cin >> confirm;

                    if(confirm == 1)
                    {
                        balance += amount;
                        cout << "\nMoney Received Successfully!";
                    }
                    else if(confirm == 2)
                    {
                        cout << "\nTransaction Cancelled!";
                    }
                    else
                    {
                        cout << "\nInvalid Choice!";
                    }

                    break;
                }

                case 2:
                {
                    cout << "\nEnter Account Number: ";
                    cin >> accountNo;

                    cout << "Enter Amount: ";
                    cin >> amount;

                    cout << "\n1. Confirm";
                    cout << "\n2. Cancel";
                    cout << "\nEnter Choice: ";
                    cin >> confirm;

                    if(confirm == 1)
                    {
                        balance += amount;
                        cout << "\nMoney Received Successfully!";
                    }
                    else if(confirm == 2)
                    {
                        cout << "\nTransaction Cancelled!";
                    }
                    else
                    {
                        cout << "\nInvalid Choice!";
                    }

                    break;
                }

                case 3:
                    cout << "\nBack";
                    break;

                default:
                    cout << "\nInvalid Choice!";
            }

            break;
        }

        // MOBILE LOAD
        case 3:
        {
            cout << "\n\nMOBILE LOAD";
            cout << "\n1. Jazz";
            cout << "\n2. Zong";
            cout << "\n3. Telenor";
            cout << "\n4. Ufone";
            cout << "\n5. Back";

            cout << "\nEnter Choice: ";
            cin >> choice;

            if(choice >= 1 && choice <= 4)
            {
                cout << "\nEnter Mobile Number: ";
                cin >> mobileNo;

                cout << "Enter Amount: ";
                cin >> amount;

                cout << "\n1. Confirm";
                cout << "\n2. Cancel";
                cout << "\nEnter Choice: ";
                cin >> confirm;

                if(confirm == 1)
                {
                    balance -= amount;
                    cout << "\nLoad Successful!";
                }
                else if(confirm == 2)
                {
                    cout << "\nLoad Cancelled!";
                }
                else
                {
                    cout << "\nInvalid Choice!";
                }
            }
            else if(choice == 5)
            {
                cout << "\nBack";
            }
            else
            {
                cout << "\nInvalid Choice!";
            }

            break;
        }

        // BILL PAYMENT
        case 4:
        {
            cout << "\n\nBILL PAYMENT";
            cout << "\n1. Electricity";
            cout << "\n2. Gas";
            cout << "\n3. Water";
            cout << "\n4. Internet";
            cout << "\n5. Telephone";
            cout << "\n6. Back";

            cout << "\nEnter Choice: ";
            cin >> choice;

            if(choice >= 1 && choice <= 5)
            {
                cout << "\nEnter Reference Number: ";
                cin >> referenceNo;

                cout << "Enter Amount: ";
                cin >> amount;

                cout << "\n1. Confirm";
                cout << "\n2. Cancel";
                cout << "\nEnter Choice: ";
                cin >> confirm;

                if(confirm == 1)
                {
                    balance -= amount;
                    cout << "\nBill Paid Successfully!";
                }
                else if(confirm == 2)
                {
                    cout << "\nPayment Cancelled!";
                }
                else
                {
                    cout << "\nInvalid Choice!";
                }
            }
            else if(choice == 6)
            {
                cout << "\nBack";
            }
            else
            {
                cout << "\nInvalid Choice!";
            }

            break;
        }

        // CHECK BALANCE
        case 5:
        {
            cout << "\n\nCHECK BALANCE";

            cout << "\nEnter Username: ";
            cin >> username;

            cout << "Enter Mobile Number: ";
            cin >> mobileNo;

            cout << "\nBalance: Rs. " << balance;

            break;
        }

        // EXIT
        case 6:
            cout << "\nThank You for using JazzCash!";
            break;

        default:
            cout << "\nInvalid Choice!";
    }

    getch();
    return 0;
}
