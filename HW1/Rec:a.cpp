#include <iostream>


using namespace std;

bool elec(bool x, bool y, bool z){
    int t = 0, f = 0;
    if(x == true) t++;
    else f++;
     if(y == true) t++;
     else f++;
    if(z == true) t++;
    else f++;
    
    if(t >= f) return true;
    else return false;
}

int main()
{
    bool x, y, z;
    cin >> x >> y >> z;
    cout << elec(x, y, z);
    
    
}
