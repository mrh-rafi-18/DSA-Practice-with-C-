#include<iostream>
using namespace std;

void bin_search(int l,int mid,int h,int arr[],int item){
    if(l<=h){
    if(arr[mid]==item){
        cout<<item<<" found at index "<<mid;
        return;
    }
    else if(item<arr[mid]){
        bin_search(l,(mid+l)/2,mid-1,arr,item);
    }
    else{
        bin_search(mid+1,(h+mid)/2,h,arr,item);
    }
    }


}

int main(){
int arr[]={1,2,3,4,5,6,7,8};

int element;
cin>>element;
bin_search(0,(8-0)/2,sizeof(arr)/sizeof(int),arr,element);

}
