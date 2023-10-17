#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area(int a,int b,int c){
    double p , s ;
    
    p = (a+b+c)/2.0 ;
    s = sqrt( p * (p-a) * (p-b) * (p-c) );
    
    return s ;
    }


void sort_by_area(triangle* tr, int n) {
    
    int i,j;
    triangle temp[n];
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( area(tr[i].a,tr[i].b,tr[i].c)>area(tr[j].a,tr[j].b,tr[j].c) )
            {
                temp[i]=tr[i];
                tr[i]=tr[j];
                tr[j]=temp[i];
                
            }
        }
    }
    
}   


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
