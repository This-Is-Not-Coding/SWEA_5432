#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        string braket;
        cin >> braket;
        int braketStack = 0;
        int answer = 0;
        int idx = 0;

        while (idx < braket.length() - 1) {
            if (braket[idx] == '(' && braket[idx + 1] == ')') {
                answer += braketStack;
                idx = idx + 1;
            }
            else if (braket[idx] == '(') {
                answer += 1;
                braketStack += 1;
            }
            else if (braket[idx] == ')') {
                braketStack -= 1;
            }

            if (idx + braketStack == braket.length() - 1) {
                break;
            }

            idx += 1;
        }

        cout << "#" << test_case << " " << answer << endl;
    }
    return 0;
}