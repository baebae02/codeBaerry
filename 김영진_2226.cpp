// 팩토리얼
#include <iostream>

using namespace std;

int main() {
    int N;
    int result=1;

    cin >> N;

    if (N==0) cout << 1;
    else {
        for (int i=1; i<=N; i++){
            result *= i;
        }
        cout << result;
    }
}