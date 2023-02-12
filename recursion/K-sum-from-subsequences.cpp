#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sub(int index, vector<int> &seq,int arr[],int n,int sum,int cum){

    if(index==n)    {
        if(cum==sum){
            cout<<"[";
        for(auto i : seq){
            cout<<" "<<i<<" ";}
            cout<<"]"<<endl;
        }
    }
    else{
        seq.push_back(arr[index]);
        sub(index+1,seq,arr,n,sum,(cum+arr[index])); // case taking the number in the sequence 
        seq.pop_back();
        sub(index+1,seq,arr,n,sum,cum); // case without taking the number in the sequence
    }
    
}



int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    vector<int> seq;
    int n = 10;
    int sum=8;
    int cum=0;
    sub(0,seq,arr,n,sum,cum);
}