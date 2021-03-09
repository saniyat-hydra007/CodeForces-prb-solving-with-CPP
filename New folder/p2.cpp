#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int SumOfDigits(int n){
        if(n==0) {
                return 0;
        }
        else{
                return (n%10 + SumOfDigits(n/10));
        }
}

int main()
{
        int a;
        scanf("%d", &a);
        int b = SumOfDigits(a);
        printf("%d", b);
        return 0;
}
