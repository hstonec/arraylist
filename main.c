#include <stdio.h>

#include "arraylist.h"

int main(int argc, char *argv[])
{
	size_t i;
	char *s1;
	char *s2;
	char *s3;
	ARRAYLIST *list;
	
	
	list = arrlist_create();
	
	//c = '5';
	s1 = "abcdefg";
	s2 = "1234566";
	s3 = "asdfasdf";
	
	arrlist_add(list, s1);
	arrlist_add(list, s2);
	arrlist_add(list, s3);
	
	printf("\n");
	for (i = 0; i < arrlist_size(list); i++)
		printf("%s\n", (char *)arrlist_get(list, i));
	printf("%ld\n", arrlist_size(list));
	
	
	arrlist_insert(list, 1, "aaaaaaaaaaaaaa");
	arrlist_remove(list, 2);
	printf("\n");
	for (i = 0; i < arrlist_size(list); i++)
		printf("%s\n", (char *)arrlist_get(list, i));
	printf("%ld\n", arrlist_size(list));
	
	return 0;
}