#include <iostream>

using namespace std;

/*
foreach function
param: some array
size of array - size_t
operator to do on the item in the collection
*/
template<typename T , typename OPER>
void ForEach(T arr, size_t size, OPER oper)
{
	for (size_t i = 0; i < size; i++)
	{
		oper(arr[i]);
	}
}

void main()
{
	double sum = 0;	
	int arri[] = { 1,2,3,4 };
	double arrd[] = { 1.3,2.2,3,4 };
	auto sumLambada = [ &sum ](auto a) { sum += a;};
	auto printLambada = [](auto a) {  cout << a << " "; };
	
	ForEach(arri, 4, sumLambada);
	cout << "Sum function: "<<sum <<endl;
	
	sum = 0;
	ForEach(arrd, 4, sumLambada);
	cout << "Sum function: " << sum << endl;
	
	ForEach(arri, 4, printLambada);
}