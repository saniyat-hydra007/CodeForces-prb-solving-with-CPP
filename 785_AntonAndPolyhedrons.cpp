/**
 * @Author: Saniyat Mushrat Lamim
 * @Date:   17-May-2021
 * @Email:  robertarmstrong096@gmail.com
 * @Filename: 785_AntonAndPolyhedrons.cpp
 * @Last modified by:   Saniyat Mushrat Lamim
 * @Last modified time: 17-May-2021
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


int main(){
        ll a,count=0;
        string s;
        std::cin >> a;
        for (int i = 0; i < a; i++) {
                std::cin >> s;
                if(s == "Tetrahedron")
                {
                        count = count + 4;
                }
                if(s == "Cube")
                {
                        count = count + 6;
                }
                if(s == "Octahedron")
                {
                        count = count + 8;
                }
                if(s == "Dodecahedron")
                {
                        count = count + 12;
                }
                if(s == "Icosahedron")
                {
                        count = count + 20;
                }
        }
        std::cout << count << '\n';
        return 0;
}
