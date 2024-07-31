#include<iostream>
#include<fstream>
using namespace std;
int main(){
//open a text file for writing
ofstream my_file("example.txt");
//check the file for errors
if(!my_file){
cout<<"Error: unable to open the file."<<endl;
return 1;
}
//write multiple lines to file
my_file<<"Prachi 1"<<endl;
my_file<<"Maya 40"<<endl;
my_file<<"Mohit 50"<<endl;
//close the file
my_file.close();
return 0;
}
