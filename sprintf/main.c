#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "sprintf.h"
int main(void)
{
	/*char buffer[200], s[] = "computer", c = '1';
	int i = 35, j;
	float fp = 1.7320534f;*/
	u8 temp, humi, range, weight, angle, height, wind;
	temp = 23;
	humi = 70;
	range = 30;
	weight = 100;
	angle = 15;
	height = 60;
	wind = 50;
	/* j = sprintf(buffer , "String: %s\n", s);
	 j = sprintf(buffer + j, "Character: %c\n", c);
	 sprintf(buffer + 2, "Integer: %d\n", i);
	 sprintf(buffer + 3, "Real: %f\n", fp);
	sprintf(buffer, "String: %s\n Character: %c\n Ineger: %d\n Real: %f\n", s, c, i, fp);*/

	mqtt_save(temp, humi, range, weight, angle, height, wind);

	//printf( "output:\n%s\n character count = %d\n", t_json, json_len);

	return 0;
}