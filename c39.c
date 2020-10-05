#include<stdio.h>
#include<math.h>

float calculate(float f, float m, float a){
	if(isnan(f)){
		f = m * a;
		return f;
	}
	else if(isnan(m)){
		m = f/a;
		return m;
	}
  	else{
  		 a = f / m;
  		 return a;
	  }
}

void main(){
	float f;
	f = calculate(20,NAN,2);
	printf("%f",f);
	
}
