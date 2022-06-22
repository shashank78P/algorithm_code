#include<stdio.h>
int queue[10],arr[10][10];
int i,j,n,front=0,rare=-1,start;
void check(int start){
    if(rare == n-1){    //recurssion termination condn
        return;         //n-1 edges
    }
    else{
        for(i=1;i<=n;i++){
            int flag =0;
                if(arr[start][i] != 0 ){
                    for(j=0;j<=rare;j++){   //to check for duplicate key
                        if(queue[j] == i){
                            flag = 1;
                        }
                    }
                    if(flag == 0){ //duplicate key is not present then proceed
                        queue[++rare]=i;
                }
          }
        }
    return check(queue[front++]);
    }
}
void main(){
    printf("\n Enter a order of an matrix");
    scanf("%d",&n);
    printf("\nEnter array element");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEneter Starting node:\t");
    scanf("%d",&start);
    queue[++rare]=start;
    check(start);
    for(i=0;i<=rare;i++)
            printf("%d\t",queue[i]);
}
