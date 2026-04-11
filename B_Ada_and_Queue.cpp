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

  int t ; cin >> t ; 
  deque<int> q ;
  while(t--){
    string s ; cin >> s ;
    if(s == "back"){
      if(!q.empty()){
        cout << q.back() << "\n" ;
        q.pop_back() ;
      }
      else{
        cout << "No job for Ada?\n" ;
      }
    }
    else if(s == "front"){
      if(!q.empty()){
        cout << q.front() << "\n" ;
        q.pop_front() ;
      }
      else{
        cout << "No job for Ada?\n" ;
      }
    }
    else if(s == "reverse"){  
      reverse(q.begin() , q.end()) ;
    }
    else if (s == "push_back"){
      int x ; cin >> x ;
      q.push_back(x) ;
    }
    else if(s == "toFront"){
      int x ; cin >> x ;
      q.push_front(x);
    }

  }
  return 0;
}