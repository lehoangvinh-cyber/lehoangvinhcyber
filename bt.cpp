#include<iostream>
using namespace std;
struct Date
{
	int ngay;
	int thang;
	int nam;
};
struct SinhVien {
	char HoTen[50];
	char MSSV[11];
	Date ngaysinh;
	float dcc;
	float dtb;
	float diemthi;
};
SinhVien sv[100];
Date dt[50];
void NhapThongTinSV(SinhVien &sv);
void InThongTinSV(SinhVien sv);
void xeploai(SinhVien sv);
float diemTK(SinhVien sv);
void NhapMangSV(SinhVien sv[], int& N);
void XuatMangSV(SinhVien sv[], int N);
void NhapThongTinSV(SinhVien &sv)
{
		cin.ignore();
		gets_s(sv.HoTen);
		cout << "Nhap ma so sinh vien:";
		gets_s(sv.MSSV);
	
		cout << "Nhap ngay sinh:";
		cin >> sv.ngaysinh.ngay >> sv.ngaysinh.thang >> sv.ngaysinh.nam;
	
		
		cout << "Nhap diem chuyen can:";
		cin >> sv.dcc;
		
		cout << "Nhap diem trung binh:";
		cin >> sv.dtb;
		
		cout << "Nhap diem thi:";
		cin >> sv.diemthi;

}
void InThongTinSV(SinhVien sv)
{
		puts(sv.HoTen);
		cout << "MSSV:";
		puts(sv.MSSV);
		cout << "Ngay sinh:";
		cout << sv.ngaysinh.ngay << "/" << sv.ngaysinh.thang << "/" << sv.ngaysinh.nam << endl;
		cout << "Diem chuyen can la:";
		cout << sv.dcc << endl;
		cout << "Diem trung binh la:";
		cout << sv.dtb << endl;
		cout << "Diem thi la:";
		cout << sv.diemthi << endl;
		cout << "Diem tong ket mon hoc la:";
		cout << diemTK(sv)<<endl;
		cout << "Xep loai:";
		xeploai(sv);

}
void xeploai(SinhVien sv) {
	float tk= diemTK(sv);
	if (tk >= 9.0)
		cout << " hoc luc Xuat Sac";
	else if (tk >= 8.0)
		cout << " hoc luc Gioi";
	else if (tk >= 6.5)
			cout << "hoc luc Kha";
		else if (tk >= 5.0)
			cout << " hoc luc Trung Binh";
		else
			cout << " hoc luc Yeu";
}
float diemTK(SinhVien sv)
{
	float tk;
	tk= (sv.dcc) * 0.1 + (sv.dtb) * 0.4 + (sv.diemthi) * 0.5;
	return tk;
}
void NhapMangSV(SinhVien sv[], int &N)
{
	cout << "So luong sinh vien can nhap la: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "Nhap ten sinh vien thu "<<i+1<<" :";
		NhapThongTinSV(sv[i]);
	}
	cout << "==========Thong tin sinh vien vua nhap la==========" << endl;
}
void XuatMangSV(SinhVien sv[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << "Ho ten sinh vien thu " << i + 1 << " :";
		InThongTinSV(sv[i]);
		cout << endl;
	}
}
void main()
{
	int N;
	SinhVien sv[100];
	NhapMangSV(sv, N);
	XuatMangSV(sv, N);
	system("pause");
}