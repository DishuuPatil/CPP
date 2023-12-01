#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    bool isFull()
    {
        return (top == 4);
    }

    void push(int val)
    {
        if (isFull())
            cout << "Stack is Overflow\n";
        else
        {
            top++;
            arr[top] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Underflow\n";
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    int count()
    {
        return (top + 1);
    }

    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack is Underflow\n";
            return 0;
        }
        else
        {
            return (arr[pos]);
        }
    }

    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "Value changed at location: " << pos << endl;
    }

    void display()
    {
        cout << "Elements in stack are: ";
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s1;
    int position, value, option;

    do
    {
        cout << "What Operations do you want to perform? Select the option. Enter 0 to exit" << endl;
        cout << "1. isFull()" << endl;
        cout << "2. isEmpty()" << endl;
        cout << "3. push()" << endl;
        cout << "4. pop()" << endl;
        cout << "5. count()" << endl;
        cout << "6. peek()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. Clear Screen" << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            if (s1.isFull())
                cout << "Stack is Full" << endl;
            else
                cout << "Stack is not Full" << endl;
            break;
        case 2:
            if (s1.isEmpty())
                cout << "Stack is Empty" << endl;
            else
                cout << "Stack is not Empty" << endl;
            break;
        case 3:
            cout << "Enter the number to push in Stack" << endl;
            cin >> value;
            s1.push(value);
            break;
        case 4:
            cout << "Value popped from Stack is: " << s1.pop() << endl;
            break;
        case 5:
            cout << "Number of Elements in Stack: " << s1.count() << endl;
            break;
        case 6:
            cout << "Enter the position you want to peek: ";
            cin >> position;
            cout << "Peek function called: " << s1.peek(position) << endl;
            break;
        case 7:
            cout << "Enter the position and value to change in stack: ";
            cin >> position >> value;
            s1.change(position, value);
            break;
        case 8:
            cout << "Display Function called:" << endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "Enter a proper option number" << endl;
        }
    } while (option != 0);

    return 0;
}
