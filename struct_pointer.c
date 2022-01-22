#include<stdio.h>

typedef struct{
	char *color;
	float weight;
}attribute;

typedef struct{
	char *name;
	 int price;
	 int special_price;
	 int qty;
	 attribute attr;
}product;

void show_product(product a){
	printf("Name: %s\n",a.name);
	printf("Price: %d\n",a.price);
	printf("Special_price: %d\n",a.special_price);
	printf("Qty:%d",a.qty);
	printf("Color: %s\n",a.attr.color);
	printf("Weight: %f\n",a.attr.weight);
}

void update_qty(product *b){
	b->attr.weight = b->attr.weight + 1;
}
void main(){
	int a;
	product p = {"Lenovo Thinkpad",1000,2323,4534,{"Blue",45.45}};
	update_qty(&p);
	show_product(p);
}
