#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    unordered_map<string,int> menu;
    ///assigning hashtable
    menu["soup"]=18;
    menu["biriyani"]=150;
    menu["paratha"]=10;

    menu.erase("soup");

    ///look up hashtable
    string item;
    cin>>item;
    if(menu[item]!=0){
        cout<<item<<" costs "<<menu[item]<<endl;
    }
    else{
        cout<<item<<" not available"<<endl;
    }
    ///iterate through hashtable
     for(pair<string,int> x: menu){
        cout<<x.first<<" price is "<< x.second<<endl;
    }


    ///implementing phonebook using map
    map <string,list<string>> phonebook;

    phonebook["mrh"].pushback("01638221831");
}
