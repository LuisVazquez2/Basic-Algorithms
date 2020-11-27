#include <bits/stdc++.h>
using namespace std;
void BinarySearch(vector<int>& current,int Findnumber){
    int low = 0 , top = current.size()-1;
    while(low <= top){
        int mid = (low + top) / 2;
        if(current[mid] == Findnumber){
            cout << "Yes";
            return;
        }
        if(current[mid] > Findnumber)
            top = mid - 1;
        else
            low = mid + 1;
    }
    cout << "No";
}
int main(){
    vector<int> arre{1, 2, 3, 4, 6 ,7};
    int num;
    cin >> num;
    BinarySearch(arre,num);
    return 0;
}