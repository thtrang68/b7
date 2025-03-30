#include <stdio.h>
int main(){
	int n, arr[100], max,min,sum = 0 ;
	printf("nhap so luong phan tu: ");
	scanf("%d",&n);
	
	printf("nhap cac phan tu:\n");
	for (int i = 0; i < n; i ++){
		scanf("%d",&arr[i]);
		sum += arr[i];
		if (i == 0) {
			max = min = arr[i]; 
		}else {
			if (arr[i] > max) max = arr[i];
			if (arr[i] < min) min = arr[i]; 
		} 
	}
	printf("trung binh cong: %.2f\n");
	printf("gia tri lon nhat: %d\n", max);
	printf("gia tri lon nhat: %d\n", min);
	return 0; 
}
