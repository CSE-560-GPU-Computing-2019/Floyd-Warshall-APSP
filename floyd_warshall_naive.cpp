#include <bits/stdc++.h>

#define v 1024

using namespace std;

void fw(int input[v][v])
{
	int i,j,k;

	for(k=0;k<v;k++){
		for(i=0;i<v;i++){
			for(j=0;j<v;j++){
				if(input[i][j]>input[i][k]+input[k][j])
					input[i][j]=input[i][k]+input[k][j];
			}
		}
	}
}

int main()
{
	int input[v][v];
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++)
			input[i][j]=rand();
	}
	return 0;
}