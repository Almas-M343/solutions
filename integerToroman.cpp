// Input: num = 58
// Output: "LVIII"
// Explanation: L = 50, V = 5, III = 3.
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string a="a";
        map<int,char>roman;
        // roman={
        //     {1,'I'},
        //     {2,'II'},
        //     {3,'III'},
        //     {4,'IV'},
        //     {5,'V'},
        //     {10,'X'},
        //     {50,'L'},
        //     {100,'C'},
        //     {500,'D'},
        //     {1000,'M'},
        // };
    int count=1;
    while((num=num/10)>0){
        count=count+1;
    }
    int c=count;
    // cout<<"count:"<<count;

    while(num){
        int x=num%10;
        num=num/10;
        for(int i=0;i<c-i-1;i++){
            x=x*10;
            c=c+1;
        }
        cout<<"x:"<<x<<" ";
    }
     return a;
    }
};

int main(void){
Solution TEST;
TEST.intToRoman(58);

    return 0;
}