# include <iostream>
#include <vector>
using namespace std;

int main()
{
        int c;
        cin >> c;
        while (c--)
        {
                int n, k;
                cin >> n >> k;
                vector <int> res;
                for (int i = k + 1; i <= n; i++)
                        res.push_back(i);
                for (int i = 1; i <= k / 2; i++)
                        res.push_back(k - i);
                cout << res.size() << '\n';
                for (auto x : res)
                        cout << x << ' ';
                cout << '\n';
        }
}
