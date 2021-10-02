using namespace std;
int main()
{
    int q ;
    cin >> q ;
    int n, sum = 0 ;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> n ;
        sum = 0 ;
        while(n != 0)
        {
            sum+= n%10 ;
            n = n / 10 ;
        }
        cout << sum << endl ;
    }
} 