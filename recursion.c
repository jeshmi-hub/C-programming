//recursion 

int main(){
	int n,res;
	printf("Enter a number:");
	scanf("%d",&n);
	 res= fact(n);
	 printf("result:%d",res);
}

int fact(int n){
	int res;
	if(n==0){
		res = 1;
	}
	else{
		res=n*fact(n-1);
	}
	return res;
}
