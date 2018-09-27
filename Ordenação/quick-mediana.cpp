#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int mediana(int n){
    int x[3];
    srand(time(0));
    x[0] = rand%n;

}


void quicksort(int values[], int began, int end)
{
    int i, j, pivo, aux;
    i = began;
    j = end-1;
    pivo = mediana(n);
    while(i <= j)
    {
        while(values[i] < pivo && i < end)
        {
            i++;
        }
        while(values[j] > pivo && j > began)
        {
            j--;
        }
        if(i <= j)
        {
            aux = values[i];
            values[i] = values[j];
            values[j] = aux;
            i++;
            j--;
        }
    }
    if(j > began)
        quicksort(values, began, j+1);
    if(i < end)
        quicksort(values, i, end);
}

int main(){
	
	int v[5]{4, 3 , 7, 1, 0};
	quicksort(v, 0, 5);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", v[i]);
	}

}