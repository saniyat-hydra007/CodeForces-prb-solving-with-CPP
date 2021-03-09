#include <iostream>
using namespace std;
int main ()
{
        int n,h,p,count=0;
        cin >> n;
        cin >> h;
        for (int i = 0; i < n; i++)
        {
                cin >> p;
                if(p > h)
                {
                        count = count+2;
                }
                else
                        count++;

        }
        cout<<count<<endl;
        return 0;
}
