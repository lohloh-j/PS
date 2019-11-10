#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int input =0, a=0, b=0;
    cin>>input;
    for(int i=0; i<input; i++){
        cin >> a >> b;
        cout << a+b <<endl;
    }
    return 0;
}