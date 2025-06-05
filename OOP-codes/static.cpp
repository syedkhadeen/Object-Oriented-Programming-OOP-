#include<iostream>
using namespace std;
class Student {
private :
static int std_count ;
public :
Student () {
std_count ++;
}
void set_std_count ( int std_count ){
this -> std_count = std_count ;
}
int get_std_count () {
return std_count ;
}
};
//int Student :: std_count =0;
int main () {
Student ali , mahad , zain ;
ali.set_std_count(0);
cout << " total students : " << zain.get_std_count () <<endl;

}