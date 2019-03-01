#include <iostream>
#include <cstdlib>

#define VLEN 100
#define RANGE 255

typedef int VECTOR[VLEN];

/*
using namespace std;

void printVector(VECTOR v) {
    int i;
    for(i=0; i<VLEN; i++) {
        cout << v[i] << "\n";
    }
}
*/

void generate(VECTOR *v) {
    srand(time(NULL));
    int i;

    for(i=0; i<VLEN; i++) {
        (*v)[i] = rand() % RANGE;
    }
}

void printVector(VECTOR v) {
    int i;
    for(i=0; i<VLEN; i++) {
        std::cout << v[i] << "\n";
    }
}

int main() {
    VECTOR v;
    generate(&v);
    printVector(v);
}