#include<stdio.h>
#include<stdlib.h>
int main(){
    int reqArr[50], n, head, i, pos, dsk_sz, res=0, j, len, temp;
    printf("Enter number of requests: ");
    scanf("%d", &n);
    printf("Enter requests: ");
    for(i = 1; i <= n; i++)
        scanf("%d", &reqArr[i]);
    printf("Enter head position: ");
    scanf("%d", &head);
    printf("Enter total disk size: ");
    scanf("%d", &dsk_sz);
    reqArr[0] = head;
    reqArr[n+1] = dsk_sz;
    //sorting
    for(i=0;i<n+1;i++) {
        for(j=0;j<n+1;j++) {
            if(reqArr[j]>reqArr[j+1]) {
                temp = reqArr[j];
                reqArr[j] = reqArr[j+1];
                reqArr[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++) {                                      
        if(reqArr[i] == head) {
            pos = i;
            break;
        }
    }
    res = reqArr[n+1] - reqArr[pos]; 
    printf("Access path: %d", reqArr[pos]);

    for(i = pos+1; i <= n+1; i++){
        printf(" -> %d", reqArr[i]);
    }
    for(i = pos-1; i >= 0; i--)
        printf(" -> %d", reqArr[i]); 
    res += abs(dsk_sz - reqArr[pos-2]);
    printf("\nTotal Distance: %d\n", res);
    return 0;
}
