// UCS301 Data Structures Lab | Assignment 7
// Stable merge sort, O(n log n).
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

void mergeSort(vector<int>&a,int l,int r){if(r-l<=1)return;int m=(l+r)/2;mergeSort(a,l,m);mergeSort(a,m,r);vector<int>b;int i=l,j=m;while(i<m&&j<r)if(a[i]<=a[j])b.push_back(a[i++]);else b.push_back(a[j++]);while(i<m)b.push_back(a[i++]);while(j<r)b.push_back(a[j++]);copy(b.begin(),b.end(),a.begin()+l);}
int main(){vector<int>a=read();mergeSort(a,0,a.size());print(a);}
