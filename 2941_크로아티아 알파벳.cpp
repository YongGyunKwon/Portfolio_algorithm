#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char s[111];

    cin>>s;
    int c=0;

    int i=0;

    while (s[i]!=0) 
    {
		if (s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-')) 
            i++;
		else if (s[i] == 'd') 
        {
			if (s[i+1] == '-') 
                i++;
			else if (s[i+1] == 'z' && s[i+2] == '=') 
                i+=2;
		}
		else if ((s[i] == 'l' || s[i] == 'n') && s[i+1] == 'j') 
                i++;
		else if ((s[i] == 's' || s[i] == 'z') && s[i+1] == '=') 
                i++;
		
        
        i++;
        c++;
	}

    cout<<c<<endl;

    return 0;
}