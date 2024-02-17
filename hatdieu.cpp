#include <iostream>
#include <fstream> //để nhập xuất dữ liệu bằng tập tin ta dùng thư viện fstream

using namespace std;

int main()
{
  //  ifstream fi; //mở đọc
  //  ofstream fo; //mở ghi
 //   fi.open("hatdieu.inp");
 //   fo.open("hatdieu.out");
    int n;
    cin >> n; //syntax tượng tự cin cout
    int count = -1;
    if (n < 5) {
        count = -1;
    } else {
        for (int i = 0; i < n; i++)
        {
            if (i % 5 == 0) {
                count++;
            } 
            if (i < 5) {
                if (i % 3 == 0) {
                    count++;
                }
            }
            
        }
        count--;
    }
    cout << count;
  //  fi.close();
  //  fo.close();
}