Problem: [Link](https://www.hackerrank.com/challenges/plus-minus/problem)

Author: [@Sid672](https://github.com/Sid672)

```C++
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
//-----------------------------------------------------------------
// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    
    double l = int(arr.size());
    double c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < l; i++)
    {
        if (arr[i] > 0)
        {
            c1++;
        }
        else if (arr[i] < 0)
        {
            c2++;
        }
        else 
        {
            c3++;
        }
    }
    printf("%.6f\n", c1 / l);
    printf("%.6f\n", c2 / l);
    printf("%.6f\n", c3 / l);
    return;

}
//-------------------------------------------------------------------
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
```
