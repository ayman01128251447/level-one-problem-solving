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

  while(true){
    int n; cin >> n;
    if(n == 0) break;
    else{
      deque<int>maindeq;
      deque<int>discard;
      for(int i=1; i <= n; i++) maindeq.push_back(i);
      while(maindeq.size()!=1){
        discard.push_back(maindeq.front());
        maindeq.pop_front();
        maindeq.push_back(maindeq.front());
        maindeq.pop_front();
      }
      cout << "\nDiscarded cards: ";
      for(const int& i : discard) cout << i <<", ";
      cout << "\nRemaining card: " << maindeq.front();
    }
  }

  return 0;
}