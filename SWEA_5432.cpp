#include <iostream>
#include <string>
 
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
 
    int T;
    std::string arr;
 
    std::cin >> T;
    for (int tc = 1; tc <= T; tc++) {
 
        int cnt =0, open = 0;
        std::cin >> arr;
 
        for (int i = 0; i < arr.length(); i++) {
            if (arr[i] == '(') 
                open++;
            else if (open) {
                if (arr[i - 1] == '(')
                    cnt += --open;
                else {
                    open--;
                    cnt++;
                }
            }
        }
 
        std::cout << "#" << tc << " " << cnt << '\n';
    }
    return 0;
}