#include <iostream> 
#include<string>  
#include<algorithm> 
#include<cmath>
using namespace std;
int recursion(int num){
    if(num<=1){
        return 1;
        
    }
    return num*recursion(num-1); 
}


int main() { 
    
	printf("------------------------------------Smart Calculator-----------------------------------------------\n");
	printf("\nThis calulator can work in various modes such as Basic, Scientific, Trigonometric.\n");   
	top:
	printf("\nChoose the Options by giving index as an input\n1.Basic Mode\n2.Scientific Mode\n3.Trigonometric Mode \n");
 	int input;  
	string s; 
	printf("\nMode:\n");
	scanf("%d",&input); 
	    
	if(input==1){  
	
    double a,b,result; 
	char ch; 
    
	printf("\n\n---------------------------Welcome to Basic Mode-------------------------------------------\n");
	printf("\nEnter First Number:\n") ; 
    scanf("%lf",&a) ;
	printf("Enter Second Number:\n"); 
	scanf("%lf",&b);
	printf("Operation('+','-','/','*'):\n"); 
	cin>>ch;
		switch(ch){
	    case '+':
	    printf("Result:%lf\n",a+b);  
	    goto top;
	    break; 
	    case '-': 
	    printf("Result:%lf\n",a-b);   
	    goto top;
	    break; 
	     case '*': 
	    printf("Result:%lf\n",a*b);  
	    goto top;
	    break;  
	    case '/': 
	    printf("Result:%lf\n",a/b);  
	    goto top;
	    break;  
	    default :
	    printf("Result:Invalid operation\n"); 
	    goto top;
	    break; 
	    }     
	    
	  

	}   
	else if(input==2){
	    printf("\n---------------------------Welcome to Scientific Mode-------------------------------------------\n");
	double a,b,result; 
	string ch; 
    
	

	printf("\nOperation(loge,log,sqrt,sqr,pow,powe,fac,remndr):\n"); 
	cin>>ch; 
	if(ch=="loge" ){ 
	printf("\nEnter a Number:\n") ; 
    scanf("%lf",&a) ;
    printf("Result:%lf\n",log(a));  
    goto top;
	} 
	else if(ch=="log"){ 
	 printf("\nEnter First Number:\n") ; 
    scanf("%lf",&a) ;
	printf("Enter Second Number:\n"); 
	scanf("%lf",&b);
	 printf("Result:%lf\n",log(b)/log(a)); 
	 goto top;
	}
	else if(ch=="sqrt"){ 
	 printf("\nEnter a Number:\n") ; 
    scanf("%lf",&a) ;
	    printf("Result:%lf\n",sqrt(a)); 
	    goto top;
	} 
	else if(ch=="sqr"){ 
	printf("\nEnter a Number:\n") ; 
    scanf("%lf",&a) ;
	    printf("Result:%lf\n",b*b); 
	    goto top;
	} 
	else if(ch=="pow"){ 
	printf("\nEnter First Number:\n") ; 
    scanf("%lf",&a) ;
	printf("Enter Second Number:\n"); 
	scanf("%lf",&b);
	    printf("Result:%lf\n",pow(a,b)); 
	    goto top;
	} 
	else if(ch=="powe"){
	   	printf("\nEnter a Number:\n") ; 
    scanf("%lf",&a) ; 
    double e=2.7182; 
    printf("Result:%lf\n",pow(e,a)); 
    goto top;
    }
	else if(ch=="fac"){ 
	    int c;
	   printf("\nEnter a Number:\n") ; 
    scanf("%d",&c) ; 
    printf("Result:%d\n",recursion(c)); 
    goto top;
	} 
	else if(ch=="remndr"){  
	    int d,e;
	    printf("\nEnter First Number:\n") ; 
    scanf("%d",&d) ;
	printf("Enter Second Number:\n"); 
	scanf("%d",&e);
	    printf("Result:%d\n",d%e); 
	    goto top;
	}
	}
    else if(input==3){ 
        printf("\n---------------------------Welcome to Trigonometric Mode-------------------------------------------\n");
	double a,b;  
	double pi=3.1415926535;
    
	string ch; 
	 
    printf("\nOperation(sin,cos,tan,cosec,sec,cot):\n",ch); 
	cin>>ch;
	if(ch=="sin"){ 
	    	
    
    printf("\nEnter degrees:\n") ; 
    scanf("%lf",&a) ;  
    double t=(pi/180)*a; 
    printf("Result:%lf\n",sin(t));  
    goto top;
	} 
   else if(ch=="cos"){
        printf("\nEnter degrees:\n") ; 
    scanf("%lf",&a) ;  
    double t=(pi/180)*a; 
    printf("Result:%lf\n",cos(t)); 
    goto top;
    }  
    else if(ch=="tan"){
     printf("\nEnter degrees:\n") ; 
    scanf("%lf",&a) ;  
    double t=(pi/180)*a; 
    printf("Result:%lf\n",tan(t)); 
    goto top;
    } 
    else if(ch=="cosec"){
    printf("\nEnter degrees:\n") ; 
    scanf("%lf",&a) ;  
    double t=(pi/180)*a; 
    printf("Result:%lf\n",1/sin(t)); 
    goto top;
	} 
   else if(ch=="sec"){
        printf("\nEnter degrees:\n") ; 
    scanf("%lf",&a) ;  
    double t=(pi/180)*a; 
    printf("Result:%lf\n",1/cos(t));  
    goto top;
    }  
    else if(ch=="cot"){
     printf("\nEnter degrees:\n") ; 
    scanf("%lf",&a) ;  
    double t=(pi/180)*a; 
    printf("Result:%lf\n",1/tan(t)); 
    goto top;
    } 
    
    
    }
	else{
	    printf("Invalid input\n"); 
	    goto top;
	}
	return 0;
}
