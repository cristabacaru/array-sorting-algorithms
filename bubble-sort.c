#include <stdio.h>
 
void BubbleSort(int v[], int n)
{
   bool is_sorted=false;
   while(is_sorted==false){
	is_sorted=true;
	for(int i=0; i + 1 < n; i++){
		if(v[i]>v[i+1]){
			int cpy=v[i];
			v[i]=v[i+1];
			v[i+1]=cpy;
			is_sorted=false;
		}
	}
}

int main()
{
    return 0;
}
