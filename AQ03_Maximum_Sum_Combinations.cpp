// UCS301 Data Structures Lab | Assignment 7
// Top k pairwise sums with distinct index pairs, max-heap.
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

int main(){int n,k;cin>>n;vector<long long>a(n),b(n);for(auto&x:a)cin>>x;for(auto&x:b)cin>>x;cin>>k;if(n==0||k<=0){cout<<'\n';return 0;}sort(a.rbegin(),a.rend());sort(b.rbegin(),b.rend());priority_queue<tuple<long long,int,int>>pq;set<pair<int,int>>seen;pq.push({a[0]+b[0],0,0});seen.insert({0,0});while(k--&&!pq.empty()){auto [sum,i,j]=pq.top();pq.pop();cout<<sum<<' ';if(i+1<n&&seen.insert({i+1,j}).second)pq.push({a[i+1]+b[j],i+1,j});if(j+1<n&&seen.insert({i,j+1}).second)pq.push({a[i]+b[j+1],i,j+1});}cout<<'\n';}
