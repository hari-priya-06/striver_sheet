#include<iostream>
using namespace std;
void select_sort(int a[], int n) {

  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[min]) {
        min = j;
      }
    }
    int temp = a[min];
    a[min] = a[i];
    a[i] = temp;
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";

}
int main() {
  int a[] = {13,46,24,52,20,9};
  int n = sizeof(a) / sizeof(a[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
  select_sort(a, n);
  return 0;
}