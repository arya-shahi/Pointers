#include<iostream>
using namespace std;

int main() {
    int a;
    a=20;
    int *aptr;
    aptr = &a;

    cout << &a;
    cout << aptr;
    cout << *aptr;

    return 0;


}

/*
0x92343ffd540x92343ffd5420
    */
