#include<iostream>
#include<cmath>

using namespace std;
int nhap(){
	int a,b;
	cout<<"Nhap so a: ";
	cin>>a;
	cout<<"Nhap so b: ";
	cin>>b;
}
int Sosanh(){
	int a,b;
	if(a<b){
	cout<<"a nho hon b"<<endl;
}
	else if(a>b)
	cout<<"a lon hon b"<<endl;
	else
	cout<<"a bang b"<<endl;
}
int kiemtra(int a,int b){
	if(a %2 == 0){
		cout<<"a la so chan "<<endl;
	}
	else
	cout<<"a la so le "<<endl;
	if(b %2 == 0){
		cout<<"b la so chan "<<endl;
	}
	else
	cout<<"b la so le "<<endl;
}

// Bai giai phuong trinh bac 1,2

//int GiaiPT1(float a ,float b){
//	cout<<"Nhap a cua phuong trinh bac nhat: ";
//	cin>>a;
//	cout<<"Nhap b cua phuong trinh bac nhat: ";
//	cin>>b;
//	cout<<"Phuong trinh bac nhat: " << a << "x" << "+" << "(" << b << ")" <<endl;
//	if(a!=0 && b!=0){
//		cout<<"Phuong trinh co nghiem la: "<<-b/a<<endl;
//	}
//	else if(a=0 && b!=0)
//		cout<<"Phuong trinh vo nghiem"<<endl;
//	else
//		cout<<"phuong tring vo so nghiem"<<endl;
//}
//int GiaiPT2(float a, float b ,float c){
//	float x1, x2;
//	float delta=b*b-4*a*c;
//	cout<<"Nhap a cua phuong trinh bac hai: ";
//	cin>>a;
//	cout<<"Nhap b cua phuong trinh bac hai: ";
//	cin>>b;
//	cout<<"Nhap c cua phuong trinh bac hai: ";
//	cin>>c;
//	cout<<"Phuong trinh bac hai: " << a <<"*"<< "(x)^2" << "+" << "(" << b << ")" << "x" << "+" << "(" << c << ")"<<endl;
//	if(delta>0){
//		delta=sqrt(delta);
//		x1=(-b + delta) / (2*a);
//		x2=(-b - delta) / (2*a);
//		cout<<"Phuong trinh co nghiem phan biet: " << "x1=" << x1 << "," << "x2=" << x2 <<endl;
//	}
//	else if(delta == 0){
//		x1=x2=-b / (2*a) ;
//		cout<<"Phuong trinh co nghiem kep:"<< "x=" << x1 <<endl;
//	}
//	else
//	cout<<"Phuong trinh vo so nghiem"<<endl;
//}

// Tam giac

//void kiemtra(float a,float b,float c){
//	 if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
//            cout<<"Day la tam giac vuong"<<endl;
//        else if(a==b==c)
//            cout<<"Day la tam giac deu"<<endl;
//        else if(a==b || a==c || b==c)
//            cout<<"Day la tam giac can";
//		else 
//			cout<<"Day la tam giac thuong"<<endl;
//}
//int chudientich(float a,float b,float c){
//	float CV,DT,P;
//	CV = a + b + c;
//	P = CV/2;
//	DT = sqrt(P * (P-a) * (P-b) * (P-c));
//	cout<<"Chu vi tam giac la: "<<CV<<endl;
//	cout<<"Dien tich tam giac la:"<<DT<<endl;
//}
int main(){
	int a,b;
	nhap();
	Sosanh();
	kiemtra(a,b);
	// Giai PT
//	float a, b, c;
//	GiaiPT1(a ,b);
//	GiaiPT2(a,b,c);
	//Tam giac
//	float a,b,c;
//	cout<<"Nhap canh a: ";
//	cin>>a;
//	cout<<"Nhap canh b: ";
//	cin>>b;
//	cout<<"Nhap canh c: ";
//	cin>>c;
//	kiemtra(a,b,c);
//	chudientich(a,b,c);
}
