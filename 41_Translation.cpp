#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
        string str1;
        string str2;
        cin >> str1;
        cin >> str2;
        reverse(str1.begin(),str1.end());
        if(str1 == str2) {
                cout << "YES" <<endl;
        }
        else{
                cout << "NO" <<endl;
        }
        return 0;
}
