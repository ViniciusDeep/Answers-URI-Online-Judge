#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sz(x) ((int)(x.size()))
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define EPS 0.00001
#define oo 1000000005 
 main(){
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    string lixo;
    cin >> lixo >> d1 >> h1 >> lixo >> m1 >> lixo >> s1;
    cin >> lixo >> d2 >> h2 >> lixo >> m2 >> lixo >> s2;
    int q1, q2;
    q1 = s1 + m1*60 + h1*60*60 + d1*60*60*24;
    q2 = s2 + m2*60 + h2*60*60 + d2*60*60*24;
    int tempo = q2 - q1;
    printf("%d dia(s)\n", tempo/(60*60*24)); tempo = tempo%(60*60*24);
    printf("%d hora(s)\n", tempo/(60*60)); tempo = tempo%(60*60);
    printf("%d minuto(s)\n", tempo/(60)); tempo = tempo%(60);
    printf("%d segundo(s)\n", tempo);
 
}
