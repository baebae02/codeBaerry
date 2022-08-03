#include <iostream>

using namespace std;

int fact(int N){
    if(N == 0 || N == 1) return 1;

    return N * fact(N-1);
}
int main(){
    int N;

    cin >> N;
    int result = fact(N);
    cout << result;

    return 0;
}
