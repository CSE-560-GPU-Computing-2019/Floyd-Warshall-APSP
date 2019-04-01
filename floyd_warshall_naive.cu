#include <stdio.h>
#include <stdlib.h>
#include <math.h>

__global__ void fw(int *input, int k, int n)
{
	int i = threadIdx.x + blockIdx.x * blockDimx.x;
	int j = threadIdx.y + blockIdx.y * blockDimx.y;

	if(i<n && j<n){
		if(input[i*n+j]==-1)
			input[i*n+j]=input[i*n+k]+input[k*n+j];
		else
			input[i*n+j]=min(input[i*n+k]+input[k*n+j],input[i*n+j]);
	}
}