#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define iPair pair<int, int>

struct Graph
{
    ll V, E;
    vector< pair<int, iPair> > edges;
    Graph(ll V, ll E)
    {
        this->V = V;
        this->E = E;
    }

    void addEdge(int u, int v, int w)
    {
        edges.push_back({w, {u, v}});
    }
    int kruskalMST();
};

struct DisjointSets
{
    int *parent, *rnk;
    int n;

    DisjointSets(int n)
    {
        this->n = n;
        parent = new int[n+1];
        rnk = new int[n+1];


        for (int i = 0; i <= n; i++)
        {
            rnk[i] = 0;
            parent[i] = i;
        }
    }


    int find(int u)
    {
        if (u != parent[u])
            parent[u] = find(parent[u]);
        return parent[u];
    }

    void merge(int x, int y)
    {
        x = find(x), y = find(y);


        if (rnk[x] > rnk[y])
            parent[y] = x;
        else
            parent[x] = y;
        if (rnk[x] == rnk[y])
            rnk[y]++;
    }
};


int Graph::kruskalMST()
{
    ll mst_wt = 0;
    sort(edges.begin(), edges.end());

    DisjointSets ds(V);

    vector< pair<int, iPair> >::iterator it;
    for (it=edges.begin(); it!=edges.end(); it++)
    {
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);

        if (set_u != set_v)
        {
            mst_wt += it->first;
            ds.merge(set_u, set_v);
        }
    }

    return -1*mst_wt;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,d,ans =0;
    cin>>n>>d;

    vector<vector<ll>> a(n,vector<ll>(d));

    for(int i=0;i<n;i++)
        for(int j=0;j<d;j++)
            cin>>a[i][j];


    ll E=0,V=n;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
            E++;
    }

    Graph g(V,E);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll dist=0;
            for(int k=0;k<d;k++)
            {
                dist+= abs(a[i][k]-a[j][k]);
            }
            dist=-1*dist;
            g.addEdge(i,j,dist);
        }
    }


    cout<<g.kruskalMST()<<"\n";
    return 0;
}
