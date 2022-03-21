#include<bits/stdc++.h>
using namespace std;

class P{
    public:
    int min;
    int max;
};

P min_max(int* arr,int n){
    P res;
    res.min=arr[0];
    res.max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>res.max){
            res.max=arr[i];
        }
        if(arr[i]<res.min){
            res.min=arr[i];
        }
    }

    return res;
}


inline void printP(P o){
    cout<<"Max:-"<<o.max<<" Min:-"<<o.min<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printP(min_max(a,n));
}