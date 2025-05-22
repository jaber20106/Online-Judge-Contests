#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int total = n * m;
        int ans = 0;

        if(k == 0){
            ans = total;
        }

        for(int i = 1; i < n; i++){
            int part1 = i * m;
            int part2 = (n - i) * m;
           
            if(part1 >= k) ans = max(ans, part2);
           
            if(part2 >= k) ans = max(ans, part1);
        }

       
        for(int j = 1; j < m; j++){
            int part1 = j * n;
            int part2 = (m - j) * n;
            if(part1 >= k) ans = max(ans, part2);
            if(part2 >= k) ans = max(ans, part1);
        }

      
        if(total >= k) ans = max(ans, 0);

        cout << ans << endl;
    }
}
