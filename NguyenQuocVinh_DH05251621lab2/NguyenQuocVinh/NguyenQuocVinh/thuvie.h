#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
const int KTM = 50;
struct DaySo {
	int arr[KTM];
	int n;
};
bool docDaySo(DaySo& ds, const char* tenFile);
bool luuDaySo(DaySo ds, const char* tenFile);
void nhapDaySo(DaySo& ds);
void xuatDaySo(DaySo ds);
int tongDS(DaySo ds); 
int tichDS(DaySo ds);
int demPTDuong(DaySo ds);
void xuatchan(DaySo ds);
int tongchanDS(DaySo ds);
int tichPTChiSoChan(DaySo ds);
int demPTChiaHet3Va5(DaySo ds);
bool snt(int n);
int tongnguyenDS(DaySo ds);
bool tongshtDS(int n);
int demPTshtDS(DaySo ds);