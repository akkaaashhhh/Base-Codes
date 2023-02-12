#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sub(int index, vector<int> &seq,int arr[],int n){
    if(index==n)    {
        for(auto i : seq){
            cout<<i;}cout<<endl;}
    else{
        seq.push_back(arr[index]);
        sub(index+1,seq,arr,n);
        seq.pop_back();
        sub(index+1,seq,arr,n);
    }
}



int main(){
    int arr[]={1,5,9,8};
    vector<int> seq;
    int n = 4;
    
    sub(0,seq,arr,n);
}