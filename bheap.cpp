#include<bits/stdc++.h>
using namespace std;

class bheap
{   int n=0;
    vector<int> v;
   public:
    bheap()
    {
        v.push_back(0);
    }
    int getsize()
    {
        return v.size();
    }
    void insert()
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
        n++;
        swim(n);
    }
    void sink(int k)
    {
        while(k*2 <= n)
        {
            int j=k*2;
            if(j<n && v[j]<v[j+1])
                j++;
            if(k>=j)
                break;
            swap(v[k],v[j]);
            k=j;
        }
    }
    void swim(int k)
    {
        while(k>1 && v[k/2]<v[k])
        {
            swap(v[k/2],v[k]);
            k=k/2;
        }
    }
    int del()
    {
        if(v.empty())
        {
            cout<<"Empty tree\n";
            v.push_back(0);
            return 0;
        }
        int mx=v[1];
        swap(v[1],v[n]);
        v.erase(v.begin()+n);
        n--;
        sink(1);
        return mx;

    }
    void show()
    {
        cout<<"Current Heap:\n";
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

};

int main()
{
    bheap b;
    unsigned int x,q;
    do{
        cout<<"Binary Heap\n1.Insert\n2.Delete Maximum\n3.Show Heap\n4.Exit\n";
        cin>>x;
        switch(x)
        {
            case 1 :    b.insert();
                        break;
            case 2 :    q=b.del();
                        if(q)
                            cout<<"Deleted "<<q<<"\n";
                        break;
            case 3 :    b.show();
                        break;
            case 4 :    cout<<"Exited\n";
                        break;
            default:    cout<<"Invalid digit entered. Exiting";
        }
    }while(x<4);
    return 0;
}
