#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M, temp, result, max=0;
    vector<int> v;

    cin >> N >> M;
    for(int i = 0; i<N; i++){
        cin >> temp;
        v.push_back(temp);
    }

    for(int i = 0; i<N-2; i++){
        for(int j = i+1; j<N-1; j++){
            for(int k = j+1; k<N; k++){
                result = v[i] + v[j] + v[k];
                if(result > M) continue;
                if(result > max) max = result;
            }
        }
    }

    cout << max;
}
