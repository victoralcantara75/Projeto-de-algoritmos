#include <iostream>
using namespace std;

void selection_sort (int *elementos, int n){
	for(int i =0; i <n-1; i++)
	{
		int min_index = i;
		for (int j = i+1; j <= n-1; j++)
		{
			if(elementos[min_index] > elementos[j]){
				min_index = j;
			}
		}
		
		int temp = elementos[i];
		elementos[i] = elementos[min_index];
		elementos[min_index] = temp;
	}
}

int main(){
	
	int v[5]{4, 3 , 7, 1, 0};
	selection_sort(v, 5);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", v[i]);
	}

}