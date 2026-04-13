#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t ; cin >> t ;
  while(t--){
    string s; cin >> s;
    int open_square = 0;
    int open_tuple = 0;
    int count = 0;
    for(int i = s.size()-1 ; i>=0 ;i--){
      if(s[i]==')'){
        open_tuple++;
      }
      else if(s[i]==']') {
        open_square++;
      }
      else if(s[i]=='('){
        if(open_tuple>0){
          open_tuple--;
          count++;
        }
      }
      else if(s[i]=='['){
        if(open_square>0){
          open_square--;
          count++;
        }
      }
    }

    cout << count << "\n";

  }

  return 0;
}