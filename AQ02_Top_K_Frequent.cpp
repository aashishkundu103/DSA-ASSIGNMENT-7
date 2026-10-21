// UCS301 Data Structures Lab | Assignment 7
// Top k by descending frequency, then descending value.
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

int main(){int n,k;cin>>n;map<int,int>freq;for(int i=0,x;i<n;i++){cin>>x;freq[x]++;}cin>>k;vector<pair<int,int>>v;for(auto [x,f]:freq)v.push_back({x,f});sort(v.begin(),v.end(),[](auto a,auto b){if(a.second!=b.second)return a.second>b.second;return a.first>b.first;});for(int i=0;i<min(k,(int)v.size());i++)cout<<v[i].first<<' ';cout<<'\n';}
