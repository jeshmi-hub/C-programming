#include<stdio.h>
#include<conio.h>

float function(float x1, float x2, float y1, float y2){
	float xmid, ymid;
	xmid = (x1 + x2) / 2;
	ymid = (y1 + y2) / 2;
	printf("%f %f",xmid,ymid);
}

void main(){
  
  function(4.5,3.5,5.5,6.7);

}
