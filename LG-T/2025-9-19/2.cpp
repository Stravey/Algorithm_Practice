#include <bits/stdc++.h>
using namespace std;
// T668541 [ÓïÑÔÔÂÈü 202509] ÖìÖíÊ±¿Ì
int main()
{
    int hh,mm;
    cin >> hh >> mm;
    int cur_time = hh * 60 + mm;
    int next_mm;
    if(mm % 5 <= 3) {
        next_mm = mm + (3 - mm % 5);
    } else {
        next_mm = mm + (5 - (mm % 5 - 3));
    }
    int next_time;
    if(next_mm < 60) {
        next_time = hh * 60 + next_mm; 
    } else {
        next_time = (hh + 1) * 60 + (next_mm - 60);
    }
    int dis = next_time - cur_time;
    cout << dis << endl;
    return 0;
}