#include<stdio.h>
main(){
	int y=10,*py,**ppy,***pppy,****ppppy,*****pppppy;
	py = &y;
	ppy = &py;
	pppy = &ppy;
	ppppy = &pppy;
	pppppy = &ppppy;
	printf("%d\n%d\n%d\n%d\n%d\n%d",y,*py,**ppy,***pppy,****ppppy,*****pppppy);
}
