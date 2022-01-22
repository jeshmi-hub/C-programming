#include<stdio.h>

struct attribute{
	char *color;
	float weight;
};
struct product{
	char *name;
	int price;
	int qty;
	int special_price;
	struct attribute attr;
};

void show_product(struct product a){
	printf("Name: %s\n",a.name);
	printf("Price: %d\n",a.price);
	printf("Qty: %d\n",a.qty);
	printf("Special price: %d\n",a.special_price);
	printf("Color:%s\n",a.attr.color);
	printf("Weight: %f",a.attr.weight);
	
}

void main(){
	int a;
	struct product p = {"Lenovo Thinkpad",10000,2323,500,{"Blue",17.5}};
	show_product(p);
	
}
