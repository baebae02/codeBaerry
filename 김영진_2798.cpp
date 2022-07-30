// ∫Ì∑¢¿Ë
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, M;
    int total=0, sum=0;

    cin >> N >> M;

    int cards[N+1];
    for (int i=0; i<N; i++){
        cin >> cards[i];
    }
    
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            for (int k=j+1; k<N; k++){
                sum = cards[i]+cards[j]+cards[k];
                if (sum>=total && sum <= M) total = sum;
            }
        }
    }

    cout << total;

    return 0;
}