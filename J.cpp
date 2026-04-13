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

  int t; cin >>t ;
  while(t--){
    int n , m ;cin >> n >> m;
    deque<pair<int,int>>q;
    priority_queue<int>pq;
    for(int i =0 ; i<n ; i++){
      int x ; cin >> x;
      q.push_back({x,i});
      pq.push(x);
    }
    int minutes =0;
    while(!q.empty()){
      if(q.front().first <pq.top()){
        q.push_back(q.front());
        q.pop_front();
      }
      else{
        minutes++;
        if(q.front().second == m){
          cout << minutes << "\n";
          break;
        }
        q.pop_front();
        pq.pop();
      }
    }
    
  }

  return 0;
}