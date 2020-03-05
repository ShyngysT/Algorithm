#include <iostream>


using namespace std;

int main()
{
    int n, m;
    int max= 0, crnt_max = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
   for(int i = 0; i < n; i++){
        crnt_max = 0;
        for(int j = 0; j < m; j++){
           crnt_max += a[i][j];
        }
       if(crnt_max > max) {
           max = crnt_max;
    }
   }
     
    cout << max << "\n";
    for(int i = 0; i < n; i++){
        crnt_max = 0;
        for(int j = 0; j < m; j++){
            crnt_max += a[i][j];
        }
        if(max == crnt_max){
            cout << i ;
            return 0;
        }
    }
}
