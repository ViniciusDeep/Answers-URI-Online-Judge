#include <bits/stdc++.h>

using namespace std;


struct tri {
	int a, b,c;
	tri(){}
	tri(int _a, int _b, int _c){a = _a; b = _b; c = _c; }
	 
};

int k, l[3];
int s[3][205];
int G[3][205][25];
int marca[205][205][205];
int cc[205][205][205];

pair<int, int> BFS() {
	int menor = 1000000, quantidade = 0;
	queue< tri > fila;
	fila.push(tri (0,0,0) );
	memset(marca, 0, sizeof marca);
	memset(marca, 0, sizeof cc);
	cc[0][0][0] = 1;
	
	while(fila.size()) {
		int p1 = fila.front().a;
		int p2 = fila.front().b;
		int p3 = fila.front().c;
		fila.pop();
		if(menor <= marca[p1][p2][p3])break;
	
		for(int i = 1; i <= k;	i++) {
			if(G[0][p1][i]==l[0]+1 or G[1][p2][i]==l[1]+1 or G[2][p3][i]==l[2]+1) {
				menor = marca[p1][p2][p3]+1;
				quantidade += cc[p1][p2][p3];
			}
			if(quantidade)continue;
			int pp1 = G[0][p1][i];
			int pp2 = G[1][p2][i];
			int pp3 = G[2][p3][i];
			
			if(!marca[pp1][pp2][pp3]){
				marca[pp1][pp2][pp3] = marca[p1][p2][p3] + 1;
				cc[pp1][pp2][pp3] = cc[p1][p2][p3];
				fila.push( tri(pp1, pp2, pp3) );
			}else {
				if(marca[pp1][pp2][pp3] == marca[p1][p2][p3] + 1)
					cc[pp1][pp2][pp3] += cc[p1][p2][p3];
			}
		}
		
	}
	
	
	return make_pair(menor, quantidade);
}

int main() {
	cin >> k >> l[0] >> l[1] >> l[2];
		for(int i = 0; i < 3; i++) 
			for(int j = 1; j <= l[i]; i++)
					cin >> s[i][j];
				
		for(int i = 0; i < 3; i++)
			for(int j = 0; j <= l[i]; j++) 
				for(int w = 0; w <= k; w++)
					G[i][j][w] = l[i] + 1;
					
		for (int i = 0; i < 3; i++)
			for(int j = 1; j <= l[i]; j++) 
				for(int w = j-1; w >= 0; w--) {
					G[i][ w ][ s[i][j] ] = j;
					if(s[i][w] == s[i][j]) break;
		}
		pair<int, int> ans = BFS();
		printf("%d %d\n",ans.first, ans.second);
	
	
	
}
