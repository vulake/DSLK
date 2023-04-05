#include<bits/stdc++.h>
using namespace std;
struct Songuyen
{
	int N;
	Songuyen *next;
 };
Songuyen *Nhap(Songuyen *f)
{
	int k;
	Songuyen *p;
	f = NULL;		// Tao danh sach rong 
	do
	{
		cout <<"Nhap mot so nguyen (0 dung lai): ";
			cin >> k;
			if (k==0)
				break;
		// Tao mot nut moi co ten la p
		p = new Songuyen; 		// Cap phat vung nho cho nut moi p
		p->N = k;		// Gan du lieu cho nut p
		p->next = NULL;
		//  Gan nut moi p vao dau danh sach 
		if (f == NULL)		// Danh sach trong 
			f = p;
		else 
		{
			p->next = f;
			f = p;
		}
	}while (1);
	return f;
 }
 Songuyen *BSCuoi(Songuyen *first, int X)
 { Songuyen *q;
 	q = new Songuyen;		// tao nut moi q
 	q->N = X;
 	q->next = NULL;
 	if (first == NULL)		// danh sach trong
 		first = q;
 	else 
 	{	Songuyen *p = first;
 		while(p->next != NULL)		// chuyen p ve nut cuoi
 			p = p->next;
 			p->next=q;
	 }
	 return first;
 }
 void in(Songuyen *f)
 {
 	Songuyen *p;
 	p=f;
 	while (p!=NULL)
 	{
 		cout <<p->N<<"  ";
		p=p->next;		// Cho p tro vao nut ke tiep
	}
 }
 int main()
 {
 	Songuyen *first; int n;
 	first = Nhap(first);
 	cout <<"\n Danh sach so nguyen da nhap: ";
 	in(first);
 	cout <<"\n Nhap vao mot so nguyen: ";
 	cin >> n;
 	BSCuoi(first,n);
 	cout <<"\n Danh sach so nguyen sau khi bo xung cuoi: ";
 	in(first);
 	return 0;
 }


 
