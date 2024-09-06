#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
   if(n==1 || n==0){
    cout<<"Not a Prime Number";
   }
   int count=0;
  for(int i=2;i<=n-1;i++){
    if(n%i==0){
        count++;
        break;
    }
  }
  if(count>0){
    cout<<"Not a prime number";
  }
  else{
    cout<<"Prime number";
  }
    return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n==1){
        cout<<" It is neither composite and nor prime";
    }
    bool flag = true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag==false){
        cout<<"Not a prime number";
    }
    else{
        cout<<"Prime number";
    }
    return 0;
}*/