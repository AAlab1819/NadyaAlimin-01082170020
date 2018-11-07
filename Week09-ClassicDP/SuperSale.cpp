#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N, P, W, G, MW, Ans(0);
        int DP[31] = {};
        cin>>N;
        for(int i = 0; i < N; i++)
        {
            cin>>P>>W;
            for(int j = 30; j >= W; j--)
                if(DP[j] < DP[j-W]+P)
                    DP[j] = DP[j-W]+P;
        }
        cin>>G;
        while(G--)
        {
            cin>>MW;
            Ans += DP[MW];
        }
        cout<<Ans<<endl;
    }
    return 0;
}
