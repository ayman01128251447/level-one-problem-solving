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
    queue<int> q ;
    while(t--){
        int n ; cin >> n ;
        if(n == 1){
            int x ; cin >> x ;
            q.push(x);
        }
        else if(n == 2){
            if(!q.empty()){
                q.pop();
            }
        }
        else{
            if(!q.empty()){
                cout << q.front() << "\n" ;
            }
            else{
                cout << "Empty!\n" ;
            }
        }
    }

    return 0;
}