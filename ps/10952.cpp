#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int a = -1,b = -1;
    while((cin >> a >> b) && !(a == 0 && b == 0)) {
        cout << a + b << endl;
    }
}
