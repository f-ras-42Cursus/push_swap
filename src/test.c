// temporary tester:

#include "push_swap.h"

void test (t_data *data)
{
	t_data *ptr;
	int i;

	if(!data)
	{
		printf("\n---TEST: NO DATA FOUND---\n");
		return;
	}
	printf("\nINPUT VALUES:\n");
 	i = 0;
	ptr = data;
 	printf("[HEAD %d] = %d\n", i++, ptr->input_value);
 	ptr = ptr->next;
 	while (ptr != data)
 	{
 		printf("[%d] = %d\n", i++, ptr->input_value);
 		ptr = ptr->next;
 	}
	printf("\n\n");

}

void test2 (t_data *data)
{
	t_data *ptr;
	int i;

	if(!data)
	{
		printf("\n---TEST: NO DATA FOUND---\n");
		return;
	}
	printf("\nNORMALIZED VALUES:\n");
 	i = 0;
	ptr = data;
 	printf("[HEAD %d] = %d\n", i++, ptr->normalized_value);
 	ptr = ptr->next;
 	while (ptr != data)
 	{
 		printf("[%d] = %d\n", i++, ptr->normalized_value);
 		ptr = ptr->next;
 	}
	printf("\n\n");

}

void org_test (t_data *data)
{
	t_data *ptr;
	int i;

	if(!data)
	{
		printf("\n---TEST: NO DATA FOUND---\n");
		return;
	}
	printf("\n -- NEXT -- \n");

	printf("\nINPUT VALUES:\n");
 	i = 0;
	ptr = data;
 	printf("[HEAD %d] = %d\n", i++, ptr->normalized_value);
 	ptr = ptr->next;
 	while (ptr != data)
 	{
 		printf("[%d] = %d\n", i++, ptr->normalized_value);
 		ptr = ptr->next;
 	}
 	printf("\n[HEAD check] = %d\n", ptr->normalized_value);

	printf("\n\n");

	printf("\n -- PREV -- \n");
	i = 0;
	ptr = data;
 	printf("[HEAD %d] = %d\n", i++, ptr->normalized_value);
 	ptr = ptr->prev;
 	while (ptr != data)
 	{
 		printf("[%d] = %d\n", i++, ptr->normalized_value);
 		ptr = ptr->prev;
 	}
 	printf("\n[HEAD check] = %d\n", ptr->normalized_value);
	
	printf("\n\n");

}