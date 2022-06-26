#include <iostream>
using namespace std;

void fill_array(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }
}

int count_less_t(int* a, int n, int t) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(a + i) > t) {
            count++;
        }
    }
    return count;
}

void print_array(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}

int main() {
    int n, m, t;

    cout << "n= ";
    cin >> n;
    int* a = new int[n];
    fill_array(a, n);

    cout << "m= ";
    cin >> m;
    int* b = new int[m];
    fill_array(b, m);

    cout << "t= ";
    cin >> t;

    int count_a = count_less_t(a, n, t);
    int count_b = count_less_t(b, m, t);

    cout << "count_less_t A = " << count_a << endl;
    cout << "count_less_t B = " << count_b << endl;

    if (count_a < count_b) {
        print_array(b, m);
        print_array(b, m);

    }
    else {
        print_array(b, m);
        print_array(a, n);
    }
    delete[] a;
    delete[] b;
}