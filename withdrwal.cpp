#include<bits/stdc++.h>
using namespace std;
class bankaccount{
    private:
        mutable string name;
        long int accountno;  //can not change account number
        mutable  string phoneno;
        mutable double balance;
    public:
        bankaccount(){cout<<"WELLOCOME TO BANK "<<endl;};
        void addaccount(string n, long int acc, string ph, double bal){
            name=n;
            accountno=acc;
            phoneno=ph;
            balance=bal;
        }
        void transaction(int key, long int accountno){
            switch (key)
            {
            case 1:
                double amt;
                cout<<"Enter the amount to be credited : ";
                cin>>amt;
                balance+=amt;
                cout<<endl;
                break;
            case 2:
                double amt2;
                cout<<"Enter the amount to be debited: ";
                cin>>amt;
                balance-=amt2;
                cout<<endl;
                break;
            case 3:
                cout<<"Amount available : ";
                cout<<balance<<endl;
                break;

            default:
                cout<<"INVALID OPERATION \nGoing to main window\n";
                break;
            }
        }
        void updatedname(string n){
            name=n;
        }
        void updatephoneno(string ph){
            phoneno=ph;
        }
        void displayall(){
            cout<<"NAME : "<<name<<endl;
            cout<<"PHONE NUMBER : "<<phoneno<<endl;
            cout<<"ACCOUNT NUMBER : "<<accountno<<endl;
            cout<<"BALANCE : "<<balance<<endl;
        }
};
int main(){
    bankaccount a1;
    a1.addaccount("Prachi",15,"8866334455",9999999.99);
    a1.displayall();
    return 0;
}

