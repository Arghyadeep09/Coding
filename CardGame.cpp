#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int count_suneet_wins(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;

    // Possible rounds:
    pair<pair<int, int>, pair<int, int>> rounds[4] = {
        {{a1, b1}, {a2, b2}},
        {{a1, b2}, {a2, b1}},
        {{a2, b1}, {a1, b2}},
        {{a2, b2}, {a1, b1}}
    };

    for (int i = 0; i < 4; i++) {
        int suneet_score = 0;
        int slavic_score = 0;

        if (rounds[i].first.first > rounds[i].first.second) {
            suneet_score++;
        } else if (rounds[i].first.first < rounds[i].first.second) {
            slavic_score++;
        }

        if (rounds[i].second.first > rounds[i].second.second) {
            suneet_score++;
        } else if (rounds[i].second.first < rounds[i].second.second) {
            slavic_score++;
        }

        if (suneet_score > slavic_score) {
            suneet_wins++;
        }
    }

    return suneet_wins;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << count_suneet_wins(a1, a2, b1, b2) << endl;
    }
    return 0;
}
