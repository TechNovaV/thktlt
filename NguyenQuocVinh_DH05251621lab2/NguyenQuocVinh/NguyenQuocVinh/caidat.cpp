#include "thuvie.h"
void nhapDaySo(DaySo& ds)
{
	do {
		cout << "Nhap so phan tu: ";
		cin >> ds.n;
	} while (ds.n <= 0);
	for (int i = 0; i < ds.n; i++) {
		cout << "Nhap phan tu thu " << i << " : ";
		cin >> ds.arr[i];
	}
}
void xuatDaySo(DaySo ds)
{
	for (int i = 0; i < ds.n; i++)
		cout << ds.arr[i] << " ";
	cout << endl;
}
bool docDaySo(DaySo& ds,const char* tenFile)
{
	FILE* f;
	f = fopen(tenFile, "r");
	if (f == NULL)
		return false;
	fscanf(f, "%d", &ds.n);
	for (int i = 0; i < ds.n; i++)
		fscanf(f, "%d", &ds.arr[i]);
	fclose(f);
	return true;
}
bool luuDaySo(DaySo ds, const char* tenFile)
{
	FILE* f;
	f = fopen(tenFile, "w");
	if (f == NULL)
		return false;
	fprintf(f, "%d\n", ds.n);
	for (int i = 0; i < ds.n; i++)
		fprintf(f, "%d\t", ds.arr[i]);
	fclose(f);
	return true;
}
int tongDS(DaySo ds)
{
	int tong = 0;
	for (int i = 0; i < ds.n; i++)
		tong += ds.arr[i];
	return tong;
}
int tichDS(DaySo ds)
{
	int tich = 1;
	for (int i = 0; i < ds.n; i++)
		tich *= ds.arr[i];
	return tich;
}
int demPTDuong(DaySo ds)
{
	int dem = 0;
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.arr[i] > 0)
			dem++;
	}
	return dem;
}
void xuatchan(DaySo ds)
{
	for (int i = 0; i < ds.n; i++)
		if (ds.arr[i] % 2 == 0)
			cout << ds.arr[i] << " ";
	cout << endl;
}
int tongchanDS(DaySo ds) {
	int tong = 0;
	for (int i = 0; i < ds.n; i++) {
		if (ds.arr[i] % 2 == 0)
			tong += ds.arr[i];
	}
	return tong;
}

int tichPTChiSoChan(DaySo ds) {
	int tich = 1;
	for (int i = 0; i < ds.n; i++) {
		if (i % 2 == 0)
			tich *= ds.arr[i];
	}
	return tich;
}

int demPTDuong(DaySo ds)
{
	int dem = 0;
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.arr[i] % 3 == 0 && ds.arr[i] % 5 == 0)
			dem++;
	}
	return dem;
}

bool snt(int n) {
	if (n < 2)return false; for (int i = 0; i * i < n; i++) {
		if (n % i == 0)return false;
	}return true;
}

int tongnguyenDS(DaySo ds) {
	int tong = 0;
	for (int i = 1; i < ds.n; i++) {
		if (snt(ds.arr[i]))
			tong += ds.arr[i];
	}
	return tong;
}

bool tongshtDS(int n) {
	int s = 0;
	for (int i = 1; i <=n/2; i++)
	{
		if (n % i == 0)
			s +=i ;
	}return s == n && n > 0;
}

int demPTshtDS(DaySo ds){
	int dem = 0;
	for (int i = 0; i < ds.n; i++)
	{
		if (tongshtDS(ds.arr[i]))
			dem++;
	}
	return dem;
}