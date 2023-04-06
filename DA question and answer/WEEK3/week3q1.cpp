#include<iostream>
using namespace std;
 void insertion(int arr[],int n,int &shift,int &comp){
    for(int i=0;i<n;i++){
        int temp=arr[i];
         int j=n-1;
         while(j>=0 && arr[j]> temp){
            comp++;
            arr[j+1]=arr[j];
            j--;
            shift++;
         }
         arr[j+1]=temp;
         shift++;
    }
 }
 int main(){
    int t;
    cout<<"enter the total number of test case"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"enter the ranfe of array"<<endl;
         cin>>n;
         int arr[40];
         for(int i=0;i<n;i++){
            cin>>arr[i];
         }
         int shift=0;
         int comp=0;
         insertion(arr,n,shift,comp);
         for(int i=0;i<n;i++){
            cout<<arr[i];
         }
         cout<<shift<<comp<<endl;
    }
 }