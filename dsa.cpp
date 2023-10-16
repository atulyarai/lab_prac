#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	string u;
    string k;
    cin >> t;
    while (t--)
    {
        cin >> n >> u;
        int count=0;
        for (int i=0;i<n-1;i++)
        {
            int j=i+1;
            if (u[i]!=u[j])
            {
                k[count]=u[i];
                count++;
                continue;
            }
            int f=i;
            int count_2=2;
            for (int g=f+2;u[g]==u[i];f++)
            {
                count_2++;
            }
            if (count_2%2==1)
            {
                int y=count_2/2;
                while (y--)
                {
                    k[count]=u[i];
                    count++;
                }
            }
            else if (count_2%2==0)
            {
                int y=(count_2/2)+1;
                while (y--)
                {
                    k[count]=u[i];
                    count++;
                }
            }
            
        }
        cout << k;
    }
	
}
