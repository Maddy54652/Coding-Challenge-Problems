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
    return 0;
}

int runTestCase(void){
    map<int,int,int> route;
    map<int,int,int> locations;
    int r,c,temp,max;
    
    max = 0;
    int k = 0;
    cin>>r;
    cin>>c;
    
    for(int i =0;i<c;i++){
        for(int j = 0;j<r;j++){
            cin>>temp;
            route[j,i]=temp;
            if(temp){
                locations[k] = j,i;
                k++;
            }
        }
    }

    
    return 18;
}
