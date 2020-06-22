#define _CRT_SECURE_NO_WARNINGS
#include "sprintf.h"
#include <stdio.h>
#include <string.h>
u8 mqtt_save(u8 temp, u8 humi, u8 range, u8 weight, u8 angle, u8 height, u8 wind)
{
	unsigned short json_len;
	char t_json[255];
	char json[] = "{\"method\":\"thing.event.property.post\",\n\"id\":\"123\",\n\"params\":{\n\"CurrentTemperature\":%d,\n\"RelativeHumidity\":%d,\n\"Range\":%d,\n\"Weight\":%d,\n\"Angle\":%d,\n\"Height\":%d,\n\"WindSpeed\":%d\n},\n\"version\":\"1.0\"\n}";

	sprintf(t_json, json, temp, humi, range, weight, angle, height, wind);
	json_len = strlen(t_json) / sizeof(char);
	printf("output:\n%s\n json len = %d\n", t_json, json_len);
	return 0;
}