#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int d =n;
    int sum=0,rer=0;
    while(n!=0){
        rer=n%10;
        sum=sum+(rer*rer*rer);
        n=n/10;
    }
    if(d==sum) cout<<d<<" is the Armstrong number";
    else cout<<d<<" Not a Armstrong Number";
}