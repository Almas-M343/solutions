#include <iostream>
#include <time.h>
#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
	int len=nums.size();
	for (int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(nums[i]==nums[j]){
				for(int q=j;q<len-1;q++){
					nums[q]=nums[q+1];
				}
				len--;
				if(nums[i]==nums[j]){
					j--;
				}
			}
		}	
	}
	// for(int i=0;i<len;i++){
	// 	cout<<nums[i]<<" "; 
	// }
	cout<<len;
	return len;
    }
};


class SolutionValue {
public:
    int removeInputDuplicate(vector<int>& nums) {
	int len=nums.size();
	for (int i=0;i<len;i++){
		
		for(int j=i+1;j<len;j++){
			if(nums[i]==nums[j]){
				for(int q=j+1;q<len-1;q++){
					nums[q]=nums[q+1];
				}
				len--;
				if(nums[i]==nums[j]){
					j++;
				}
			}
		}	
		
	}
	for(int i=0;i<len;i++){
		cout<<nums[i]<<" "; 
	}
	// cout<<len;
	return len;
    }
};
int main(void){
SolutionValue test;
srand(time(NULL));
int val=3;
vector<int>nums={0,0,1,1,1,1,2,3,3};
test.removeInputDuplicate(nums);


return 0;
}
