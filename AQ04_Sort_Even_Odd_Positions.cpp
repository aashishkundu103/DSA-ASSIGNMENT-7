// UCS301 Data Structures Lab | Assignment 7
// Even indices ascending, then odd indices descending (0-indexed).
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <climits>
#include <sstream>
#include <cctype>
#include <cmath>
#include <functional>
#include <utility>
#include <tuple>
using namespace std;

int main(){int n;cin>>n;vector<int>even,odd;for(int i=0,x;i<n;i++){cin>>x;if(i%2==0)even.push_back(x);else odd.push_back(x);}sort(even.begin(),even.end());sort(odd.rbegin(),odd.rend());for(int x:even)cout<<x<<' ';for(int x:odd)cout<<x<<' ';cout<<'\n';}
