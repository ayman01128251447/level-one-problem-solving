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

  deque<char> st;
  string s;
  cin >> s;
  st.push_back(s[0]);
  int count = 0;
  for (int i = 1; i < s.length(); i++)
  {
    if (!st.empty() && st.back() != s[i] && st.back() == '(')
    {
      st.pop_back();
      count+=2;
    }
    else
    {
      st.push_back(s[i]);
    }
  }
  cout << count ;
  return 0;
}