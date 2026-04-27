#include <iostream>
#include <cmath>
using namespace std;

// Forward declaration
class BelahKetupat;

class LayangLayang {
private:
    float d1, d2; // diagonal
    float s1, s2; // sisi

public:
    void input() {
        cout << "=== Layang-Layang ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        