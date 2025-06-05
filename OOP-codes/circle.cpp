#include<iostream>
using namespace std;

class List {
private:
    int* data;
    int size;

public:
    List(int size) : size(size), data(new int[size]) {}

    void fill() {
        for (int i = 0; i < size; i++)
            data[i] = i * i;
    }

    void update(int index, int val) {
        data[index] = val;
    }

    void print() {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
    }
    List ( List & obj ) {
size = obj . size ;
data = new int [ size ];
for (int i =0; i < size ; i ++)
data [i] = obj . data [i ];

}

    ~List() {
        delete[] data;
    }
};
void destroyList ( List ObjectThree ) {}

int main() {
    List objectOne(5);
    objectOne.fill();
    cout << "obj1: ";
    objectOne.print();

    destroyList(objectOne);

    cout << "\n\nobj1: ";
    objectOne.print();

    return 0;
}
