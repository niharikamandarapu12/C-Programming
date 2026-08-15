/*
#include<stdio.h>
int main()
{
	int n,x,a,rem;
	printf("enter the value of n :=");
	scanf("%d",&n);
	printf("enter the value of x :=");
	scanf("%d",&x);
		a=n/x;
		printf("a=%d\n",a);
		rem=n%x;
	printf("rem=%d\n",rem);
	int divisor;
	divisor=x;

	 printf("divisor = %d",divisor);
	 return 0;
	 
	
}
*/


/*

#include<stdio.h>
int main()
{
	int a=0,b=4, sum, diff, pro,q , rem;
	printf("sum=%d\n",a+b);
	printf("diff=%d\n",a-b);
	printf("pro=%d\n",a*b);
	
if (a!=0)
{
	q=a/b;
	printf("quotinet=%d\n",q);
	rem=b*q-a;
	printf("remainder=%d",rem);
	
}
else
{
	printf("some operations could not possible");
}
return 0;
}

*/

/*
#include<stdio.h>
int main()
{
	int n;
	printf("enter the age :");
	scanf("%d",&n);
	if(n>0)
	{
	    n=n+10;
		printf("age after 10 years is = %d",n);
		scanf("%d",&n);
		
		
	}
	else 
	{
		printf("ENTER POSITIVE NUMBERS ONLY");
	}
	return 0;
}


#include <stdio.h>

int main()
{
    int a, b, c, temp;

    printf("Enter a, b, c values: ");
    scanf("%d %d %d", &a, &b, &c);

    temp = a;   // Store original a
    a = b;
    b = c;
    c = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}






#include<stdio.h>
int main()
{

int a , b, c ,temp;
printf("enter the num:");
scanf("%d %d %d",&a,&b,&c);
printf("\nBEFORE SWAPPING a=%d , b=%d , c=%d",a , b, c);
if(a!=0 && b!=0 && c!=0)
{
	temp=a;
     a=b;
     b=c;
     c=temp;
	printf("\nAFTER SWAPING a=%d , b=%d , c=%d",a , b, c);
	
}
printf("\nsuccessfull swaping ");

return 0;
			
}






#include<stdio.h>
int main()
{
	int a = 453, rev=0;
int	last_digit= a%10; // ---------3
	printf("last digit=%d",last_digit);
	rev= last_digit; //--------3
	printf("\nrev=%d",rev);
	
int rem= a/10;//----------45
	printf("\nremainder=%d",rem);
	
int k = rem%10;//---------5
printf("\nk=%d",k);
rev=rev*10+5;//----------35
printf("\nrev=%d",rev);
int y = rem / 10;//----------4
printf("\ny=%d",y);
rev=rev*10+4;//-----------354
printf("\nrev=%d",rev);
return 0;

}


// wrong fromat ----------right == rem*10+digit
#include<stdio.h>
int main()
{
	int a = 781, rev=0;
int	last_digit= a%10; // ---------1
	printf("last digit=%d",last_digit);
	rev= last_digit; //--------1
	printf("\nrev=%d",rev);
	
int rem= a/10;//----------78
	printf("\nremainder=%d",rem);
	
int k = rem%10;//--------8
printf("\nk=%d",k);
rev=rev*80+0;//----------80
printf("\nrev=%d",rev);
int y = rem / 10;//---------7
printf("\ny=%d",y);
rev=rev+107;//-----------187
printf("\nrev=%d",rev);
return 0;

}




#include<stdio.h>
int main()
{
	int a = 962, rev=0;
int	last_digit= a%10; // ---------2
	printf("last digit=%d",last_digit);
	rev= last_digit; //--------2
	printf("\nrev=%d",rev);
	
int rem= a/10;//----------96
	printf("\nremainder=%d",rem);
	
int k = rem%10;//--------6
printf("\nk=%d",k);
rev=rev*10+k;//----------26
printf("\nrev=%d",rev);
int y = rem / 10;//---------9
printf("\ny=%d",y);
rev=rev*10+y;//-----------187
printf("\nrev=%d",rev);
return 0;

}




#include<stdio.h>
int main()
{
	int P,R,T,si;
	printf("enter the principal amount , rate of interest , time in years",P,R,T);
	scanf("%d %d %d",&P,&R,&T);
	si=P*R*T/100;
	printf("si=%d",si);
	return 0;
		
}




#includep<stdio.h>
int main()
{
	int a;
	printf("enter the value of a = ");
	scanf("%d",&a);
	if(a>0)
	{
		printf(" %d POSITIVE NUMBER",a);
		
	}
	else
	{
		printf("%d is NEGATIVE NUMBER",a);
		
	}
	
}



#include <stdio.h>

int main()
{
    char pond;

    printf("Enter the character: ");
    scanf("%c", &pond);
    int num;
    for(i=0;i<n;i++)
    {
    	num = i;
    	
	}

    if (pond == 'A' || pond == 'E' || pond == 'I' || 
        pond == 'O' || pond == 'U' ||
        pond == 'a' || pond == 'e' || pond == 'i' || 
        pond == 'o' || pond == 'u')
    {
        printf("pond is vowel");
    }
    else if
    {
        
    }

    return 0;
}






#include<stdio.h>
int main()
{
	int a=10,i;
	for(i=1;i<a+1;i++)
	{
		printf("i=%d\n",i);
	}
}


#include<stdio.h>
int main()
{
	int a ,i;
	for(i=10;i>=0;i--)
	{
		printf("i=%d\n",i);
		
	}
}



#include<stdio.h>
int main(){
	int i;
	
for(i=1;i<10;i++)
{

	
if(i%2==0){
	printf("%d\n",i);
}

}

return 0;
}



	
#include<stdio.h>
int main()

{
	
	
int i;
for(i=1;i<40;i++)
{

if(i%2==1)
{
printf("%d\n",i);
}

}

return 0;
}


#include<stdio.h>
int main()
{
	int a,i,c;
	printf("enter a value : ");
	scanf("%d",&a);
	if(a!=0){
	
	for(i=1;i<=10;i++)
	{
	  c=a*i;
	  printf("%d x %d = %d\n",a,i,c);

}
}
else
{
	printf("a==0",a);
	
}
}
   




#include<stdio.h>
int main()
{


for(;;)
{
    printf("Hello\n");
}
}



#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the value of N :");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	printf("%d\n",i);
	if(i%2==1)
	{
		printf(" even are %d\n",i);
		sum=sum+i;
	}
}
printf("the total sum is = %d\n",sum);
if(sum%2==0)
{
	printf("the sum is even");
	
}
else
{
	printf("the sum is odd");
}

}




#include<stdio.h>
int main()
{
	int x,i,count=0;
	printf("enter x value :");
	scanf("%d",&x);
	for(i=1;i<x;i++)
	{
		
		
	
	if(i%3==0)
		{
		
			count++;
		}
			printf("%d",count);
	}
}





#include<stdio.h>
int main()
{
	int a ,i, n;
	printf("enter a number:");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	a=i*i;
    	printf("%d\n",a);
    	
    	
	}
	
	
}




#include<stdio.h>
int main()
{
  int i, a , x;
  printf("enetr the value of a");
  scanf("%d",&a);
  for(i=0;i<=a;i++)
  {
  	x=i*i;
  	printf("%d\n",x);
  }
	
}


#include<stdio.h>
int main()
{
	int a,b,c,count=0;
	printf("enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
			b=a%10;
			printf("b = %d\n",b);
			count++;
			c=a/10;
		   a=c;
		  
		   
			
	}
	printf("count = %d",count);
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,c,count=0,sum=0;
	printf("enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
			b=a%10;
			printf("b = %d\n",b);
			count++;
			
			c=a/10;
		   a=c;
           sum = sum+b;
		  
		  
		   
			
	}
	printf("count = %d\n",count);
	printf("sum=%d",sum);
	return 0;
}



#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a num:");
	scanf("%d",&a);
	printf("the original digit is %d\n",a);
	while(a!=0)
	{
		
		b=a%10;
		printf("%d",b);
		c=a/10;
		a=c;
		
	}
	return 0;
}

*/


#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}





