#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=i+1;k<(8-i);k++){
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";

    }
    for(int i=4;i>=1;i--){
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=i+1;k<(8-i);k++){
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
