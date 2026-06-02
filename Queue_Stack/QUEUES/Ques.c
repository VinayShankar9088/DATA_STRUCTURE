#include <stdio.h>

#define max 5
int que[max];
int frount = -1, rear = -1;

void enque()
{
    int val;
    printf("enter ele.. to enqueue in queue : ");
    scanf("%d", &val);
    if (rear == max - 1)
    {
        printf("queue is full");
    }
    else if (frount = -1 && rear == -1)
    {
        frount = rear = 0;
        que[rear] = val;
    }
    else
    {
        rear++;
        que[rear] = val;
    }
}

void deque()
{
    if (frount = -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (frount == rear)
    {
        printf("%d dequed", que[frount]);
        frount = rear = -1;
    }
    else
    {
        printf("%d dequed", que[frount]);
        frount++;
    }
}

void disp()
{
    if (frount = -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (int i = frount; i <= rear; i++)
        {
            printf("%d\t", que[i]);
        }
    }
}

