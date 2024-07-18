#include<iostream>
#include<map>
//store the data in key value pair
using namespace std;
int main(){
map<int,string> m;
//1 is key and Ajay is value
m[1]="Ajay";
m[2]="Nanjay";
m[4]="Manjay";
m.insert({5,"antika"});
for(auto i:m){
//expression can not be used as a function_not_supported
//i.first() don't write this way
cout<<i.first<<" "<<i.second<<" "<<endl;//expression(a+b)/
}
cout<<"find the element : "<<m.count(-13)<<endl;
m.erase(5);
cout<<"After erase :"<<endl;
for(auto i:m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
}
//find the element from map
auto findElement=m.find(4);
for(auto i=findElement;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
}
}
