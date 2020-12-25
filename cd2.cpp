#include <iostream>
using namespace std;

int main() {
  string s;
  int n;
  std::cin >> n;
  for(int i=0; i<n; i++){
  std::cin >> s;
  if(s.length()>10){
  std::cout << s[0] <<s.length()-2 << s[s.length()-1]  << endl;
  }
  else{
  std::cout << s << '\n';
  }
}

return 0;
}
