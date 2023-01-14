/**
 * @Author: Saniyat Mushrat Lamim
 * @Date:   20-Apr-2021
 * @Email:  robertarmstrong096@gmail.com
 * @Filename: arivalOfGeneral.cpp
 * @Last modified by:   Saniyat Mushrat Lamim
 * @Last modified time: 30-Apr-2021
 */
#include "bits/stdc++.h"

using namespace std;
#define el "\n"
#define F first
#define S second
#define PI 3.14159265358979323846  /* pi */
#define FOR(i,a,b) for(int i = a; i <= b; ++i)
#define FORD(i,a,b) for(int i = a; i >= b; --i)
#define RI(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(n)-1)
#define SQR(x) (x)*(x)
#define all(v)    ((v).begin()),((v).end())
#define degreesToRadians(angleDegrees) (angleDegrees * PI / 180.0) // Converts degrees to radians.
#define radiansToDegrees(angleRadians) (angleRadians * 180.0 / PI) // Converts radians to degrees.
typedef long long ll;
typedef pair<int, int>  pii;
typedef pair<ll, ll>  pll;
typedef long double ld;
typedef vector<int>   vi;
typedef vector<ll>    vll;
typedef vector<pii>   vpii;
typedef vector<pll>   vpll;
const double EPS = 1e-9;
const int N = 1e3+2, M = 3e5+5, OO = 0x3f3f3f3f;
// int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; // 4 Direction
// int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1}; // 8 Direction
// int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; // Knight Direction
// int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; // Hexagonal Direction


int main() {

        char arr[100];
        char arr2[100];
        int i,j,count = 0;

        gets(arr);
        strcpy(arr2,arr);
        for (int i = 1; i < strlen(arr); i=i+3) {
                for (int j = 1; j < strlen(arr); j=j+3) {
                        if (arr[i] == arr[j]) {
                                break;
                        }
                        else{
                                count++;
                        }
                }
        }
        std::cout << count << '\n';
        return 0;
}
