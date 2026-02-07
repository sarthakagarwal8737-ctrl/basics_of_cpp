#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"enter the selling price ";
    cin>>sp;
    int cp;
    cout<<"enter the cp";
    cin>>cp;
    if(sp>cp){
        cout<<"profit : "<<sp-cp;
    }
    else if(sp<cp){
        cout<<"loss : "<<cp-sp;
    }
    else{
        cout<<"no profit no loss";
    }
}