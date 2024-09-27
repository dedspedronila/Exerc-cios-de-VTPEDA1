#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
//    int i = 0;
//    cout << i << ", ";
//    int *ptr = &i;
//    *ptr = 1;
//    cout << i << ", ";
//    i = 10;
//    cout << *ptr <<endl;
     
    char v = 'I';
    cout << v;
    char *ptr = &v;
    *ptr = 'F';
    cout << v;
    v = 'S';
    cout << *ptr;
    return 0;
}

