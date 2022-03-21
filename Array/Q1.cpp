#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    rev(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}