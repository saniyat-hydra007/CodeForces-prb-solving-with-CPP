#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
        while(1)
        {
                int a[100][100], i, j, n;
                std::cin >> n;

                if(n==0)
                        break;
                else
                {
                        for (i = 0; i < n; i++)
                                for (j = 0; j < n; j++)
                                        std::cin >> a[i][j];
                        int x=0,y=0,z=0;
                        for(i=0; i<n; i++)
                        {
                                int c=0;
                                for(j=0; j<n; j++)
                                        c+=a[i][j];
                                if(c%2==1)
                                {
                                        x++;
                                        y=i+1;
                                }
                        }
                        if(x>1)
                        {
                                std::cout << "Corrupt" << '\n';
                                continue;
                        }
                        x=0;
                        for(j=0; j<n; j++)
                        {
                                int c=0;
                                for(i=0; i<n; i++)
                                        c+=a[i][j];
                                if(c%2==1)
                                {
                                        x++;
                                        z=j+1;
                                }
                        }
                        if(x>1)
                        {
                                std::cout << "Corrupt" << '\n';
                                continue;
                        }
                        if(y==0&&z==0)
                                std::cout << "OK" << '\n';
                        else
                                std::cout << "Change bit " << "(" << y << "," << z  << ")" << '\n';
                }
        }
}
