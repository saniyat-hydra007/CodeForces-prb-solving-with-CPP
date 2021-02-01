#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
        int a,count1=0,count2=0;
        char c[100000];
        cin >> a;
        cin >> c;

        for (int i = 0; i < a; i++)
        {
                if(c[i] == 'A') {
                        count1++;
                }
                if(c[i] == 'D') {
                        count2++;
                }
        }
        if(count1 > count2) {
                cout << "Anton" << endl;
        }
        else if(count1 < count2) {
                cout << "Danik" << endl;
        }
        else if(count1 == count2) {
                cout << "Friendship" << endl;
        }

        return 0;
}
