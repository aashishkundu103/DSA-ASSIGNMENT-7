// UCS301 Data Structures Lab | Assignment 7
// Improve selection sort: place min left and max right per pass.
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

void print(const vector<int>&a){for(int x:a)cout<<x<<' ';cout<<'\n';}
vector<int>read(){int n;cin>>n;vector<int>a(n);for(int&x:a)cin>>x;return a;}

int main(){vector<int>a=read();int n=a.size();for(int l=0,r=n-1;l<r;l++,r--){int lo=l,hi=l;for(int i=l;i<=r;i++){if(a[i]<a[lo])lo=i;if(a[i]>a[hi])hi=i;}swap(a[l],a[lo]);if(hi==l)hi=lo;swap(a[r],a[hi]);}print(a);}
