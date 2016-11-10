#include <iostream>
using namespace std;
class Array {
private:
	int MaxSize;
	int A[20];
	int Size;
public:
	Array() // constructor
	{
		MaxSize = 20;
		Size = 0;
	}
	void Read_Array();
	void Display(); // Traverse_Forward()
	void Traverse_Backward();
	void Insert(int Location, int Element);
	void Delete(int Location);
	int Search(int Element);
};
void Array::Read_Array() {
	int i, N;
	cout << "Enter size of array";
	cin >> N;
	if (N > MaxSize) {
		cout << "Array of this size cannot be created";
		cout << "Maximum size is" << MaxSize;
		return;
	} else {
		for (i = 0; i < N; i++) {
			cin >> A[i];
		}
		Size = N;
	}
}
void Array::Display() {
	int i;
	for (i = 0; i < Size; i++)
		cout << A[i] << "\t";
	cout << endl;
}
void Array::Traverse_Backward() {
	int i;
	for (i = Size - 1; i >= 0; i--)
		cout << A[i] << "\t";
	cout << endl;
}
int Array::Search(int Element) {
	int i;
	for (i = 0; i < Size - 1; i++) {
		if (Element == A[i])
			return (i);
	}
	return (-1);
}
