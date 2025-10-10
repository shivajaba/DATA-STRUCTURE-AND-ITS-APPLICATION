#include <stdio.h>
#include <stdlib.h>
void towerofHanoi(int n, char source, char temp, char destination)
{
    if (n==1) {
      printf("Move disc 1 from%c -> %c\n", source, destination);
    return;
    }
  towerofHanoi(n-1, source, destination, temp);
  printf("Move disc %d from %c-> %c\n",n, source, destination);
  towerofHanoi(n-1,temp, source,destination);
}
int main() {
  int n;
  printf("Enter number of discs:");
  scanf("%d",&n);
  printf("\n sequence of moves:\n");
  towerofHanoi(n, 's', 'T', 'D');
  int totalmove=(1<<n)-1;
  printf("\nTotal number of moves =%d\n",totalmove);
 return 0;
}
