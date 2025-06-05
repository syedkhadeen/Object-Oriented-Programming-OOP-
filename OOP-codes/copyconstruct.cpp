#include<iostream>
using namespace std;
class Student{
	private:
		char section;
	public:
		void setSection(char section) {
			this->section = section;
		}
		char getSection() {
			return section;
		}
};
int main() {
	Student ali;
	ali.setSection('A');
	cout << "Ali sec : " << ali.getSection() << endl;
	Student mahad(ali);
	cout << "mahad sec : " << mahad.getSection() << endl;
	Student zain = mahad;
	cout << "zain sec : " << zain.getSection() << endl;
}