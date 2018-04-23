// Feladat: 
// Lezsák Domonkos
// TODO add_compile_options(-std=c++11 -DDEBUG)

//#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <utility>
#include <limits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
using namespace std;

#ifndef DEBUG
#define cerr if(false) cerr
#endif

#define init(type, id) type id; cin>>id
#define initi(id) int id; cin>>id
#define fe(id, from, to) for (int id=from; id<to; id++)
#define f(id, from, to) for (int id=from; id<to; id++)
#define fh(id, to, from) for (int id=from-1; id>=to; id--)
#define fv(id, v) for (int id=0; id<(int)v.size(); id++)

class NOTFOUND: public exception {};

int i, j, k, l, m, n, o, p, x, y, z;
vector<int> v;

int main(){
#ifndef DEBUG
	ios_base::sync_with_stdio(false);
#endif
	int i=1;
	fe(n, 1, 10000) {
		while (i++<n*n) {
			cout<<" ";
		}
		cout<<"\033[41m#\033[0m";
		i++;
	}
	return 0;
}
