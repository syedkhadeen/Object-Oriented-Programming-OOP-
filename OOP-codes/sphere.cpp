#include<iostream>
using namespace std;
int main(){
    const double PI = 3.14159;
    float radius;
    cout<<"Enter the radius of a sphere : "<<endl;
    cin>>radius;
    cout<<"The Volume of the sphere is : "<<(4.0/3.0)*PI*(radius*radius*radius);
}