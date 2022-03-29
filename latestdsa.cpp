Shiva Aruneshini M

29/3/22

1)
#include <iostream>
using namespace std;
int main() {
   int a,n,sum=0;
   cout<<"Enter a number to find sum of its digits: ";
   cin>>n;
   while(n>0)
   {
        a=n%10;// a is the last digit
        sum=sum+a;
        n=n/10;
        a=0;
   }
   
   cout<<sum;
    return 0;
}

5)
#include <iostream>
using namespace std;
int main() {
   int a,b,i,j,apre,apost;
   cout<<"Enter 2 numbers : "<<endl;
   cin>>a>>b;
   j=a%b;
   cout<<j<< " is the remainder when "<< a <<"/"<<b<<endl;
    if(b<a)
   {
       b+=a;
       cout<<b<<endl;
   }
   else
   {
        b-=a;
        cout<<b<<endl;
   }
   while(a!=0)
   {
       a--;
	--a;
       
       
   }
   cout<<a<<" is the value of a after decrementing to 0 "<<endl;

    return 0;
}



2)
#include <iostream>
 #include<math.h>
using namespace std;
int main() {
   int a,b,k,x,ans;
    cout<<"Enter a and b: "<<endl;
   cin>>a>>b;
   long long power = pow(a,b);
   int i=1;
   cout<<power<<"Is "<< a <<"power "<<b <<"value"<<endl;
   cout<<" enter k to find kth digit of a power b"<<endl;
   cin>>k;
 x=power;
   while(power>0)
   {
        ans=power%10;
        if(k==i)
        {
        cout<< ans<<endl;
        }
        i++;
        power=power/10;
   }
   
  cout<<ans <<" is the "<<  k <<" th digit of "<<x<<endl;
    return 0;
}


3)
#include <iostream>
 #include<math.h>
using namespace std;
int main() {
   int a,b,n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    if (n%2==0 && n%3==0 && n%11==0)
    {
       cout<<"Eleven";
   }
   else if (n%3==0 && n%11==0)
   {
       cout<<"Eleven";
   }
   else if (n%2==0 && n%3==0)
   {
       cout<<"Three";
   }
   else if (n%2==0 && n%11==0)
   {
       cout<<"Eleven";
   }
   else if (n%2==0)
   {
       cout<<"Two";
   }
   else if (n%3==0)
   {
       cout<<"Three";
   }
   else if(n%11==0)
   {
       cout<<"Eleven";
   }
   else {
       cout<<"-1";
   }
   cout<<endl;
    return 0;
}

4)
#include <iostream>
#include <math.h>

using namespace std;


bool isPerfectSquare(int n)
{
    
    int sr = sqrt(n); 

    if (sr * sr == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    bool perfect = false;

    
    cout << " Enter a positive integer :  ";
    cin >> n;
    perfect = isPerfectSquare(n);

    if (perfect)
    {
        cout << "\n\nThe entered number " << n << " is a perfect square of the number " << sqrt(n);
    }
    else
    {
        cout << "\n\nThe entered number " << n << " is not a perfect square";
    }

    cout << "\n\n\n";

    return 0;
}