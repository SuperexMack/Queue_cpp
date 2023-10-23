#include <bits/stdc++.h>
class CircularQueue
{

    int *arr;
    int frontq;
    int rear;
    int size;

public:
    // Initialize your data structure.
    CircularQueue(int n)
    {

        size = n;
        arr = new int[size];
        frontq = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {

        if ((frontq == 0 && rear == size - 1) || (rear == (frontq - 1) % (size - 1)))
        {

            return false;
        }

        else if (frontq == -1)
        {

            frontq = rear = 0;
        }

        else if (rear == size - 1 && frontq != 0)
        {

            rear = 0;
        }

        else
        {

            rear++;
        }

        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue()
    {

        if (frontq == -1)
        {

            return -1;
        }

        int ans = arr[frontq];
        arr[frontq] = -1;

        if (frontq == rear)
        {

            frontq = rear = -1;
        }

        else if (frontq == size - 1)
        {

            frontq = 0;
        }

        else
        {

            frontq++;
        }

        return ans;
    }
};