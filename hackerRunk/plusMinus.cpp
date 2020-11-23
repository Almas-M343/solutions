#include <iostream>
#include <vector>

using namespace std;


// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    double len=arr.size();
    double zeroCount=0;
    double posCount=0;
    double negCount=0;
for(int i=0;i<arr.size();i++){
    if(arr[i]==0){
        zeroCount=zeroCount+1;
    }
    if(arr[i]>0 && arr[i]<10){
        posCount=posCount+1;
    }
    if(arr[i]<0){
        negCount=negCount+1;
    }
}
posCount=posCount/len;
negCount=negCount/len;
zeroCount=zeroCount/len;
cout<<posCount<<"\n";
cout<<negCount<<"\n";
cout<<zeroCount;



}

int main()
{
    int n=100;
    vector<int>arr;
    arr={
        -100 100 0 0 0 -100 100 0 -100 100 100 0 0 0 0 -100 -100 -100 0 -100 0 100 100 -100 -100 100 100 100 100 -100 -100 -100 -100 100 0 0 100 0 0 -100 -100 -100 -100 -100 -100 100 100 0 100 100 -100 -100 -100 0 100 -100 0 100 100 -100 100 -100 0 -100 -100 100 0 0 -100 0 -100 -100 100 -100 100 0 100 -100 -100 -100 100 100 100 100 0 -100 0 100 100 100 0 -100 -100 0 0 100 0 -100 100 100
    }

    plusMinus(arr);

    return 0;
}

