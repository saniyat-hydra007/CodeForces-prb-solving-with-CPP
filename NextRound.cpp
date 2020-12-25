#include <iostream>
using namespace std;

int main() {
        int n,m,max,num=0;
        int a[100];
        std::cin >> n;
        std::cin >> m;
        for(int i=0; i<n; i++) {
                std::cin >> a[i];
                if(i+1 == m) {
                        max = a[i];
                }
        }
        for(int i=0; i<n; i++) {
                if(a[i]>=max && a[i]>0) {
                        num++;
                }
        }
        std::cout << num << '\n';
        return 0;
}
