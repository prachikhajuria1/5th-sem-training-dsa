#include<iostream>
using namespace std;
int main(){
    int x = 10;
    auto modifyX =[x] () mutable{
        x = 20;//This modifies the local copy of x,not the original
        std::cout<<"Inside lambda,x = "<<x<<std::endl;
    };
    modifyX();
    std::cout<<"Outside lambda, x = " <<x<<std::endl;//output: outside lambda, x =10
    return 0;
}
