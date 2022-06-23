#include<stdio.h>
#include<string.h>

int queue[10001]={0,};
char command[6];
int queuenum = 0;

void callpush(int value)
{
    queue[queuenum] = value;
    queuenum++;
}
void callpop()
{
    if(queue[0] == 0 && queuenum == 0)
        printf("-1\n");
    else
    {
        printf("%d\n", queue[0]);
        for(int i=0;i<queuenum;i++)
        {
            queue[i] = queue[i+1];
        }
        queue[queuenum] = 0;
        queuenum--;
    }
}
void callsize()
{
    printf("%d\n", queuenum);
}
void callempty()
{
    if(queuenum==0&&queue[queuenum]==0)
        printf("1\n");
    else
        printf("0\n");
}
void callfront()
{
    if(queuenum==0&&queue[queuenum]==0)
        printf("-1\n");
    else
        printf("%d\n", queue[0]);
}
void callback()
{
    if(queuenum==0&&queue[queuenum]==0)
        printf("-1\n");
    else
        printf("%d\n", queue[queuenum-1]);
}


int main()
{
	int task, value;
	char *push = "push", *pop = "pop", *size = "size", *empty = "empty", *front = "front", *back = "back";
	scanf("%d", &task);
	
	for(int i=0; i<task; i++)
    {
	    
	    scanf("%s", command);

	    if(strcmp(command, push) == 0)
        {
	        scanf("%d", &value);
	        callpush(value);
	    }
	    else if(strcmp(command, pop) == 0)
        {
	        callpop();
	    }
	    else if(strcmp(command, size) == 0)
        {
	        callsize();
	    }
	    else if(strcmp(command, empty) == 0)
        {
	        callempty();
	    }
	    else if(strcmp(command, front) == 0)
        {
	        callfront();
	    }
	    else if(strcmp(command, back) == 0)
        {
	        callback();
	    }
	}

    return 0;
	
}
