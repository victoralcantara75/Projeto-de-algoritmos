#include <iostream>
using namespace std;

void shell_sort (int *elementos, int n){
	int h=1, j, x;
	do{ h =3 * h + 1; } while (h< n);
	do{
		h /=3;
		for(int i = h ; i < n;  i++)
		{
			x = elementos[i];
			j = i;
			while (j >= h && x < elementos[j - h]) {
                elementos[j] = elementos[j - h];
                j = j - h;
            }
            elementos[j] = x;
		}
	}while( h > 1 );
}

int main(){
	
	int v[5]{4, 3 , 7, 1, 0};
	shell_sort(v, 5);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", v[i]);
	}

}