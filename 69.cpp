#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;  // data hiding


public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept){
    dept=newDept;
    }
    //getter and setter method
    void set_salary(double s)
    {
        salary=s;
    }
    double get_salary()
    {
        return salary;
    }
    void getInfo(){
        cout<<"Teacher name: "<<name<<endl;
        cout<<"Teacher subject: "<<subject<<endl;
        cout<<"Salary is:"<<salary<<endl;
    }
};

int main(){
    Teacher t1;
    t1.name="Diya";
    t1.subject="Math";
    t1.changeDept("CSE");
    //t1.getInfo();
      //  cout<<t1.name<<endl;
    t1.set_salary(4500);
    cout<<t1.get_salary();
    t1.getInfo();

        return 0;

}



