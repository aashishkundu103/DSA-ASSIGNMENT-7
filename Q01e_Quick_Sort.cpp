// UCS301 Data Structures Lab | Assignment 7
// Quicksort with middle-element pivot and 2-way partition.
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

void quick(vector<int>&a,int l,int r){int i=l,j=r;int pivot=a[l+(r-l)/2];while(i<=j){while(a[i]<pivot)i++;while(a[j]>pivot)j--;if(i<=j)swap(a[i++],a[j--]);}if(l<j)quick(a,l,j);if(i<r)quick(a,i,r);}
int main(){vector<int>a=read();if(!a.empty())quick(a,0,(int)a.size()-1);print(a);}
