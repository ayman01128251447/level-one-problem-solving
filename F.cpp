#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    deque<char> st;
    string s; cin >> s;
    st.push_back(s[0]);
    for(int i =1 ; i<s.length() ; i++){
      if(!st.empty() && st.back()!=')' && s[i]!='('){
        st.pop_back();
      }
      else{
        st.push_back(s[i]);
      }
    }
    if(st.empty()) cout << "YES\n";
    else{
      cout << "NO\n";
    }

  }

  return 0;
}