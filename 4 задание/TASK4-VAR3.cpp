#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
class Generator {
private:
    int N;
    T* gen_array;
    T* change_array;
public:
    Generator(int n) {
        N = n;
        gen_array = new T[N];
        change_array = new T[N];
    }
    void task() {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += *(gen_arrray + i);
            *(change_array + i) = fabs(sum);
        }
    }
    void init() {
        for (int i = 0; i < N; i++) {
            cin >> *(gen_array + i);
        }
    }
    void print() {
        for (int i = 0; i < N; i++) {
            cout << *(change_array + i) << " ";
        }
        cout << endl;
    }
    ~Generator() {
        delete[] gen_array;
        delete[] change_array;
    }
};
int main() {
    int n1;
    cin >> n1;

    Generator<int>g1(n1);
    g1.init();
    g1.task();
    g1.print();
}