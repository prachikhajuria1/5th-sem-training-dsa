#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //opening a text file for writing.you can use open() to open file.ofstream my_file.open("example.txt");
    ofstream my_file("example.txt");
    //close the file
    my_file.close();//
return 0;
}
1.By checking the File
//check if the file has been opened properly
if (!my_file){
        //print error messages
        cout<<"Error opening the File."<<endl;
//terminate the main() function
return 1;
}
2. Using the is_open() Function
ofstream my_file("example.txt");
if(!my_file.is_open()) {
        cout<<"Error opening the file."<<endl;
return 1;
}
3. Using the fail() function
if(my_file.fail()) {
        cout<<"Error opening the file."<<endl;
return 1;
}
