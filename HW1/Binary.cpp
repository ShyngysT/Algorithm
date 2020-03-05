#include <iostream>

using namespace std;


int ok(int x){

}

int main(){
    int l = 1, r = 1e9;
    while(r - l > 1){
        int mid = (l + r) / 2;
        if(ok(mid)){
            l = mid;
        }
        else {

            r = mid;
        }
    }
    if(ok(r)){
        cout << r;
    }
    else {
        cout << l;
    }
}
