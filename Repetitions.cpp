#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	string s; 
	cin >>s;
	ll l = s.length();
	char c;
	ll count , max =1;
 
	for( ll i= 0 ; i < l-1 ;)
	{
		c = s.at(i);
		count =1; 
		for(ll j=i +1 ;j <l ;j++)
		{
			if (c == s.at(j))++count;
			else break;
		}
		if(count >= max) max =count ;
 
		i  += count;
	}
	cout << max;
	return 0;
}
