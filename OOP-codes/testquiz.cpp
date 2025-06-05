#include <iostream>
using namespace std;

class Array {
private:
    float *array;  // Dynamic array to store floating-point numbers
    int num;       // Number of elements in the array

public:
    Array(int num) {
        this->num = num;
        array = new float[num];
    }

    ~Array() {
        delete[] array;
    }

    void store(int index, float val) {
        if (index >= 0 && index < num) {
            array[index] = val;
        }
    }

    int show(float val) {
        for (int i = 0; i < num; i++) {
            if (array[i] == val) {
                return i;  // Return the index of the first occurrence of 'val'
            }
        }
        return -1;  // Return -1 if 'val' is not found in the array
    }

    float highest() {
        float highest = array[0];  // Initialize 'highest' with the first element
        for (int i = 1; i < num; i++) {
            if (array[i] > highest) {
                highest = array[i];  // Update 'highest' if a larger value is found
            }
        }
        return highest;
    }

    float lowest() {
        float lowest = array[0];  // Initialize 'lowest' with the first element
        for (int i = 1; i < num; i++) {
            if (array[i] < lowest) {
                lowest = array[i];  // Update 'lowest' if a smaller value is found
            }
        }
        return lowest;
    }

    float avg() {
        float sum = 0;
        for (int i = 0; i < num; i++) {
            sum += array[i];
        }
        return sum / num;  // Calculate the average
    }
};

int main() {
    Array arr(5);
    arr.store(0, 1.0);
    arr.store(1, 2.0);
    arr.store(2, 3.0);
    arr.store(3, 4.0);
    arr.store(4, 5.0);

    float val;
    cout << "Enter a value to find its index: ";
    cin >> val;
    int index = arr.show(val);

    if (index != -1) {
        cout << "Value " << val << " found at index " << index << endl;
    } else {
        cout << "Value " << val << " not found in the array." << endl;
    }

    cout << "Highest value is: " << arr.highest() << endl;
    cout << "Lowest value is: " << arr.lowest() << endl;
    cout << "Average is: " << arr.avg() << endl;

    return 0;
}
