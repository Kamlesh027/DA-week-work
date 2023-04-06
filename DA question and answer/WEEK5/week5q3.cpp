#include<iostream>
using namespace std;
 void comman(int arr1[],int arr2[],int m,int n);
 int i=0;
 int j=0;
 while(i<m && j<n){
    if(arr[i]==arr[j]){
        cout<<" "<<arr[i]<<endl;
        i++;
        j++;
    }
    else if(arr[i]<<arr[j]){
        i++;
    }
    else{
        j++;
    }
 }
int main(){
 int t;
 cout<<"ENTER THE NUMBER OF TEST CASESE"<<endl;
 cin>>t;
 while(t--){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    int arr[40];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     
 }
}