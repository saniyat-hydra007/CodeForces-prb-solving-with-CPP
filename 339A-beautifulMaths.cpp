#include <iostream>
#include <algorithm>
#include <cstring>
# include <string>
using namespace std;

int main() {
        char s[100];
        char s2[100] = {' '};
        int j=0;
        std::cin >> s;

        for(int i=0; i<=strlen(s); i++) {
                if(i%2 == 0)
                {
                        s2[j]=s[i] + '\0';
                        j++;
                }
        }
        int a = strlen(s2);
        sort(s2, s2+a);

        for(int i=0; i<a; i++) {
                std::cout << s2[i];
                if(i == a-1) {
                        break;
                }
                else{
                        std::cout << "+";
                }
        }
        return 0;
}
