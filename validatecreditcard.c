#include<stdio.h>
long long int n,numm;
int main(){
	
	char name[10];
 	int expdate,cvc;
 	
 	int valid=0,count=0 ,cvc_valid=0;
	printf("enter your credit card details here.(only master card can be used.)");
 	printf("\nyour name:");
 	scanf("%s",&name);
 	
	get_cvc();

    while(!valid)
    {
        printf("Enter your Card number:\n");
        scanf("%lld", &n);
       
        numm=n;

        while(numm != 0)
        {
            numm /=10;
            count++;
        }

        if(count==16)
        {
            valid=1;
            validate();
        }

        else
        {
            printf("\nInvalid input, Card number should be of 16 digits. Try again\n");
            count=0;
        }
    }
    return n;
	
	
	
	
	
	
	
	
	
	return 0;
}




int validate(){
	
	int lastdig;
	
	
	lastdig=n%10;
	
	long long int new_num;
	
	new_num=(n-lastdig)/10;
	
	

	//reversing the newly generated number
	
	long long int rev_num=0;
	long long int rem=0;
	while(new_num!=0){
		
	
	rem=new_num%10;
	rev_num=rev_num*10+rem;
	new_num/=10;
	 
	
}
	
	
	
	
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,i,N1,N3;
	
	n1=rev_num%10;																		//seperating the digits
	n2=(rev_num%100-n1)/10;
	n3=(rev_num%1000-rev_num%100)/100;
	n4=(rev_num%10000-rev_num%1000)/1000;
	n5=(rev_num%100000-rev_num%10000)/10000;
	n6=(rev_num%1000000-rev_num%100000)/100000;
	n7=(rev_num%10000000-rev_num%1000000)/1000000;
	n8=(rev_num%100000000-rev_num%10000000)/10000000;
	n9=(rev_num%1000000000-rev_num%100000000)/100000000;
	n10=(rev_num%10000000000-rev_num%1000000000)/1000000000;
	n11=(rev_num%100000000000-rev_num%10000000000)/10000000000;
	n12=(rev_num%1000000000000-rev_num%100000000000)/100000000000;
	n13=(rev_num%10000000000000-rev_num%1000000000000)/1000000000000;
	n14=(rev_num%100000000000000-rev_num%10000000000000)/10000000000000;
	n15=(rev_num%1000000000000000-rev_num%100000000000000)/100000000000000;

																					//multiplying digits at odd place by2
	n1*=2;
	n3*=2;
	n5*=2;
	n7*=2;
	n9*=2;
	n11*=2;
	n13*=2;
	n15*=2;
	
																			//subtracting 9 from the digits greater than 9
	if(n1>9){	n1-=9;	}
	if(n3>9){	n3-=9;	}
	if(n5>9){	n5-=9;	}
	if(n7>9){	n7-=9;	}
	if(n9>9){	n9-=9;	}
	if(n11>9){	n11-=9;	}
	if(n13>9){	n13-=9;	}
	if(n15>9){	n15-=9;	}

	
	
	int final_sum = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12+n13+n14+n15;
	int finally= final_sum%10;

																			//checking if last digit of sum of digits is equal to last digit of card number						
	if(finally == lastdig){
		printf("Payment successful!!!");
	}else{
		printf("this is not valid card number");
	}
	
	
	

	
	
	
}







int get_cvc()   //checking that cvc number is of 10 digits during entering login information.
{
    int cvc, numm;
    int valid=0, count=0;

    while(!valid)
    {
        printf("Enter cvc number:\n");
        scanf("%d", &n);
        
        numm=n;

        while(numm != 0)
        {
            numm /=10;
            count++;
        }

        if(count==3)
        {
            valid=1;
        }

        else
        {
            printf("\nInvalid input, cvc number should be of 3 digits. Try again\n");
            count=0;
        }
    }
    return n;
}

