//Polynomial Addition
#include <stdio.h>
struct poly
{
	int coeff;
	int expo;
};
void main()
{
	struct poly f[5],g[5],res[5];
	int i,k;
	int d1,d2;
	int greater;
	printf("Enter degree of first polynomial\n");
	scanf("%d",&d1);
	printf("Enter degree of second polynomial\n");
	scanf("%d",&d2);
	
	printf("Enter Polynomial 1\n");
	for(i = 0; i < d1 + 1; i++)
	{
		f[i].expo = i;
		printf("Enter coeff of %d degree\n",f[i].expo);
		scanf("%d",&f[i].coeff);
	}
	
	printf("Enter Polynomial 2\n");
	for(i = 0; i < d2 + 1; i++)
	{
		g[i].expo = i;
		printf("Enter coeff of %d degree\n",g[i].expo);
		scanf("%d",&g[i].coeff);
	}
	
	printf("Polynomial 1  is\n");
	for(i = 0; i < d1 + 1; i++)
	{
		if (i == 0)
			printf("%d + ",f[i].coeff);
		else if(i == d1)
			printf("%dx^%d  ",f[i].coeff,f[i].expo);
		else
			printf("%dx^%d + ",f[i].coeff,f[i].expo);
	}
	printf("\n");
	
	printf("Polynomial 2  is\n");
	for(i = 0; i < d2 + 1; i++)
	{
		if (i == 0)
			printf("%d + ",g[i].coeff);
		else if(i == d2)
			printf("%dx^%d  ",g[i].coeff,g[i].expo);
		else
			printf("%dx^%d + ",g[i].coeff,g[i].expo);
	}
	printf("\n");
	
	if(d1 > d2)
	{
		greater = d1;
		k = 0;
		for(i = 0; i <= d2; i++)
		{
			res[k].coeff = f[i].coeff + g[i].coeff;
			res[k].expo = f[i].expo;
			k++;
		}
		for(i = d2 + 1; i <= d1; i++)
		{
			res[k].coeff = f[i].coeff;
			res[k].expo = f[i].expo;
			k++;
		} 
	}
	
	else if(d1 < d2)
	{
		greater = d2;
		k = 0;
		for(i = 0; i <= d1; i++)
		{
			res[k].coeff = f[i].coeff + g[i].coeff;
			res[k].expo = g[i].expo;
			k++;
		}
		for(i = d1 + 1; i <= d2; i++)
		{
			res[k].coeff = g[i].coeff; 
			res[k].expo = g[i].expo;
			k++;
		} 
	}
	
	else
	{
		greater = d1;
		k = 0;
		for(i = 0; i <= d1; i++)
		{
			res[k].coeff = f[i].coeff + g[i].coeff;
			res[k].expo = f[i].expo;
			k++;
		}
	}
	
	printf("Resultant Polynomial is\n");
	for(i = 0; i < greater + 1; i++)
	{
		if (i == 0)
			printf("%d + ",res[i].coeff);
		else if(i == greater)
			printf("%dx^%d  ",res[i].coeff,res[i].expo);
		else
			printf("%dx^%d + ",res[i].coeff,res[i].expo);
	}
	printf("\n");
	
}

/*
Output

Enter degree of first polynomial
3
Enter degree of second polynomial
2
Enter Polynomial 1
Enter coeff of 0 degree
10
Enter coeff of 1 degree
20
Enter coeff of 2 degree
30
Enter coeff of 3 degree
40
Enter Polynomial 2
Enter coeff of 0 degree
50
Enter coeff of 1 degree
60
Enter coeff of 2 degree
70
Polynomial 1  is
10 + 20x^1 + 30x^2 + 40x^3  
Polynomial 2  is
50 + 60x^1 + 70x^2  
Resultant Polynomial is
60 + 80x^1 + 100x^2 + 40x^3 

*/