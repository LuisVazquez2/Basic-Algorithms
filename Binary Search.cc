#include <bits/stdc++.h>
using namespace std;
void BinarySeacrh(vector<int>& current,int Findnumber){
    int low = 0 , top = current.size()-1;
    while(low<=top){
        int mid = (low + top) / 2;
        if(current[mid] == Findnumber){
            cout << "Yes";
            return;
        }
        if(current[low]>Findnumber)
            top = low;
        else
            low = top + 1;
    }
    cout << "No";
}
int main(){
    vector<int> arre{1, 2, 3, 4};
    return 0;
}