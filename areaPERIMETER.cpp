#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter the length ";
    cin>>l;
    int b;
    cout<<"enter the breadth ";
    cin>>b;
    if(l*b>4*(l+b)){
        cout<<"area of recatnagle is greter than its perimeter by :" <<(l*b)-4*(l+b)  ;
    }
    else if (l*b<4*(l+b)){
        cout<<"area of rectangle is less than its perimeter by : " <<4*(l+b)-(l*b);
    }
    else{
        cout<<"area and paramtere are same";
    }

}