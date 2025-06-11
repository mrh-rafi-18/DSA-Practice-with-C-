#include<iostream>
#include<unordered_map>
using namespace std;
int calculate_exponential(int base,int power);
int i=1;

unordered_map <int ,int> pow;
int main(){

int base,power;
cin>>base>>power;
if(power%2==0){
cout<<calculate_exponential(base,power)<<endl;
cout<<i++;
}
else{
    cout<<base * calculate_exponential(base,power-1)<<endl;
    cout<<i++;
}
}

int calculate_exponential(int base,int power){

if(power<=1){
    return base;
}
i++;
if(power%2==0){
return calculate_exponential(base,power/2)*calculate_exponential(base,power/2);
}
else{
    return (base*calculate_exponential(base,(power-1)/2))*calculate_exponential(base,(power-1)/2);
}
}
