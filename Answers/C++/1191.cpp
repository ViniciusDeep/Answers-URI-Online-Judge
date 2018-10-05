#include <iostream>
#include <string>

using namespace std;

int cur;

void build_tree(string pre, string in, int p, int q){
    if (p > q) return;
    cur++;
    if (p == q){
        cout << in[p];
    }
    else{
        int pos = in.find(pre[cur]);
        build_tree(pre, in, p, pos-1);
        build_tree(pre, in, pos+1, q);
        cout << in[pos];
    }
}

int main(){
    string pre, in;
    while(cin >> pre >> in){
        cur = -1;
        build_tree(pre,in,0,in.size()-1);
        cout << endl;
    }
    return 0;
}
