#include<iostream>
using namespace std;
int main(){
    int nums[] = {1,45,64,45,67,54};
    int size = 6;

    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    out << "smallest = " << smallest << endl;

    
}