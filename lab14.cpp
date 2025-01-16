#include <iostream>
using namespace std;

// Class template for Pair
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Set the pair values
    void setValues(T1 f, T2 s) {
        first = f;
        second = s;
    }

    // Get the pair values
    void getValues() const {
        cout << "First: " << first << ", Second: " << second << endl;
    }

    // Swap the values
    void swapValues() {
        T1 temp = first;
        first = second;
        second = temp;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);
    cout << "Initial values:" << endl;
    p1.getValues();

    cout << "\nAfter swapping:" << endl;
    p1.swapValues();
    p1.getValues();

    Pair<string, char> p2("Hello", 'X');
    cout << "\nInitial values:" << endl;
    p2.getValues();

    cout << "\nAfter swapping:" << endl;
    p2.swapValues();
    p2.getValues();

    return 0;
}
