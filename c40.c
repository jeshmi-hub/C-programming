#include<stdio.h>
#include<math.h>

float phyth(float h, float p, float b){
	if(isnan(h)){
		h = sqrt((p * p )+ (b * b));
		return h;
	}
	else if(isnan(p)){
		p = sqrt((h * h) - (b * b));
		return p;
	}
	else{
	
		b = sqrt((h * h)- (p * p));
		return b; 
	}
	
}

void main(){
	 float p;
	 p= phyth(NAN,13,5);
	 printf("%f",p);
}
