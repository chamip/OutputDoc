/*
 * @Author: chamip
 * @Date: 2021-09-17 11:12:34
 * @LastEditTime: 2021-09-17 11:18:12
 * @LastEditors: chamip
 * @Description: 
 * @FilePath: /OutputDoc/vimCode/modernCPlusPlus/stringChar.cpp
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::endl;
    std::string s = "abcdefg";
	char& a = s[2];
	char& b = s[3];

	a = '1';
	b = '2';

	cout << s << endl;
	cout << (int*)s.c_str() << endl;        
    cout << "a = " << a << ", b = " << b << endl;

    //s的内存被重新分配，a，b不会更新。
	s = "pppppppppppppppppppppppp";

	//a = '1';
	//b = '2';

	cout << s << endl;
	cout << (int*)s.c_str() << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
