#include <iostream>
using namespace std;

 class Example{
    mutable int value;
public:
    Example(int val): value(val){}
    void modify() const{value++;}
};
int main() {
    example();
    return 0;
}
