// UCS301 Data Structures Lab | Assignment 7
// Boyer-Moore majority voting, verify if majority exists.
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

int main(){int n;cin>>n;vector<int>a(n);for(int&x:a)cin>>x;if(n==0)return 0;int candidate=0,cnt=0;for(int x:a){if(cnt==0)candidate=x;cnt+=(x==candidate?1:-1);}if(count(a.begin(),a.end(),candidate)>n/2)cout<<candidate<<'\n';else cout<<"No majority\n";}
