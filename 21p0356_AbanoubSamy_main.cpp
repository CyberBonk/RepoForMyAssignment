#include <iostream>
using namespace std;

int sum(int a, int b){
    return  a + b;
}

int main() {
    int a = 1, b = 2;
    cout << "a + b is: " << sum(a, b) << endl;
    return 0;
}
