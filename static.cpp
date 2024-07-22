#include <iostream>
using namespace std;
void example(){
static int count = 0;
count++;
cout<<"Count: "<<count<<endl;
}
int main() {
    example();
    return 0;
}
//ExampleNo:2
//static int globalVar = 0;//visible only within this file
//void example(){
//globalVar++;
//}
