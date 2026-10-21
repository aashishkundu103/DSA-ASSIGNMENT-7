// UCS301 Data Structures Lab | Assignment 7
// Bubble sort with early exit.
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

int main(){vector<int>a=read();int n=a.size();for(int i=0;i<n-1;i++){bool swapped=false;for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){swap(a[j],a[j+1]);swapped=true;}if(!swapped)break;}print(a);}
