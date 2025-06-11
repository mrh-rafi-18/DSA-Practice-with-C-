#include<iostream>
using namespace std;

void find_unique_2(int arr[],int n){

int x=0;
for(int i=0;i<n;i++){
    x=x^arr[i];
}


int temp=x,pos=0;
while((temp&1)==0){
    pos++;
    temp=temp>>1;
}


int unique_1{0},unique_2{0};
for(int i=0;i<n;i++){
    if((arr[i]>>pos)&1==1){
        unique_1=unique_1^arr[i];
    }
    else{
        unique_2=unique_2^arr[i];
    }
}

cout<<unique_1<<endl;
cout<<unique_2<<endl;
}

int main(){
int n;
cin>>n;
int arr[2*n];
for(int i=0;i<2*n;i++){
    cin>>arr[i];
}

find_unique_2(arr,2*n);

}
