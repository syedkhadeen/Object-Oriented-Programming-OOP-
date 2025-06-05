#include<iostream>
using namespace std;
int main(){
int *p; //Line 1
int *q; //Line 2
p = new int[5]; //Line 3
*p = 2; //Line 4
for (int i = 1; i < 5; i++) //Line 5
p[i] = p[i - 1] + i; //Line 6
q = p; //Line 7
delete [] p; //Line 8
for (int j = 0; j < 5; j++) //Line 9
cout << q[j] << " "; //Line 10
cout << endl;
}