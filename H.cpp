#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
vector<int> getMax(vector<string> &s)
{
  vector<int> mainstack;
  vector<int> maxstack;
  vector<int> result;
  for (const string &i : s)
  {
    if (i[0] == '1')
    {
      int x = stoi(i.substr(2));
      mainstack.push_back(x);
      if (maxstack.empty())
      {
        maxstack.push_back(x);
      }
      else
      {
        maxstack.push_back(max(x, maxstack.back()));
      }
    }
    else if (i[0] == '2')
    {
      mainstack.pop_back();
      maxstack.pop_back();
    }
    else if (i[0] == '3')
    {
      result.push_back(maxstack.back());
    }
  }
  return result;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  cin.ignore(); // Ignore the newline after reading n
  vector<string> vec;
  string line;
  for (int i = 0; i < n; i++)
  {
    getline(cin, line);
    vec.push_back(line);
  }
  vector<int> result;
  result = getMax(vec);
  for (const int &i : result)
    cout << i << "\n";

  return 0;
}