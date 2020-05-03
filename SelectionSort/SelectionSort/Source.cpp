#include<iostream>
using namespace std;


//int RangeMinI(int A[], int si, int ei)
//{
//	int mini = si, min = A[si],c=0;
//	for (int i = si+1; i < ei; i++)
//	{
//		if (A[i] < min)
//		{
//			min = A[i];
//			mini=i;                                              //int A[5] = { 6,5,4,3,2 };
//		}
//	}
//	return mini;
//	
//}
//void SelectionSortForint(int A[], int Size)
//{
//	int c = 0;
//	for (int i = 0; i < Size; i++)
//	{
//		c=RangeMinI(A, i, Size);
//		swap(A[i], A[c]);
//	}
//}
template<typename T>
T RangeMinI(T A[], int si, int ei)
{
	int mini = si;
	T min = A[si];
	for (int i = si + 1; i < ei; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
			mini = i;
		}
	}
	return mini;

}
template<typename T>
void SelectionSort(T A[], int Size)
{
	int c = 0;
	for (int i = 0; i < Size; i++)
	{
		c = RangeMinI(A, i, Size);
		swap(A[i], A[c]);
	}
}
int main()
{
	int A[5] = { 6,5,4,3,2 };
	double B[5] = { 6.9,5.5,4.2,3.1,2.7 };
	char C[5] = { 'a','b','e','q','d' };
	/*SelectionSortForint(A, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << A[i];
	}*/
	SelectionSort(C, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << C[i]<<" , ";
	}

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << C[i];
	//}
	return 0;
}