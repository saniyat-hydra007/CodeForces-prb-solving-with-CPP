#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
        char s[100];

        cin>>s;

        int a  = strlen(s);
        sort(s, s+a);

        int count =0;

        for(int i=0; i<a; i++)
        {
                if(s[i] != s[i+1])
                {
                        count++;
                }
        }
        if(count%2==0)
        {
                cout<<"CHAT WITH HER!\n";
        }
        else
        {
                cout<<"IGNORE HIM!\n";
        }

        return 0;
}
