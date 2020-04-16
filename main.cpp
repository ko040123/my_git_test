#include "sorting.h"

using namespace std;

int sorted[10];
int arr[10];

int N = 10;
int main(){
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    merge_sort(arr, 0, N-1);

    for(int i = 0; i < N; i++){
        cout << sorted[i] << " ";
    }
    cout << endl;
    return 0;
}