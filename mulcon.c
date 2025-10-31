#include <stdio.h>
int main () {
  int a,b,c,d;
  printf("enter your numbers : \n")
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  printf("Entered Values are\na=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
  if (a>b) {
    printf("Condition 1:\na=%d is greater than b=%d\n", a,b);
  }
  else {
    printf("\nCondition 1:\na=%d is not greater than b=%d\n",a,b);
  }
  if (c>=d) {
    printf("\nCondition 2:\nc=%d is greater than or equal to d=%d\n",c,d);
  }
  else {
    printf("\nCondition 2:\nc=%d is less than d=%d\n", c,d);
  }
  if (a>b) {
    printf("\nCondition 3:\na=%d is greater than b=%d\n", a,b);
  }
  else {
    printf("\nCondition 3:\na=%d is not greater than b=%d\n",a,b);
  }
  if (c<=d) {
    printf("\nCondition 4:\nc=%d is less than or equal to d=%d\n",c,c);
  }
  if (a!=b) {
    printf("\nCondition 5:\na=%d and b=%d are not equal\n", a,b);
  }
  if (c==d) {
    printf("\nCondition 6:\nc=%d is equal to d=%d\n",c,d);
  }
  else {
    printf("\nCondition 6:\nc=%d is not equal to d=%d\n",c,d);
  }
  return 0;
}