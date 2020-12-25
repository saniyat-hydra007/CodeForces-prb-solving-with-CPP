#include <iostream>
using namespace std;

int main() {
        int n,p,v,t,num=0;
        std::cin >> n;
        for(int i=0; i<n; i++) {
                std::cin >> p >> v >> t;
                if (p+v+t>=2) {
                        num++;
                }
        }
        std::cout << num << '\n';
        return 0;
}
