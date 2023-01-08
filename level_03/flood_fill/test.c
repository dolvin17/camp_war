#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area;
	int i;
	int j;

	i = 0;
	j = 0;
	area = make_area(zone, size);
	while (i < size.y)
		printf("%s\n", area[i++]);
	printf("\n");

	t_point begin = {7,4};
	flood_fill(area, size, begin);
	while (j < size.y)
		printf("%s\n", area[j++]);
	return (0);
}