#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    map<int, list<int>> grp;

    void creategraph(int u, int v, bool direction)
    {
        // if direction==0, undirected graph
        // else directed graph
        grp[u].push_back(v);
        if (direction == 0)
            grp[v].push_back(u);
    }
    void printgraph()
    {
        for (auto i : grp)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
                cout << j << " ";

            cout << endl;
        }
    }
};

int main()
{
     graph g1;
     int m;cin>>m;
     for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        g1.creategraph(u,v,0);
     }
     g1.printgraph();
    return 0;
}