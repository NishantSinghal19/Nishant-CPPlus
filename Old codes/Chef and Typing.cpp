#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        //No. of words;
        char s[N][20];
        float sum = 0;
        bool flag = true, hand = true;
        float m[N],z[N];
        //hand is left hand
        for (int i = 0; i < N; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                if (s[i][j] == 'd')
                {
                    if (j == 0)
                    {
                        sum += 0.2;
                    }
                    else
                    {
                        if (hand)
                        {
                            sum += 0.4;
                        }
                        else
                        {
                            sum += 0.2;
                        }
                    }
                    hand=true;
                }
                if (s[i][j] == 'f')
                {
                    if (j == 0)
                    {
                        sum += 0.2;
                    }
                    else
                    {
                        if (hand)
                        {
                            sum += 0.4;
                        }
                        else
                        {
                            sum += 0.2;
                        }
                    }
                    hand=true;
                }
                if (s[i][j] == 'j')
                {
                    if (j == 0)
                    {
                        sum += 0.2;
                    }
                    else
                    {
                        if (!hand)
                        {
                            sum += 0.4;
                        }
                        else
                        {
                            sum += 0.2;
                        }
                    }
                    hand = false;
                }
                if (s[i][j] == 'k')
                {
                    if (j == 0)
                    {
                        sum += 0.2;
                    }
                    else
                    {
                        if (!hand)
                        {
                            sum += 0.4;
                        }
                        else
                        {
                            sum += 0.2;
                        }
                    }
                    hand = false;
                }
                
            }
            
            m[i]=sum;
            
            z[i]=m[i] - m[i-1] ;
        }
        if (s[0]==s[3])
        {
            cout<<"12345"<<endl;
        }
        
        for (int i = 0; i < N; i++)
        {
            cout<<z[i]<<endl;
            for (int j = 1; j < N-1; j++)
            {
                if (s[i]==s[i+j])
                {
                    cout<<"OP"<<endl;
                }
                
            }
            
        }
    
    }

    return 0;
}