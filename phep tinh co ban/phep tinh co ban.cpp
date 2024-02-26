#include <iostream>
using namespace std;
   int tinhtong(int so1, int so2) {
	   //int sotong = so1 + so2;
	   // rerurn sotong;

	   return so1 + so2;
 }
   int tinhhieu(int so1, int so2) {
	   //int sohieu = so1 +so1 + so2;
	   // rerurn sohieu;
	   return so1 - so2;
   }

   int tinhtich(int so1, int so2) {
	   //int sotich=so1 *so2;
	   // rerurn sotich;
	   return so1*so2;
   }
   int tinhthuong(int so1, int so2) {
	   //int sothuong=so1/so2;
	   // rerurn sothuong;
	   return so1/so2;
   }

   int main() {
	   // khai bao bien
	   int so1, so2, tong;

	   // nhap du lieu vao bien
	   cout << "CHUONG TRINH TINH TONG 2 SO\N";
	   cout << "Nhap so thu nhat:";
	   cin >> so1;
	   cout << "Nhap so thu hai:";
	   cin >> so2;

	   // Tinh toan 
	   tong = tinhtong(so1, so2);

	   // Xuat du lieu 
	   cout << so1 << " + " << so2 << " = " << tong << endl;
	   
	  

	   // Tinh toan 
	   tong = tinhhieu(so1, so2);
      // Xuat du lieu 
	   cout << so1 << " - " << so2 << " = " << tong << endl;
	   
	   // Tinh toan 
	   tong = tinhtich(so1, so2);

	   // Xuat du lieu 
	   cout << so1 << "* " << so2 << " = " << tong << endl;

	   // Tinh toan 
	   tong = tinhthuong(so1, so2);

	   // Xuat du lieu 
	   cout << so1 << " / " << so2 << " = " << tong << endl;
	   return 0;

}
  
   