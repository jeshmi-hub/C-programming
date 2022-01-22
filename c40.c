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
	 float r,s,t;
	 r= phyth(NAN,13,5);
	 printf("%f\n",r);
	 s= phyth(12,NAN,8);
	 printf("%f\n",s);
	 t= phyth(4,5,NAN);
	 printf("%f",t);
}
