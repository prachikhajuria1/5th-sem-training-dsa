#include<iostream>
using namespace std;
class Calculator
{
    private:
    int number1;
    int number2;
    public:
        Calculator(int number1,int number2)
        {
            this->number1=number1;
            this->number2=number2;
        }

        void display()
        {
            int n;
            for(int i=0;i<n;i++){
            cout<<"Choose the operations:"<<endl;
            cout<<"1.Addition"<<endl;
            cout<<"2.Subtraction"<<endl;
            cout<<"3.Multiplication"<<endl;
            cout<<"4.Division"<<endl;
            cout<<"5.Remainder"<<endl;
            cout<<"6.Exit"<<endl;

            int choice;
            cout<<"Enter your Choice:"<<endl;
            cin>>choice;
            if(choice==1){
                cout<<"Addition:"<<number1+number2<<endl;
            }
            if(choice==2){
                cout<<"Subtraction:"<<number1-number2<<endl;
            }
            if(choice==3){
                cout<<"Multiplication:"<<number1*number2<<endl;
            }
            if(choice==4){
                cout<<"Division:"<<number1/number2<<endl;
            }
            if(choice==5){
                cout<<"Remainder:"<<number1%number2<<endl;
            }
            if(choice==6){
                cout<<"Exit"<<endl;
            }
            if (choice>6)
            {

                cout<<"INVALID CHOICE"<<endl;
            }
        }
        }

};
int main()
{
    Calculator C1( 12 ,5);
    C1 .display();
    return 0;
}








