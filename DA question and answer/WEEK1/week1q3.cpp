#include<iostream>
#include<math>
using namespace std;
int jumpserach(int arr[],int n,int key){
    // number of jumps
    int jumps=sqrt(n);
    int i=0;
    while(i<n && arr[i]>key){
        i=i+jumps // to the next element
    }
    for(int j=max(i-jumps,0);j<min(i,n-1);j++){
        if(arr[j]==key){
            return j;
        }
    }
     return -1;
}
int main(){
    int t;
    cout<<"ENTER THE TOTAL  NUMBER OF KEY"<<endl;
    while(t--){
        int n;
        int key;
        cout<<"ENTERT THE SIZR OF ARRAY"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"ENTE THE KEY TO BE SEARCH"<<endl;
        cin>>key;
        int ans=jumpserach(arr,n,key);
        if(ans==-1){
            cout<<"index is  not present "<<endl;

        }
        else{
            cout<<"index is presrnt at"<<ans<<end;
        }

    }
    return 0;
}