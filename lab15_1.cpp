#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 1; i < N; i++){
		for(int j = 0;j < i;j++){
			if(d[i] > d[j]){
				T A = d[i];
				d[i] = d[j];
				d[j] = A;
			}
		}
		cout << "Pass " << i << ":";
		for(int I = 0; I < N; I++){
			cout << d[I] << " ";
		}
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
