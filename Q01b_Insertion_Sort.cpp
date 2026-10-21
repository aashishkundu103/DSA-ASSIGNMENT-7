// UCS301 Data Structures Lab | Assignment 7
// Insertion sort, O(n^2) worst case.
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

int main(){vector<int>a=read();int n=a.size();for(int i=1;i<n;i++){int key=a[i],j=i-1;while(j>=0&&a[j]>key){a[j+1]=a[j];j--;}a[j+1]=key;}print(a);}
