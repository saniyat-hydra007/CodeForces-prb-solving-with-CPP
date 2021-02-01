#include <iostream>
using namespace std;

int main() {
        int a,count=0;
        cin >> a;
        for (int i = 0; i < a; i++) {
                if(i%5 == 0) {
                        count++;
                }
        }
        cout << count << endl;
        return 0;
}
