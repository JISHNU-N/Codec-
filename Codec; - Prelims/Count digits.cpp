#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int> cal(int n)
{
    int m,i,j,t,l,len=log10(n);
    char d[16];
    vector<int> pow10(12,1), c(10,0);
    for(i=1; i<12;i++)
        pow10[i]=pow10[i-1]*10;
    sprintf(d, "%d", n);
    m=n+1;
    for(i=0; i<=len; i++) {
        l=d[i]-'0';
        t=(m-1)/pow10[len-i];
        c[l]+=m-t*pow10[len-i]; 
        t/=10;
        j=0;
        while(j<=l-1) {
            c[j]+=(t+1)*pow10[len-i];
            j++;
        }
        while(j<10) {
            c[j]+=t*pow10[len-i];
            j++;
        }
        c[0]-=pow10[len-i]; 
    }
    return c;
}

int main()
{
    int i,x,y;
    while (cin >> x >> y) {
        if (!x&&!y)
            break;
        vector<int> a,b;
        a=cal(--x);
        b=cal(y);
        for (i=0; i<10; i++)
            b[i]-=a[i];
        for (i=0; i<10; i++) {
            if (i)
                cout << ' ';
            cout << b[i];
        }
        cout << '\n';
    }
    return 0;
}
