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
int find_max(int* a, int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (*(a + i) > max) {
            max = *(a + i);
        }
    }
    return max;
}
void change_array(int* a, int n, int max) {
    for (int i = 0; i < n; i++) {
        *(a + i) -= max;
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

    int max1 = find_max(a, n);
    int max2 = find_max(b, m);

    change_array(a, n, max1);
    change_array(b, m, max2);
    print_array(a, n);
    print_array(b, m);
    delete[] a;
    delete[] b;
}