// count sort
#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"ENTER  NUMBER OF TEST CASE"<<endl;
    while(t--){
        int n;
        int arr[50];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int freq[26]={0};
        for(int i=0;i<n;i++){
            freq[arr[i]-'a']++;
        }
        int max_count=0;
        char max_char;
        for(int i=0;i<26;i++){
            if(freq[i]>max_count){
                max_count=freq[i];
                max_char='a'+i;
            }
        }
        if(max_count==1){
            cout<<"no duplicates found"<<endl;
        }
        else{
            cout<<max_char" "<<maxcount<<endl;  
        }
    }
}