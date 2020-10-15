#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    while (1)
    {
        //getline :: 엔터 직전까지 입력으로 받아들임. 
        //다음 getline 사용 시 버퍼에 남아있는 것이 없음
        getline(cin, a); 
        if (a == "")
            break;
        cout << a << endl;
    }
}