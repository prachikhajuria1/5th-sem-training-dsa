#include<iostream>
#include<list>
using namespace std;
int main()
{
    int i=10;
    int *j=&i;
   // j=&(i+34); (invalid)
    cout<<*j<<endl;//value
//cout<<*<<endl;//address
  //  cout<<(*&i)<<endl;//value stored at address
  //& can be used with variable(imp)
  //* can be used with variable,expression,constant(imp)
}
