#include<iostream>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        string number;
        string Arr;
        int j=0;
        int ArrNum[10]={};
        while(j<n){
            n=n%10;
            ArrNum[j]=n;
            n/=10;
            j++;
        }
        for(int i=0;i<10;i++){
            cout<<ArrNum[i]<<" ";
        }
        return number;
    }
};

int main(void){
    Solution CountSay;
    int n=3322251;
    CountSay.countAndSay(n);
    return 0;
}