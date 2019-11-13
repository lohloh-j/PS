#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int input = 0, a=0, b=0;
    cin >> input;
    for(int i=1; i<=input; i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << endl;
    }
}
