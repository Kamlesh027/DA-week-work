#include<iostream>
#include<algorithm>
 void pair2(int arr[],int n){
     for(int k=n-1;k>2;k--){
        i=0;
        int j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==arr[k]){
                cout<<i+1 <<" "<<j+1<<" "<<k+1<<endl;
            }
            else if(arr[i]-arr[j]>arr[k]){
                i++;
            }
            else{
                j--;
            }
        }
    }
 }
 int main(){
    int t;
    cout<<"ENTER THE NUMBER OF TEST CASE"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"ENTER THE NUMBER OF RANGE:"<<endl;
        int arr[50];
        for(int )
    }
 }