#include <iostream>
#define int long long
using namespace std;

void test_case(){
    int k;
    cin >> k;

    int numb = 9;
    int skipped = 0;
    for(int len = 1; true; len++){
        if(k > numb*len){
            k -= numb*len;
            skipped += numb;
        }
        else{
            int skip = (k-1)/len;
            skipped += skip;
            k -= skip*len;

            int out = skipped+1;
            cout << to_string(out)[k-1] << endl;
            return;
        }
        numb *= 10;
    }
}

signed main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        test_case();
    }

    return 0;
}