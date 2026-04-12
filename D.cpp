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
    int n; cin >> n;
    string s; cin >> s;
    st.push_back(s[0]);
    for(int i =1 ; i<n ; i++){
      if(!st.empty() && st.back() != s[i] && st.back()=='('){
        st.pop_back();
      }
      else{
        st.push_back(s[i]);
      }
    }
    int count =0;
    for(auto i : st){
      if(i==')'){
        count++;
      }
      else{
        break;
      }
    }
    cout << count << "\n";

  }

  return 0;
}