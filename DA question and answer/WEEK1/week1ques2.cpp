#include<iostream>
using namespace std;
int binaryserac(int arr[],int n,int key,int &comp){
    int start=0;
    int end=n-1;
      int mid=start+(end-start)/2;
    while(start<=end){
      
        if(arr[mid]==key){
            comp++;
            return mid;
        }
        else if(arr[mid]>key){
            comp++;
            start=mid+1;
        }
        else{
            comp++;
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int t;
    cout<<"ENTER THE NUMBER OF TEST CASE"<<endl;
    cin>>t;
    while(t--){
        cout<<"ENTER THE SIZE OF ARRAY"<<endl;
        int n;
        cin>>n;
        int arr[40];
        int key;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"ENTER THE KEY TO BE SEARCH"<<endl;
        cin>>key;
        int comp=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;}
            }
        }
         int ans=binaryserach(arr,n,key,comp);
         if(ans==-1){
            cout<<"NOT FOUND"<<endl;

         }
         else{
            cout<<"index is found at "<<ans<<endl;
         }
         cout<<"total number of camp"<<endl;
    }
}