#include<stdio.h>

struct product{//it does not allocate memory
	char *name;
	int price;
	int special_price;
	int qty;
};

void show_product(struct product a)
{
	printf("Product Name: %s \n",a.name);
	printf("Price: %d\n",a.price);
	printf("Special Price: %d\n", a.special_price);
	printf("Qty: %d\n",a.qty);
}

void main(){
	int a;// it allocates memory in stack
	struct product p = {"Lenovo Thinkpad",1000,900,50};//only here the memory gets allocated
	struct product s = {"Asus Tuf",10000,400,50};//T
	show_product(p);
	show_product(s);
	
	
}
