#include<iostream>
using namespace std;
int coutbinary(int arr[],int low,int high,int key){
        int count=0;
        int mid=low+(end-low)/2;
        while(start<=end){
          if(arr[mid]==key){
            count++;
            int left=countbinary(arr,low,end-1);
            int right=countbinary(arr,mid+1,end);
            count+=left+right;
          }
          else if(arr[mid]>key){
              start=mid+1;
          }
          else {
            end=mid-1;
          }
            return count;
        }
}
 void searchkey(int arr[],int n,int key){
     int low=0;
     int high=n-1;
     int index=-1;
     while(low<=high){
        if(arr[mid]==key){
            index=mid;
        }
        else if(arr[mid]>key){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
         if(index==-1){
            cout<<"not found"<<endl;
         }
         else{
            count=coutbinary(arr,low,high,key);
         }
     }
 }
 int main(){
    int t;
    cout<<"ENTER THE NUMBER OF TEST CASE"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"ENTER THE SIZE OF ARRAY"<<endl;
        
    }
 }