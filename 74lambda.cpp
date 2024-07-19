//Basic syntax:
//[capture](parameters)-> return_type{
//fun_body;
//}
#include<iostream>
int main(){
    auto add = [](int a,int b){
        return a+b;
    };
    std::cout<<"Sum:"<<add(3,4)<<std::endl;//output: Sum:7
    return 0;
}
