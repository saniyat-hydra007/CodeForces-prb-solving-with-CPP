#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
        int i;
        int count = 0;
        int count2 = 0;
        char str[100];
        cin >> str;

        for(i=0; i<=strlen(str); i++) {
                if(str[i]>=65&&str[i]<=90)
                {
                        count++;
                }
                else if(str[i]>=97&&str[i]<=122)
                {
                        count2++;
                }
        }

        if(count<count2  || count == count2) {
                for(i=0; i<=strlen(str); i++) {
                        if(str[i]>=65&&str[i]<=90) {
                                str[i]=str[i]+32;
                        }
                }
        }

        else if(count>count2) {
                for(i=0; i<=strlen(str); i++) {
                        if(str[i]>=97&&str[i]<=122)
                                str[i]=str[i]-32;
                }
        }

        cout << str << endl;
        return 0;
}
