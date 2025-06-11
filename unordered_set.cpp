#include<iostream>
#include<unordered_set>

using namespace std;

int main(){

unordered_set<int> s{1,2,3,4,5,5,4,4,4,4,4};

int key;

///unordered set look up
cin>>key;
if(s.find(key)!=s.end()){
    cout<<key<<" is present"<<endl;
}
else{
    cout<<key<<" is not in the set"<<endl;
}
s.erase(5);
s.insert(5);

///iterate through unordered set

for(auto x: s){
    cout<<x<<" ";
}
cout<<endl;



}
