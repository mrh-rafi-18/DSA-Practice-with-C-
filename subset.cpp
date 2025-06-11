#include<iostream>
#include<string>
using namespace std;
int i=0;
void find_subset(string str,int index,string newstr){

if(index>=str.length()){
    cout<<newstr<<endl;
    return;
}
i++;

find_subset(str,index+1,newstr+str[index]);

find_subset(str,index+1,newstr);

}

int main(){

find_subset("abcd",0,"");
cout<<i;

}
