#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, sum, num, result = 0;

    cin >> N;

    for(int i = 1; i<N; i++){
        sum = i;
        num = i;

        while(true){
            sum += num%10; // 일의 자리부터 더해준다.
            num /= 10;
            if(num == 0) break;
        }

        if(sum == N) {
            result = i;
            break;
        }
    }

    cout << result;
}
