#include <iostream>
using namespace std;

int main() {
        int a;
        int b;
        int count = 0;
        cin>>a;
        cin>>b;
        while(a>=b) {
                a = a*3;
                b = b*2;
                count++;
        }
        return 0;
}
