#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    int T; cin >> T;
    for(int i=1; i<=T; i++){
        int N,K;
        cin >> N >> K;
        string s; cin >> s;
        int diff=0;

        for(int i=0; i<N-i-1; i++){
            if(s[i] != s[N-i-1]) diff++;
        }

        int answer = K-diff;
        if(answer<0) answer = -answer;
        printf("Case #%d: %d\n",i, answer);
    }
    return 0;
}