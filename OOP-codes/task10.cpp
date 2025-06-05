#include <iostream>
using namespace std;
class Vehicle {
protected:
    double mileage;
    double price;

public:
    Vehicle(double _mileage, double _price) : mileage(_mileage), price(_price) {}

    virtual void displayInfo()  {
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: $" << price << endl;
    }
};

class Car : public Vehicle {
protected:
    double ownershipCost;
    int warranty;
    int seatingCapacity;
    char fuelType;

public:
    Car(double _mileage, double _price, double _ownershipCost, int _warranty, int _seatingCapacity, char _fuelType)
        : Vehicle(_mileage, _price), ownershipCost(_ownershipCost), warranty(_warranty), seatingCapacity(_seatingCapacity), fuelType(_fuelType) {}

    void displayInfo(){
        Vehicle::displayInfo();
        cout << "Ownership Cost: $" << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << " persons" << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Bike : public Vehicle {
protected:
    int numCylinders;
    int numGears;
    char coolingType;
    char wheelType;
    double fuelTankSize;

public:
    Bike(double _mileage, double _price, int _numCylinders, int _numGears, char _coolingType, char _wheelType, double _fuelTankSize)
        : Vehicle(_mileage, _price), numCylinders(_numCylinders), numGears(_numGears), coolingType(_coolingType), wheelType(_wheelType), fuelTankSize(_fuelTankSize) {}

    void displayInfo()  {
        Vehicle::displayInfo();
        cout << "Number of Cylinders: " << numCylinders << endl;
        cout << "Number of Gears: " << numGears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
    }
};

class Audi : public Car {
private:
    char modelType;

public:
    Audi(double _mileage, double _price, double _ownershipCost, int _warranty, int _seatingCapacity, char _fuelType, char _modelType)
        : Car(_mileage, _price, _ownershipCost, _warranty, _seatingCapacity, _fuelType), modelType(_modelType) {}

    void displayInfo()  {
        Car::displayInfo();
        cout << "Model Type: " << modelType << endl;
    }
};

class Ford : public Car {
private:
    char modelType;

public:
    Ford(double _mileage, double _price, double _ownershipCost, int _warranty, int _seatingCapacity, char _fuelType, char _modelType)
        : Car(_mileage, _price, _ownershipCost, _warranty, _seatingCapacity, _fuelType), modelType(_modelType) {}

    void displayInfo()  {
        Car::displayInfo();
        cout << "Model Type: " << modelType << endl;
    }
};

class Bajaj : public Bike {
private:
    char makeType;

public:
    Bajaj(double _mileage, double _price, int _numCylinders, int _numGears, char _coolingType, char _wheelType, double _fuelTankSize, char _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}

    void displayInfo()  {
        Bike::displayInfo();
        cout << "Make Type: " << makeType << endl;
    }
};

class TVS : public Bike {
private:
    char makeType;

public:
    TVS(double _mileage, double _price, int _numCylinders, int _numGears, char _coolingType, char _wheelType, double _fuelTankSize, char _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}

    void displayInfo()  {
        Bike::displayInfo();
        cout << "Make Type: " << makeType << endl;
    }
};

int main() {
    Audi audi(15.5, 50000.0, 3000.0, 3, 4, 'P', 'A');
    Ford ford(18.0, 45000.0, 2800.0, 2, 5, 'D', 'M');
    Bajaj bajaj(50.0, 2000.0, 1, 4, 'A', 'S', 12.5, 'B');
    TVS tvs(45.0, 1800.0, 1, 5, 'L', 'A', 10.0, 'T');

    cout << "Audi Car Information:" << endl;
    audi.displayInfo();
    cout << endl;

    cout << "Ford Car Information:" << endl;
    ford.displayInfo();
    cout << endl;

    cout << "Bajaj Bike Information:" << endl;
    bajaj.displayInfo();
    cout << endl;

    cout << "TVS Bike Information:" << endl;
    tvs.displayInfo();

    return 0;
}
 -------------------------------------------------------->>Task 10.1
#include<iostream>
using namespace std;

class employee {
protected:
    string empname;
    int empnum;

public:
    employee(string name="N/A",int num=0){empname=name;empnum=num;}
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class manager : public employee {
    char titles;
    double dues;

public:
    manager(string n, int a, char t, double d) : employee(n, a), titles(t), dues(d) {}

    void getdata() {
        cout << "Enter Manager's name: ";
        cin >> empname;
        cout << "Enter Manager's employee number: ";
        cin >> empnum;
        cout << "Enter Manager's title: ";
        cin >> titles;
        cout << "Enter Manager's dues: ";
        cin >> dues;
    }

    void putdata() {
        cout << "Manager's name: " << empname << endl;
        cout << "Manager's employee number: " << empnum << endl;
        cout << "Manager's title: " << titles << endl;
        cout << "Manager's dues: " << dues << endl;
    }
};

class scientist : public employee {
    int publications;

public:
    scientist(string n, int a, char t, int d) : employee(n, a), publications(d) {}

    void getdata() {
        cout << "Enter Scientist's name: ";
        cin >> empname;
        cout << "Enter Scientist's employee number: ";
        cin >> empnum;
        cout << "Enter Scientist's number of publications: ";
        cin >> publications;
    }

    void putdata() {
        cout << "Scientist's name: " << empname << endl;
        cout << "Scientist's employee number: " << empnum << endl;
        cout << "Scientist's number of publications: " << publications << endl;
    }
};

class programmer : public employee {
    double salary;
    string expertise;

public:
    programmer(string n, int a, char t, double d, string e) : employee(n, a), salary(d), expertise(e) {}

    void getdata() {
        cout << "Enter Programmer's name: ";
        cin >> empname;
        cout << "Enter Programmer's employee number: ";
        cin >> empnum;
        cout << "Enter Programmer's salary: ";
        cin >> salary;
        cout << "Enter Programmer's expertise: ";
        cin >> expertise;
    }

    void putdata() {
        cout << "Programmer's name: " << empname << endl;
        cout << "Programmer's employee number: " << empnum << endl;
        cout << "Programmer's salary: " << salary << endl;
        cout << "Programmer's expertise: " << expertise << endl;
    }
};

int main() {
    manager m("John", 101, 'M', 1500.0);
    scientist s("Alice", 102, 'S', 5);
    programmer p("Bob", 103, 'P', 2000.0, "C++");

    m.putdata();
    cout << endl;
    s.putdata();
    cout << endl;
    p.putdata();

    return 0;
}