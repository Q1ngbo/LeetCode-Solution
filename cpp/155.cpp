
class MinStack
{
public:
    int data[10000];
    int min, n;
    MinStack()
    {
        //data = new int;
        min = 0;
        n = 0;
    }
   

    void push(int x)
    {
        data[n++] = x;
        if (data[min] > x)
            min = n - 1;
    }

    void pop()
    {
        n--;
        if (min == n)
        {
            min = 0;
            for (int i = 0; i < n; i++)
            {
                if (data[min]>data[i])
                    min=i;
            }
        }
    }

    int top()
    {
        return data[n - 1];
    }

    int getMin()
    {
        return data[min];
    }
};