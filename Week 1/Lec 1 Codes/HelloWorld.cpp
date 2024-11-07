#include<iostream>
using namespace std;
int add(int, int);

int main() {
    int a;
    cout<<"Hello World"<<endl;
    a=add(5, 6);
    cout<<"Addition :"<<a;
    return 0;
}

int add(int a, int b) {
    return a+b;
}
