#include<iostream>
using namespace std;
 void merge(int arr[],int s,int e,int mid){
    int l1=mid-s+1;
    int l2=mid-e;
    int n1[l1],n2[l];
    // now we will copy the data;
    for(int i=0;i<l1<i++){
        n1[i]=arr[i];
    }
    for(int i=0;i<l2;i++){
        n2[i]=arr[i];
    }
    int i=0;
    int j=0;
    int k=s;
    while(i<l1 && j<l2){
        if(n1[i]<n2[j]){
            k[i]=n1[i];
            i++;
            
        }
        else{
            k[i]=n2[i];
            
            j++;
        }
        k++;
    }
    while(i<l1){
          k[i]=n1[i];
            i++;
            k++;
    }
    while(j<l2){
         k[i]=n2[i];
         j++;
         k++;

    }
 }
 void mergesort(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    if(s>=e){
        return ;
    }
    mergesort(arr,s,mid-1);
    mergesort(arr,mid+1,e);
    merge(arr,s,e,,mid);
 }
void twosum(int arr[],int n,int key){
int s=0;
int e=n-1;
mergesort(arr,s,e);
while(s<=e){
    if(arr[i]+arr[j]==key){
        cout<<arr[i]<<arr[j]<<endl;
    }
    else if(arr[i]+arr[j]<key){
        i++;
    }
    else{
        j++;
    }
}
}
int main(){

}