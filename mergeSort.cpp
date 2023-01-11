#include<bits/stdc++.h>

using namespace std;

vector<int>mergeSort(vector<int>arr)
{
    for(int i=1;i<arr.size();i++){
        int idx=i;
        while(idx >= 1){
            if(arr[idx] < arr[idx-1]){
                swap(arr[idx],arr[idx-1]);
                sorted=false;
            }
            idx--;
        };
    };
    return arr;
}
int main()
{
    vector<int>arr={5,1,4,3,7,2};
    vector<int>ans=mergeSort(arr);
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
    return 0;
}
