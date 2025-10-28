#include <iostream>

using namespace std;
#define n 5
int arr[n];
int top=-1;

class Stack{
public:
    bool isFull(){
        if(top==n-1)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return  false;
    }
    void push(int x)
    {
        if(isFull())
        {
            cout<<"OverFlow\n"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top]=x;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow\n"<<endl;
            return;
        }
        else
        {
            top--;
        }
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty\n"<<endl;
            return;
        }
        else{
            for(int i=0; i<=top; i++)
            {
                cout<<"The element's are: "<<arr[i]<<" "<<endl;

            }

        }
    }
    void showTop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty \n"<<endl;
            return;
        }
        else
        {
            cout<<"The top value is : "<< arr[top]<<endl;

        }

    }
};


int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.showTop();

    s.pop();
    s.display();
    s.showTop();
    return 0;
}
