#include <stdio.h>
#include <stdlib.h>


int main(){

	int tam;
		
		printf("Digite um numero: ");
			scanf("%d",&tam);
 
	for (int x=1; x <= tam; x++) <%
		for (int y=1 ; y <= x ; y++) <% printf("%d ", y); %>
			printf("\n"); %>
 
	return 0;
}
