#include <iostream>

using namespace std;

int n, k;
int a[100020], ans = 1e9;
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int l = 1, r = 1, cur = a[1];
    while(r <= n){
        while(cur >= k && l < r){
            ans = min(ans, r - l + 1);
            cur -= a[l];
            l++;
        }
        r++;
        if(r > n){
            break;
        }
        cur += a[r];
    }
    cout << ans;
}
