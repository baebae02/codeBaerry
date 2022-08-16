// 주유소
#include <iostream>
#include <vector>

using namespace std;

vector<long long> oil;
vector<long long> dis;

#define MAX 1000000000
int main() {
    long long N, sum=0;
    long long greedy;

    greedy = MAX;

    cin >> N;

    for (int i=0; i<N-1; i++){
        int a;
        cin >> a;
        dis.push_back(a);
    }
    for (int i=0; i<N; i++){
        int b;
        cin >> b;
        oil.push_back(b);
    }

    for (int i=0; i<N-1; i++){
        if (oil[i]<greedy){
            greedy = oil[i];
        }
        cout<<greedy<<endl;
        sum += greedy * dis[i];
    }

    cout << sum;
}