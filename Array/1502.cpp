#include<iostream>
#include<vector>
using namespace std;
bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size()==2) return true;
        sort(arr.begin(), arr.end());
        for(int i = 0 ; i< arr.size()-2; i++){
            if(arr[i+1]-arr[i]!=arr[i+2]-arr[i+1]){
                return false;
            }
        }
        return true;
    }
int main()
{
    vector<int> arr ={13,12,-12,9,9,16,7,-10,-20,0,18,-1,-20,-10,-8,15,15,16,2,15};
    cout<<canMakeArithmeticProgression(arr);
}
