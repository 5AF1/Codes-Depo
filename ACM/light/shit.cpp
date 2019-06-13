#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
#define pf printf
#define sf scanf
#define loop(i, n) for(i=0; i<(n); i++)
#define MAX  10005
typedef long long ll;

ll fn[MAX];

int main()
{
    int test, kase=0;
    ll i, a, b, c, d, e, f, n;
    cin >> test;
    while(test--)
    {
        cin >> a >> b >> c >> d >> e >> f >> n;

        fn[0] = a; fn[1] = b; fn[2] = c;
        fn[3] = d; fn[4] = e; fn[5] = f;
        for(i=6; i<=n; i++)
        {
            fn[i] = ((fn[i-1] + fn[i-2] + fn[i-3] + fn[i-4] + fn[i-5] + fn[i-6])%10000007 );
        }
        cout << "Case " << ++kase << ": " << (fn[n]%10000007) << endl;
    }
    return 0;
}
