#include<stdio.h>
#include<math.h>
float velocityCalc(float v, float u, float a, float t){
	if(isnan(v)){
		v = u + a * t;
		return v;
	}
	else if(isnan(u)){
		u = v - a * t;
		return u;
	}
	else if(isnan(a)){
	
		a = (u - v) / t;
		return a;
	}
	else{
		t = (u - v) / a;
		return t;
	}
	
}

void main(){
	 float s,q,r,t;
	 s= velocityCalc(NAN,13,5,6);
	 q = velocityCalc(12,NAN,6,7);
	 r = velocityCalc(5,8,NAN,8);
	 t = velocityCalc(7,8,9,NAN);
	 printf("v=%f\n",s);
	 printf("u=%f\n",q);
	 printf("a=%f\n",r);
	 printf("t=%f",t);
}
