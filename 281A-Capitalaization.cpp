#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {

        string s;
        std::cin >> s;

        char ch=toupper(s[0]);
        std::cout << ch;
        for(int i=1; i<s.size(); i++) {
                cout<<s[i];
        }
        return 0;
}
