#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int rLCS(int i, int j, const string &s1, const string &s2)
{
    if (s1[i] == '\0' || s2[j] == '\0')
        return 0;
    else if (s1[i] == s2[j])
        return 1 + rLCS(i + 1, j + 1, s1, s2);
    else
        return max(rLCS(i + 1, j, s1, s2), rLCS(i, j + 1, s1, s2));
}
int dpLCS(const string &s1, const string &s2)
{
    int m = s1.length();
    int n = s2.length();
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
        dp[i][0] = 0;
    for (int j = 0; j <= n; j++)
        dp[0][j] = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    for(int i = 1;i <= m;i++){
        for(int j = 0;j <= n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
  

    return dp[m][n];
}
int main()
{
    string s1;
    string s2;
    cout << "Enter the string 1: ";
    cin >> s1;
    cout << "Enter the string 2: ";
    cin >> s2;
    cout << "Length of LCS:(by memoization) ";
    cout << dpLCS(s1, s2) << endl;
}