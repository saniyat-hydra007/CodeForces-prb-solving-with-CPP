#include <iostream>
#include <istream>
using namespace std;
int main ()
{
        int n,p,q,count=0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
                cin >> p;
                cin >> q;
                if(q!=p && q-1!=p)
                {
                        count++;
                }
        }
        cout << count << endl;
        return 0;
}
