#include <iostream>
using namespace std;

void fill_array(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }
}
void print_array(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}
int find_min(int* a, int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (*(a + i) < min) {
            min = *(a + i);
        }
    }
    return min;
}
void change_array(int* a, int n, int min) {
    for (int i = 0; i < n; i++) {
        *(a + i) += min;
    }
}
int main() {
    int n, m;
    cout << "n=";
    cin >> n;
    int* a = new int[n];
    fill_array(a, n);

    cout << "m=";
    cin >> m;
    int* b = new int[m];
    fill_array(b, m);

    print_array(a, n);
    print_array(b, m);

    int min1 = find_min(a, n);
    int min2 = find_min(b, m);

    change_array(a, n, min1);
    change_array(b, m, min2);
    print_array(a, n);
    print_array(b, m);
    delete[] a;
    delete[] b;
}