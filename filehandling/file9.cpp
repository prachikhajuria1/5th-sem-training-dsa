//Create the file and store the generated username and password in file.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    // Open a text file for appending
    ofstream my_file("credentials.txt", ios::app);
    // Check the file for errors
    if(!my_file) {
        cout << "Error: unable to open the file." << endl;
        return 1;
    }
    string username, password;
    // Get username input
    cout << "Enter username: ";
    getline(cin, username);
    // Get password input
    cout << "Enter password: ";
    getline(cin, password);
    // Append the username and password to the file
    my_file << username << " " << password << endl;
    // Close the file
    my_file.close();
    cout << "Username and password stored successfully." << endl;
    return 0;
}

