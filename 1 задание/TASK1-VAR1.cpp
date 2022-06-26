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
    int sum = 0;
    for (int i = 0; i < n; i++) {
            sum += *(a + i);
    }
    return sum;
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

    int sum1 = find_min(a, n);
    int sum2 = find_min(b, m);

    if (sum1 < sum2) {
        print_array(a, n);
        print_array(b, m);
    }
    else {
        print_array(b, m);
        print_array(a, n);
    }
    delete[] a;
    delete[] b;
}
