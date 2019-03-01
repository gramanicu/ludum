#include <iostream>

using namespace std;

void incrementBad(int a) {
    a = a+1;
}

void incrementGood(int *a) {
    *a = *a+1;
}

void vectorChangeBad(int *a, int n) {
    int i;
    for(i = 0; i < n; i++) {
        a[i] = a[i] + 1;
    }
}

void vectorChangeGood(int *a, int n) {
    int i;
    for(i = 0; i < n; i++) {
        a[i] = a[i] + 1;
    }
}


void printVector(int *a, int n) {
    int i;
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int v[10], i, a;
    cin >> a;

    for(i=0; i<10; i++) {
        v[i] = i;
    }

    incrementBad(a);
    cout << a << endl;
    incrementGood(&a);
    cout << a << endl;
    vectorChangeBad(v, 10);
    printVector(v, 10);

    return 0;
}