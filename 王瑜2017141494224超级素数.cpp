#include<stdio.h>
#include<math.h>

int isprime(int a){              //�ж�a�Ƿ�������������ֵΪ1��0 
    for(int i=2;i<=sqrt(a);i++){
    	if(a%i==0)
    	   return 0;
	}
	return 1;                    //������ 
}

int sum(int a[],int n){          //��������aԪ�صĺ� 
    int count=0;
	for(int i=0;i<n;i++)
	    count+=a[i];
	return count;
}

int mult(int a[],int n){         //��������aԪ�صĳ˻� 
	int s=1;
	for(int i=0;i<n;i++)
	    s*=a[i];
	return s;
}

int mult2(int a[],int n){       //����ƽ���� 
	int s=0;
	for(int i=0;i<n;i++)
		s=s+a[i]*a[i];
	return s;
}

int max(int a[],int n){         //��������aԪ�ص����ֵ 
	int m=0;
	for(int i=0;i<n;i++){
		if(a[i]>=m)
		  m=a[i]; 
	}
	return m;
}

int main(){
	int a[1000]={0},i=0;        //װ�г������������鼰����������Ԫ�ظ���i
	for(int j=100;j<=999;j++){
		int b[3]={0};
		b[0]=j%10;b[1]=(j/10)%10;b[2]=j/100;
		if(isprime(j)&&isprime(sum(b,3))&&isprime(mult(b,3))&&isprime(mult2(b,3)))			
		   a[i++]=j;            //���ǳ���������װ�뼯��a�� 
	}
	printf("���������ĸ���Ϊ��%d\n",i);
	printf("��������֮��Ϊ��%d\n",sum(a,i));
	printf("���ĳ�������Ϊ��%d\n",max(a,i));
}
