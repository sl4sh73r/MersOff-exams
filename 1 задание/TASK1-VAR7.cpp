#include <iostream>
using namespace std;

void fill_array(int* a, int n) {
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
}

int count_neg(int* a, int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) < 0)
        {
            count++;
        }
    }
    return count;
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
    int n, m;

    cout << "n = ";
    cin >> n;

    int* a = new int[n];
    fill_array(a, n);

    cout << "m = ";
    cin >> m;

    int* b = new int[m];
    fill_array(b, m);

    int count_a = count_neg(a, n);
    int count_b = count_neg(b, m);

    cout << "count_neg A = " << count_a << endl;
    cout << "count_neg B = " << count_b << endl;

    if (count_a < count_b) {
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