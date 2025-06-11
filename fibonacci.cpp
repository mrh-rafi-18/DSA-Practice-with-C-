#include<iostream>
#include<unordered_map>

using namespace std;
unordered_map <int,long long> fibo;
int i=1;
long long calculate_fib(int n){
if(fibo[n])return fibo[n];

if(n<=1){
    return n;

}
i++;
fibo[n]= calculate_fib(n-1)+calculate_fib(n-2);
return fibo[n];
}

int main(){
int n;
cin>>n;

cout<<calculate_fib(n)<<endl<<i;

}
