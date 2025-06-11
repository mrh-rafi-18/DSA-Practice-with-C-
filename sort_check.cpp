#include<iostream>
using namespace std;

void sort_check(int i,int a[],int n){
if(i==n){
        cout<<"array is sorted"<<endl;
        return;
}
if(a[i]<a[i-1] && i!=0){
        cout<<"array is unsorted"<<endl;
        return;
}


sort_check(i+1,a,n);
}

int main(){
int a[]={1,4,3,4,6,7,8,9,10};

sort_check(0,a,sizeof(a)/sizeof(int));
}
