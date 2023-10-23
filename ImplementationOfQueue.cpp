#include <bits/stdc++.h>

class Queue
{

    int *arr;
    int frontq;
    int rear;
    int size;

public:
    Queue()
    {
        // Implement the Constructor

        size = 10000;
        arr = new int[size];
        frontq = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {

        if (frontq == rear)
        {

            return true;
        }

        else
        {

            return false;
        }
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function

        if (rear == size)
        {

            cout << "queue is full" << endl;
        }

        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {

        if (rear == frontq)
        {

            return -1;
        }

        else
        {

            int ans = arr[frontq];

            arr[frontq] = -1;
            frontq++;

            if (rear == frontq)
            {

                frontq = 0;
                rear = 0;
            }

            return ans;
        }
    }

    int front()
    {

        if (rear == frontq)
        {

            return -1;
        }

        else
        {

            return arr[frontq];
        }
    }
};