#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& v, int left, int right) {
    int i = left;
    int pivot = v[right];
    for (int j = left; j < right; ++j) {
        if (v[j] < pivot) {
            swap(v[i++],v[j]);
        }
    }
    swap(v[i],v[right]);
    return i;
}

void quick_sort(vector<int>& v, int left, int right) {
    if (left >= right)
        return;
    int pivot = partition(v,left,right);
    quick_sort(v,left,pivot-1);
    quick_sort(v,pivot+1,right);
}


int main() {
    vector<int> v = {1,3,8,6,1,2,9,3,2,7,5,3,0,-1,-3,5,10};
    quick_sort(v,0,v.size());
    for (auto & x : v)
        cout << x << " ";
    cout << endl;
}