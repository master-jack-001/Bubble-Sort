#include<iostream>
using namespace std;
void bubble(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:";
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    bubble(arr, n);

    cout << "Sorted array:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;

}