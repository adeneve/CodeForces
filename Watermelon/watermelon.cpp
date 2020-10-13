#include <bits/stdc++.h>
using namespace std;

int main(){
	int w;
	cin >> w;
	
	int max = 100;
	bool foundans = false;
	for(int i = 2; i < max; i += 2){
		for(int j = 2; j < max; j += 2){
			if( i + j == w){
				foundans = true;
			}
		}
	}
	
	if(foundans) {cout << "YES";}
	else { cout << "NO";}
	
	
}