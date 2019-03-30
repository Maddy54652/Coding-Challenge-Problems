#include <iostream>

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
    int n,q,k,l,r;

    k = 300;

    cin >> n;
    cin >> q;

    int LtoR[n];
    int occupied[n];

    for(int i = 0;i<n;i++){
        occupied[n] = 0;
    }

    int g = 0;

    for(int i = 0;i<q;i++){
        int set1,set2;
        cin>>set1;
        cin>>set2;
        if(set1>set2){
            l = set2;
            r = set1;
        }else{
            l = set1;
            r = set2;
        }

        int h = 0;
        for(int j = l;j<r;j++){
            LtoR[j] = 1;
            h++;
            if(occupied[j]){
                g++;
            }else{
                occupied[j]=1;
            }
        }

    }

    return 18;
}
