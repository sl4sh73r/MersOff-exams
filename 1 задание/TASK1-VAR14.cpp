#include <iostream>
using namespace std;

void fill_array(int* a, int n) {
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
}
int finder_less(int* a, int n) {
    int less = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) < less) {
            less = *(a + i);
        }
    }
    return less;
}

void change_array(int* a, int n, int less) {
    for (int i = 0; i < n; i++) {
        *(a + i) *= less;
    }
}
void print_array(int* a, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }

    cout << endl;
}

int main()
{
    int m, n;
    cout << "n =";
    cin >> n;
    int* a = new int[n];
    fill_array(a, n);

    cout << "m=";
    cin >> m;
    int* b = new int[m];
    fill_array(b, m);

    cout << "Array A" << endl;
    print_array(a, n);

    cout << "Array B" << endl;
    print_array(b, m);

    int less_array_1 = finder_less(a, n);
    int less_array_2 = finder_less(b, m);

    change_array(a, n, less_array_1);
    change_array(b, m, less_array_2);

    cout << "new Array A" << endl;
    print_array(a, n);

    cout << "new Array B" << endl;
    print_array(b, m);

    delete[] a;
    delete[] b;
}