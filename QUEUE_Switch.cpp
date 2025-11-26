 #include<iostream>
using namespace std;

class Queue{
public:
    int a[5];
    int front,rear;
    int n;

    Queue(int size)
    {
        n=size;
        front=-1;
        rear=-1;
    }
    bool isFull()
    {
        return rear==n-1;
    }
    bool isEmpty()
    {
        return (front ==-1 || front>rear );
    }
    void enqueue(int x)
    {
        if (isFull())
        {
            cout<<"Queue is Full\n";
        }
        else if(front ==-1 && rear == -1)
        {
            front=rear=0;
            a[rear]=x;
        }
        else{
            rear++;
            a[rear]=x;
        }

    }
    void dequeue()
    {
        if(isEmpty())
        {
           cout<<"Queue is Empty";
        }
        else if(front==rear)
        {
            cout<<a[front]<<" dequeued\n";
            front=rear=-1;
        }
        else{
            cout<<a[front]<<" dequeued\n";
            front++;
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty";
        }
        else{
            cout<<"Queue element's\n";
            for(int i=0; i<n;i++)
            {
                cout<<a[i]<<" " ;
                cout<<endl;
            }
        }
    }
};

int main()
{
    Queue q(5);

    int choice,value;

    while(true)
    {
        cout<<"\n Queue menu\n";
        cout<<"1.Enqueue\n";
        cout<<"2.Dequeue\n";
        cout<<"3.Display\n";
        cout<<"5.Exit\n";
        cout<<"Enter your choice\n";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                cout<<"Enter the value - \n";
                cin>>value;
                q.enqueue(value);
                break;
            }
        case 2:
            {
              q.dequeue();
              break;
            }
        case 3:
            {
                q.display();
                break;
            }
        case 4:
            {
                cout<<"Exiting the program\n";
                break;
                return 0;
            }
        default:
            cout<<"Invalid input\n";
            break;
        }

    }

}
