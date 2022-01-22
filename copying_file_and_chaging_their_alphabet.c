/*Write a program that copies the content of one file to another. While
copying you have to change every alphabet character read in to the
character next to the alphabet. For example &#39;A&#39; will change into &#39;B&#39;, &#39;B&#39;
into &#39;C&#39; and so on. When you get to &#39;Z&#39;, wrap around and change it to
&#39;A&#39;. It should work for both small and capital letters. Conversion
should be done for only alphabets.*/

#include<stdio.h>
void main(){
	FILE *fptr1 =fopen("abc.txt","r");
	FILE *fptr2 =fopen("source.txt","w");
	char ch;
	ch=fgetc(fptr1);
	while(ch!=EOF){
		if(ch>='A' && ch<='Z' || ch>="a" && ch<='z'){
			ch= ch+1;
			fputc(ch,fptr2);
		}
		else if(ch=='Z'){
			ch = 'A';
			fputc(ch,fptr2);
		}
		else if(ch=='z'){
			ch = 'a';
			fputc(ch,fptr2);
		}
		else{
			fputc(ch,fptr2);
		}
		ch=fgetc(fptr1);
	}
}
