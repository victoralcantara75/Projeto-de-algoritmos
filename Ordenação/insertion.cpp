#include <iostream>
using namespace std;

void insertion_sort (int *elementos, int n){
	for(int i =1; i <n; i++)
	{
		int j =i-1;
		int x = elementos[i];
		while( x < elementos[j] && j>=0)
		{
			elementos[j+1] = elementos[j];
			elementos[j] = x;
			j--;
		}
	}
}

int main(){
	
	int v[5]{4, 3 , 2, 1, 0};
	insertion_sort(v, 5);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", v[i]);
	}

}