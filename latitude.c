#include<stdio.h>

int a = 1;

void go_west(int lat, int lon){
	lat = lat - 1;
	lon = lon + 1;
	a++;
}

void main(){
	int latitude = 32;
	int longitude = -64;
	go_west(latitude, longitude);
	a++;
	printf("Hey !!! You have reached at [%d %d]\n",latitude,longitude);
	printf("%d", a);
}
