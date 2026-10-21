// UCS301 Data Structures Lab | Assignment 7
// Buy maximum ice creams using a frequency counting array.
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

int main(){int n;long long coins;cin>>n>>coins;vector<int>cost(n);int mx=0;for(int&x:cost){cin>>x;if(x<=0){cout<<"Costs must be positive\n";return 0;}mx=max(mx,x);}vector<int>freq(mx+1);for(int x:cost)freq[x]++;int bought=0;for(int price=1;price<=mx;price++){long long can=min((long long)freq[price],coins/price);coins-=can*price;bought+=(int)can;}cout<<"Maximum bars: "<<bought<<'\n';}
