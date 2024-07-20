#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> numbers = {1,2,3,4,5};
int total = 0;
auto totallambda = [&total](int n) {
total +=n;
};
for(int num : numbers) {
totallambda(num);
}
cout<<"Total: "<<total<<endl;
return 0;
}
