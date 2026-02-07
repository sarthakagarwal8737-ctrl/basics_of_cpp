#include<iostream>
using namespace std;
int main(){ 
        int a,b,c;
    cout<<"Enter the side a : ";
    cin>>a;
    cout<<"Enter the side b : ";    
    cin>>b;
    cout<<"Enter the side c : ";
    cin>>c; 
    if(a+b>c && b+c>a && c+a>b){
        cout<<"The sides form a valid triangle";
    }
    else{
        cout<<"The sides do not form a valid triangle";
    }

}
