#include<bits/stdc++.h>
using namespace std;
int finding_wins_and_draws(series):
    int a[3]
    a[0] = 0
    a[1] = 0
    chances = 0
    for(i = 0 ; i < series.size() ; i++
        if (series[i] == 'S' and series[i+1] == 'P') or (series[i] == 'P' and series[i+1] == 'R') or (series[i] == 'R'  and series[i+1] == 'S'):
            a[0] += 1
        elif series[i] == series[i+1]:
            a[1] += 1
        a[2] += 1
    return a
    
int main(){
    string series;
    cin >> series;

    a=finding_wins_and_draws(series)
    loses = a[2] - a[0] - a[1]
    
    print("+");
    print(wins)
    print(",-");
    print(loses);
    print(",=");
    print(draws);
    }