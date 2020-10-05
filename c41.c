#include<stdio.h>
#include<math.h>

float phyth(float h, float p, float b){
	if(isnan(h)){
		h = sqrt(pow(p,2)+ pow(b,2));
		return h;
	}
	else if(isnan(p)){
		p = sqrt(pow(h,2) - pow(b,2));
		return p;
	}
	else{
	
		b = sqrt(pow(h,2)- pow(p,2));
		return b; 
	}
	
}

void main(){
	 float p,q,r;
	 p= phyth(NAN,13,5);
	 q = phyth(12,NAN,6);
	 r = phyth(5,8,NAN);
	 printf("h=%f\n",p);
	 printf("p=%f\n",q);
	 printf("b=%f",r);
}
