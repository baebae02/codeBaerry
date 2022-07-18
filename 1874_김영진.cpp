#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;
int main()
{   
    stack<int> st; //stack
    vector<char> re; //result
    
    int N, num, base; // base: 스택에 넣은 최대값
    bool flag;

    cin >> N;

    // 1번째 시행
    cin >> num; base = num;
    for (int i=1; i<num+1; i++){
        st.push(i);
        re.push_back('+');
    }
    st.pop();
    re.push_back('-');

    // 2~N번째 시행
    int i;
    for (i=0; i<N; i++) {
        cin >> num;
        if (base == N) break;
        if (num>base) {
            for (int j=base+1; j<num; j++){
                st.push(j);
                re.push_back('+');
                base = num;
            }
            st.pop();
            re.push_back('-');
        }
        else {
            if (st.top()==num){
                st.pop();
                re.push_back('-');
            }
            else{
                flag = false;
                break;
            }
        }
        
    }

    if (!st.empty()){
        for (int k=i+1; k<N; k++){
            cin >> num;
            if (st.top()==num){
                st.pop();
                re.push_back('-');
            }
            else{
                flag = false;
                break;
            }
        }
    }

    if (flag){
        for (int i=0; i<re.size(); i++){ 
            cout << re[i] << endl;
        }
    }
    else {
        cout << "NO";
    }
    return 0;

}