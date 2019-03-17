#include<stdio.h>
#include<math.h>

int isprime(int a){              //判断a是否是素数，返回值为1或0 
    for(int i=2;i<=sqrt(a);i++){
    	if(a%i==0)
    	   return 0;
	}
	return 1;                    //是素数 
}

int sum(int a[],int n){          //返回数组a元素的和 
    int count=0;
	for(int i=0;i<n;i++)
	    count+=a[i];
	return count;
}

int mult(int a[],int n){         //返回数组a元素的乘积 
	int s=1;
	for(int i=0;i<n;i++)
	    s*=a[i];
	return s;
}

int mult2(int a[],int n){       //返回平方和 
	int s=0;
	for(int i=0;i<n;i++)
		s=s+a[i]*a[i];
	return s;
}

int max(int a[],int n){         //返回数组a元素的最大值 
	int m=0;
	for(int i=0;i<n;i++){
		if(a[i]>=m)
		  m=a[i]; 
	}
	return m;
}

int main(){
	int a[1000]={0},i=0;        //装有超级素数的数组及超级素数的元素个数i
	for(int j=100;j<=999;j++){
		int b[3]={0};
		b[0]=j%10;b[1]=(j/10)%10;b[2]=j/100;
		if(isprime(j)&&isprime(sum(b,3))&&isprime(mult(b,3))&&isprime(mult2(b,3)))			
		   a[i++]=j;            //若是超级素数则装入集合a中 
	}
	printf("超级素数的个数为：%d\n",i);
	printf("超级素数之和为：%d\n",sum(a,i));
	printf("最大的超级素数为：%d\n",max(a,i));
}
