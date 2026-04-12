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

  int n ; int q ; cin >> n  >> q ;
  vector<int> vec(n);
  for(int i = 0 ; i< vec.size(); i++){
    int x ; cin >> x ; vec[i] = x;
  }
  while(q--){
    int x ; cin >> x ;
    for(int i = 0 ; i < vec.size(); i++){
      if(vec[i]==x){
        cout << i+1 << " ";
        for(int j = i; j > 0 ; j--){
          swap(vec[j],vec[j-1]);
        }
        break;
      }
    }
  }

  return 0;
}