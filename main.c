#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	printf("hello world\n");//1

	char str[] = "hello_world";
	printf("%s\n", str);    //2

	size_t str_size = strlen(str);
	printf("%s size:%zu\n", str, str_size); //3

}