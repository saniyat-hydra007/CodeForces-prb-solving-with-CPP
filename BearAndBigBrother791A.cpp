#include <iostream>
using namespace std;

int main ()
{
        int a,b;
        cin >>a;
        cin >>b;

        int count = 0;

        while (a <= b)
        {
                a = 3*a;
                b = 2*b;

                count++;
        }

        cout << count << endl;


        return 0;
}
