#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
        int a,num=0;
        std::cin >> a;
        string s;
        std::cin >> s;

        for(int i=0; i<s.size(); i++) {
                if(s[i] == s[i+1]) {
                        num++;
                }
                else
                        continue;
        }
        std::cout << num << '\n';
}
