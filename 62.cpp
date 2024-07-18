#include<iostream>
#include<set>
using namespace std;
//you cannot add duplicate value
//take the value in sorted order
int main(){

    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    for(auto i:s){
            cout<<i<<endl;//0,1,5,6
    }cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    //for(int i=0;i< s.size();i++){

       // cout<<*next(s.begin(),i)<<endl;
    //}
    for(auto i:s){
           cout<<i<<endl;
    }
cout<<endl;
//find the element is present in set or not
cout<<" is present :"<<s.count(7)<<endl;
set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";//this is pointers
}cout<<endl;
}
