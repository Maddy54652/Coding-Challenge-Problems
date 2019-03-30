#include <iostream>
#include<map>

using namespace std;

int runTestCase(void);

int main() {
    int t;
    cin >> t;
    int testCases[t];
    for(int i = 0;i<t;i++){
        testCases[i] = runTestCase();
    }
    for(int j = 0;j<t;j++){
        cout<<"Case #"<<j+1<<": "<<testCases[j]<<endl;
    }
    return 0;
}

int runTestCase(void){
    int n,p,s;
    int max = 0;
    s = 0;
    cin>>n;
    int skills[n];
    cin>>p;

    for(int i = 0;i<n;i++){
        cin>>skills[i];

        if(i < p &&skills[i] > max) {
            max = skills[i];

        }
    }

    for(int j = 0;j<p;j++){
        s+= max - skills[j];
    }

    return s;
}
