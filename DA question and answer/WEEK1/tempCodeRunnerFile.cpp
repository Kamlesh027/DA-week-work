#include<iostream>
using namespace std;
int linearserach(int arr[], int n,int key,int &comp){
    for(int i=0;i<n;i++){
       comp++;
       if(arr[i]==key){
        return i;
       }
    }
    return -1;
}
int main(){
    int t;
    cout<<"ENTER THE NUMBER OF TEST CASE"<<endl;
    cin>>t;
    while(t--){
        int n;
        int arr[50];
        cout<<"ENTER THE SIZE OF AN ARRAY"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        int comp=0;
        cout<<"ENTER THE KEY TO BE SEARCH"<<endl;
        cin>>key;
        int ans=linearserach(arr,n,key,comp);
        if(ans==-1){
            cout<<"NOT PRESNT"<<endl;
        }
        else{
            cout<<"index is p"<<endl;
        }
        cout<<comp<<endl;
    }
}