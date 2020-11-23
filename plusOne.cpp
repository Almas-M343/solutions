#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> plusOne(vector<int>& digits) {
    int len=digits.size();
    //len safe length of digits
    //пременная len хранит размер вектора 
            int sum,t=0;
            //sum for classification as hundred(100),10,1. t in near future for save out single number
            //переменную sum использовал для понятия разрадов,на сколько до множить. t для суммирования наших разрядов
            for(int i=0;i<len;i++){
            //start loop 
            //запсуск цикла
            sum=digits[i];
            //тут понятно
            int size=len;
            //for comfotabele working ,add variable size
            //можно было и не добавлять size, это для личного удобства
              for(int j=0;j<size-i-1;j++){
                sum*=10;
                //second loop. Our sum as digits[i] * 10, while  j<size-i-1(e.g 3-0-1,second call:3-1-1,finish:3-2-1)
                //во втором цикле, нашу sum=digits[i] премножаем на 10 ,столько раз,в зависимоти от разряда .(421,мы 4 будем множить 10 и 10 для 400,2*10=20,1)
            }
            t=t+sum;
        }
        t=t+1;
        cout<<"t:"<<t<<" ";
        cout<<endl;
        vector<int>arr;
        while(t){
            int y=0;
            y=y*10+t%10;
            t=t/10;
            arr.push_back(y);
            y++;
        
        }
        // cout<<"digits.size() after:\n"<<digits.size()<<"\n";
        reverse(arr.begin(), arr.end()); 
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        return arr;
    }
};


int main(void){
Solution plusOne;
vector<int>digits;
digits={9,8,7,6,5,4,3,2,1,0};
plusOne.plusOne(digits);

    return 0;
}