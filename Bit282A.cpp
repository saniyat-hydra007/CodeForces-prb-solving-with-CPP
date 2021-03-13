#include <iostream>
using namespace std;

int main() {
        int a;
        string s[4] ={"X++","X--","++X","--X"};
        string s1;
        int num=0;
        std::cin >> a;
        for(int i=0; i<a; i++) {
                std::cin >> s1;
                if(s1 == s[0] ||s1 == s[2] ) {
                        num++;
                }
                else if(s1 == s[1] || s1 == s[3]) {
                        num--;
                }
        }
        std::cout << num << '\n';
        return 0;
}
