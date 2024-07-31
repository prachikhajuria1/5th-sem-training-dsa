#include<iostream>
#include<fstream>
using namespace std;
int main(){
//open a text file for writing
ofstream my_file("example.txt", ios::app);
//check the file for errors
if(!my_file){
cout<<"Failed to open file for appending."<<endl;
return 1;
}
//append multiple lines to the file
my_file<<"Subash 40"<<endl;
my_file<<"Raju 50"<<endl;
my_file<<"Rajesh 60"<<endl;
//close the file
my_file.close();
return 0;
}
