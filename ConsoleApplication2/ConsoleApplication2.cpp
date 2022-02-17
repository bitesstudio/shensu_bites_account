#include <iostream>
#include <tchar.h>
#include <windows.h>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//API System by CN_64Bit,You can copy all the code and spread this API. But all legal responsibilities are borne by you.
//The developer of this software assumes no responsibility. 
int wait;
int systemcheck(int x,int y) {
	int xy;
	xy = x + y;
	if (x == 111 || x == 222 || x == 333 || x == 444 || x == 555 || x == 666 || x > 700){
		cout << "This product's affiliation could not be verified." << endl;
		cin>>wait;
		return 0;
	}
	if (y < 0 || y >10){
		cout << "This product's affiliation could not be verified." << endl;
		cin>>wait;
		return 0;
	}
	if (x + y % 8 != 0){
		cout << "This product's affiliation could not be verified." << endl;
		cin>>wait;
		return 0;
	}
	else {

		cout << "Please enter the last digit of the product key[1-9]" << ":";
		int contry_manger;
		cin >> contry_manger;
		if (contry_manger > 0 && contry_manger < 7){
			cout << "Regional reference table: [1] Jilin [2] Nanchang [3] Hong Kong [4] Beijing [5] Others" << endl;
			cout << "Authentication succeeded. Your region is:" << contry_manger - 2 << endl;
			cin>>wait;
			return 1;
		}
		else {
			cout << "你輸入了正確的序列號，但我們無法驗證此序列號所屬的地區。請聯繫軟件開發者獲取詳細信息，激活失敗[0x01]";
			cin>>wait;
			return 0;
		}
			
	}
}

int Waiting_API(int x){
	if (x = 1){return 1;}
	if (x = 0){return 2;}
	else{
		cout<<"无法接受API所调用的参数，程序出错。[1x01]";
		cin>>wait;
		return 3;
	}
}
void waiting_No_Error_for_Windows(int y,char dis){
	//x is waiting second.
	//Linux unavilable.
	if (dis == 'T'){	
	for(int x;x++;){
		cout<<"请稍等...好东西就要来了"<<endl;
		cin>>wait;
		Sleep(y);
		if (x >=20){
			cout<<"请求超时[1x02]"<<endl;
			cin>>wait;
		}

		}
	}
	else{cout<<"API不可用";}
	cin>>wait;
	
}
int main(int argc, char** argv) {
	int ax, by, cz;
	cout << "请输入产品密钥A部分";
	cin >> ax;
	cout << "很好，现在请输入产品密钥B部分";
	cin >> by;
	/*
	cout << "马上完成了！请输入产品密钥C部分";
	cin << cz;
	*/
	cout << "正在处理您提交的数据..."<<endl;
	
	int systemAPIreturn;
	systemAPIreturn = systemcheck(ax, by);
	if (systemAPIreturn == 0) {
		std::cout << "非常感谢您注册Bites N2"<<endl;
		//scu
		cout << "您的资格已被验证。" << endl;
		
	}

	return 0;
}