//
//  bfs.cpp
//  
//
//  Created by Mahfuz Ahmed on 1/3/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";
#define flush std::cout<<flush;

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

#define SIZ 100
vector<int> edges[100];
int dis[100],color[100];
int vertexs,edg;

void bfs(int sources);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    cin>>vertexs>>edg;
    while (edg--) {
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    
    int sources,e;
    cin>>sources>>e;
    
    bfs(sources);
    cout<<dis[e];br;
    
    return 0;
}

void bfs(int sources){
    for (int i=1; i<vertexs; i++) {
        color[i] = 0;
        dis[i] = 1;
    }
    
    color[sources] = 1;
    dis[sources] = 0;
    
    queue<int> q;
    q.push(sources);
    
    while(!q.empty()){
        int u = q.front(); q.pop();
        
        for(int i=0;i<edges[u].size();i++){
            int v = edges[u][i];
            //cout<<v;br;
            if(color[v] == 0){
                color[v] = 1;
                dis[v] = dis[u]+1;
                q.push(v);
            }
        }
        color[u] = 2;
    }
}

/*
 8 10
 1 2
 1 3
 2 4
 3 5
 3 6
 5 6
 5 7
 6 7
 6 8
 7 8
 1 5
 */
