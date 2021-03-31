/**
 * @Author: Saniyat Mushrat Lamim
 * @Date:   01-Feb-2021
 * @Email:  robertarmstrong096@gmail.com
 * @Filename: 41_Translation.cpp
 * @Last modified by:   Saniyat Mushrat Lamim
 * @Last modified time: 28-Mar-2021
 */



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
        reverse(str1.begin(),str1.end()); //A function for reverse a string
        if(str1 == str2) {
                cout << "YES" <<endl;
        }
        else{
                cout << "NO" <<endl;
        }
        return 0;
}
