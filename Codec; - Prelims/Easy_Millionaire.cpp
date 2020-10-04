#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;

static int subset[10002];
 
int main(){
    static unsigned n, i;
    static int sum, maximum;
 
        cin>>n;
        
        sum = maximum = i = 0;
 
        for(; i < n; ++i){
            scanf("%d", &subset[i]);
            sum += subset[i];
 
            if(sum < 0)
                sum = 0;
 
            if(sum > maximum)
                maximum = sum;
        }
   
        if(maximum > 0)
            cout<<maximum;
        else
            printf("Losing streak\n");
   
    return 0;
}

