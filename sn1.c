#include <stdio.h>
int main()
{
    int n1, n2, S;
    
    printf("Enter two integers: ");

    // two integers entered by user are stored using scanf()
    scanf("%d %d", &n1, &n2);

    // store sum in variable Sum
    S = n1 + n2;

    // display output     
    printf("%d + %d = %d \n", n1, n2, S);
	
	 // check if the sum is even or odd, 
    
    if(S % 2 == 0) printf("\n %d is even\n", S);
    else printf("%d is odd\n", S);


    return 0;
}