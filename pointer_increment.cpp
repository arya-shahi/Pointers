
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    float b = 10.90; 
    char ch;
    bool boo;

    //for integer
    cout << "for integer:-" << endl;
    int *aptr = &a;
    cout <<  "before incrementation - " << aptr << endl ;

    aptr++;
    cout << "after incrementation - " << aptr << endl;
    cout << *aptr << endl;

    //for float
    cout << "for float:-" << endl;
    float *bptr = &b;
    cout << "before incrementation - " << bptr << endl;

    bptr++ ;
    cout << "after incrementation - " << bptr << endl;
    cout << *bptr << endl;

    //for bool
    cout << "for bool:- " << endl;
    bool *dbool = &boo;
    cout << "before incrementation - " << dbool << endl;

    dbool++ ;
    cout << "after incrementation - "<< dbool << endl ;
    cout << *dbool << endl ;


    

    return 0;
}


/*
for integer:-
before incrementation - 0xf6c2fffe14
after incrementation - 0xf6c2fffe18
67
for float:-
before incrementation - 0xf6c2fffe10
after incrementation - 0xf6c2fffe14
1.4013e-44
for bool:-
before incrementation - 0xf6c2fffe0f
after incrementation - 0xf6c2fffe10
102
    */
