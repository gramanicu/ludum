#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int *v;
    int n, i; 
    cout << "Numar de elemente : ";
    cin >> n;
    cout << "Introduceti elementele: ";
    v = (int*)calloc(n, sizeof(int));

    for(i = 0; i < n; i++) {
        cin >> v[i];
    }

    v = (int*)realloc(v, n * 2 * sizeof(int));

    memcpy(v + n, v , n  * sizeof(int));


    for(i = 0; i<n*2; i++) {
        cout << v[i] << " ";
    } 
    cout << endl;

    free(v);
    return 0;
}