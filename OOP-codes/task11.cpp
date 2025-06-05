#include <iostream>
using namespace std;
/*
class Shape {
public:
    virtual ~Shape() {} // Virtual destructor
    virtual double area()= 0;
};

class Shape2D : public Shape {
public:
    virtual double perimeter()= 0;
};

class Shape3D : public Shape {
public:
    virtual double volume()= 0;
};

class Circle : public Shape2D {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area(){
        return 3.14159 * radius * radius;
    }
    double perimeter(){
        return 2 * 3.14159 * radius;
    }
    ~Circle() {
        cout << "Circle Destructor" << endl;
    }
};

class Square : public Shape2D {
private:
    double side;
public:
    Square(double s) : side(s) {}

    double area(){
        return side * side;
    }

    double perimeter(){
        return 4 * side;
    }
    ~Square() {
        cout << "Square Destructor" << endl;
    }
};

class Cube : public Shape3D {
private:
    double length;
public:
    Cube(double l) : length(l) {}

    double area(){
        return 6 * length * length;
    }

    double volume(){
        return length * length * length;
    }
    ~Cube() {
        cout << "Cube Destructor" << endl;
    }
};

class Pyramid : public Shape3D {
private:
    double base;
    double height;

public:
    Pyramid(double b, double h) : base(b), height(h) {}

    double area(){
        return base * base + 2 * base * (1/2*((base / 2) * (base / 2) + height * height));
    }
    double volume(){
        return (base * base * height) / 3;
    }
    ~Pyramid() {
        cout << "Pyramid Destructor" << endl;
    }
};
int main() {
    Shape2D* shapes2D[2];
    shapes2D[0] = new Circle(5);
    shapes2D[1] = new Square(4);

    Shape3D* shapes3D[2];
    shapes3D[0] = new Cube(3);
    shapes3D[1] = new Pyramid(6, 8);

    for (int i = 0; i < 2; ++i) {
        cout << "Area of 2D Shape " << i + 1 << ": " << shapes2D[i]->area() <<endl;
        delete shapes2D[i]; // Deleting each object
    }

    for (int i = 0; i < 2; ++i) {
        cout << "Area of 3D Shape " << i + 1 << ": " << shapes3D[i]->area() << ", Volume: " << shapes3D[i]->volume() <<endl;
        delete shapes3D[i]; // Deleting each object
    }
    return 0;
}
*/
class BankAccount {
protected:
    int accountNumber;
    string ownerName;
    double balance;

public:
    BankAccount(int accNum, string owner, double bal): accountNumber(accNum), ownerName(owner), balance(bal) {}
    virtual ~BankAccount() {}

    // Pure virtual functions
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void createMonthlyStatement() = 0;

    // Common functions
    int getAccountNumber() { return accountNumber; }
    string getOwnerName() { return ownerName; }
    double getBalance() { return balance; }
};

class CheckingAccount : public BankAccount {
public:
    CheckingAccount(int accNum,string owner, double bal): BankAccount(accNum, owner, bal) {}
    virtual void writeCheck(double amount) = 0;
};

class ServiceChargeChecking : public CheckingAccount {
private:
    static  double SERVICE_CHARGE;
    static  int MAX_ALLOWED_CHECKS;
    int numChecksWritten;

public:
    ServiceChargeChecking(int accNum,string owner, double bal)
        : CheckingAccount(accNum, owner, bal), numChecksWritten(0) {}

    void deposit(double amount){
        balance += amount;
    }

    void withdraw(double amount) {
        balance -= amount;
        applyServiceCharge();
    }

    void writeCheck(double amount){
        if (numChecksWritten < MAX_ALLOWED_CHECKS) {
            balance -= amount;
            numChecksWritten++;
            applyServiceCharge();
        } else {
            cout << "Exceeded the maximum allowed checks for the month." << endl;
        }
    }
    void createMonthlyStatement(){
        cout << "Creating monthly statement for Service Charge Checking Account." << endl;
    }

private:
    void applyServiceCharge() {
        if (balance < 0) {
            balance -= SERVICE_CHARGE;
        }
    }
};

// ants initialization
 double ServiceChargeChecking::SERVICE_CHARGE = 5.0;
 int ServiceChargeChecking::MAX_ALLOWED_CHECKS = 3;

// Add other classes as needed...

int main() {
    // Test your classes here
    ServiceChargeChecking account(1001, "John Doe", 1500);
    account.deposit(500);
    account.withdraw(200);
    account.writeCheck(100);
    account.createMonthlyStatement();

    cout << "Account Owner: " << account.getOwnerName() << endl;
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Account Balance: $" << account.getBalance() << endl;

    return 0;
}