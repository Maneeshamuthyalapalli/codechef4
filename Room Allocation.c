#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	for(int t=0;t<T;++t)
	{
	    int N;
	    scanf("%d", &N);
	    int A[N];
	    int total_people = 0;
	    for (int i=0;i<N;++i)
	    {
	        scanf("%d",&A[i]);
	        total_people +=A[i];
	    }
	    int rooms_needed = (total_people + 1) / 2;
	    printf("%d\n", rooms_needed);
	}
	return 0;

}

