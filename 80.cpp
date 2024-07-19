#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>numbers = {1,2,3,4,5};
int size =numbers.size();

    for(int i=0;i< size;i++){
    cout<< numbers[i] << " ";
    }
    cout<<endl;
    return 0;
}
