#include<iostream>
int main(){
int x=10;
int y=20;
auto add =[=](int a){
return x+y+a;
};
std::cout<<"Sum: "<<add(5)<<std::endl;//output:sum:35

auto addByref = [&x,&y](int a){
x = 30;//modifying x
return x+y+a;
};
std::cout<<"Sum by reference: "<<addByref(5)<<std::endl;//Sum by reference: 55
std::cout<<"x after modification: "<<x<<std::endl;//x after modification: 30

return 0;
}
