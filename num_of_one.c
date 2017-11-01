#include <stdio.h>
#include <stdlib.h>
//f(n)��ʾ[1...n]�������ְ���������1�ĸ����ͣ���nʹn==f(n)
//Is the result that big?

int f(int n){
	int sum=0,i,temp;
	for(i=1;i<=n;i++){
		int x=i;
		while(x>0){
			temp=x%10;
			if(temp==1)
				sum++;
			x/=10;
		}
	}
	//
	//printf("n=%d sum=%d\n",n,sum);
		
	return sum;
} 

int main(){
	int i;
	for(i=1;i<1000000;i++){
		int sum=f(i);
		if(i==sum){
			printf("n=%d\n",i);
		}
	}	
	
	return 0;
}
