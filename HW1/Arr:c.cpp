#include <iostream>


using namespace std;

int main()
{
    int n, m;
    int max = 0, crn_max = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
   for(int i = 0; i < n; i++){
        crn_max = 0;
        for(int j = 0; j < m; j++){
            crn_max = a[i][j];
        
       if( crn_max > max) {
           max =  crn_max;
       }
            
        }
       
   }
     
    cout << max << "\n";
    for(int i = 0; i < n; i++){
        crn_max = 0;
        for(int j = 0; j < m; j++){
            crn_max = a[i][j];
        
        if(max == crn_max){
            cout << i << " " << j;
            return 0;
        
        }
            
        }
    }
}
