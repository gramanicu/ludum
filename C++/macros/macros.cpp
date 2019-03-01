#include <iostream>

using namespace std;

#define VLEN 100
#define PI 3.14
#define RADIUS 3
#define LINT long int
#define squared(X) ((X)*(X))
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))

typedef LINT VECTOR[VLEN];

double circleArea(int radius) {
    return  PI * double(squared(radius));
}

void printVector(VECTOR v, int len) {
    int i;
    for(i=0; i<len; i++) {
        cout << v[i] << " ";
    }
    cout<<endl;
}

int main() {
    int n, i;
    VECTOR v;
    cin >> n;
    
    for(i=0; i<n; i++) {
        cin >> v[i];
    }

    for(i=2; i<n; i++) {
        v[i] = min(v[i-1], v[i-2]); 
    }

    printVector(v, n);

    cout << "Area of a circle with a radius of "<< RADIUS << " is " <<circleArea(RADIUS) << endl;

    return 0;
}