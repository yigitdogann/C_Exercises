#include <stdio.h>

/*kullanıcıdan 2 farklı saat alalım ve
bu alınan saatleri toplam şeklinde yazdıralım */

typedef struct {
	int hrs;
	int min;
	int sec;
}myTime;

myTime getTime(void);
myTime addTime(myTime t1, myTime t2);
void printTime(myTime sum);
myTime sumCheck(myTime sum);

int main(void) {
	
	myTime t1 = {0}, t2 = {0};
	myTime sum = { 0 };
	puts("Enter two time values for adding");

	t1 = getTime();
	t2 = getTime();
//şuan iki adet saate sahibiz. t1-t2

	sum = addTime(t1, t2);
//toplama işlemi sonucumuzu atadık.

	printTime(sumCheck(sum));

	return 0;
}

myTime getTime(void) {
	myTime time = {0};
	printf("hours: ");
	scanf("%d", &time.hrs);
	printf("minutes: ");
	scanf("%d", &time.min);
	printf("seconds: ");
	scanf("%d", &time.sec);
	return time;
}

myTime addTime(myTime t1, myTime t2) {
	myTime a1 = t1;
	myTime a2 = t2;
	myTime sum = { 0 };

	sum.hrs = a1.hrs+a2.hrs;
	sum.min = a1.min+a2.min;
	sum.sec = a1.sec+a2.sec;

	return sum;
}

void printTime(myTime sum) {
	myTime result = sum;
	printf("%02d : ", result.hrs);
	printf("%02d : ", result.min);
	printf("%02d", result.sec);
}

myTime sumCheck(myTime sum) {
	myTime before = sum;

	if (before.sec >= 60) {
		before.min += before.sec / 60;
		before.sec %= 60;
	}
	if (before.min>=60) {
		before.hrs += before.min / 60;
		before.min %= 60;
	}
	return before;
}