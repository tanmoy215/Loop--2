#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
        else continue;
    }
    return 0;
}