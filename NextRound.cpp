#include <iostream>
using namespace std;

int main() {
  int n,m,num=0;
  int a[100];
  std::cin >> m;
  std::cin >> n;
  for(int i=0;i<m;i++) {
    std::cin >> a[i];
    if (a[i]>5) {
      num++;
    }
  }
  std::cout << num << '\n';
  return 0;
}
