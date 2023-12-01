#include<iostream>
using namespace std;

class Queue
{
	private:
		int rear,front;
		int arr[5];
		
	public:
		Queue()
		{
			rear = -1;
			front = -1;
			for(int i=0; i<5; i++)
			{
				arr[i] = 0;
			}
		}
		bool isFull()
		{
			if(rear == 4)
				return true;
			else
				return false;
		}
		bool isEmpty()
		{
			if(rear==-1 && front==-1)
				return true;
			else
				return false;
		}
		int dequeue()
		{
			int x;
			if(isEmpty())
				return 0;
			else if(front == rear)
			{
				x = arr[front];
				arr[front] = 0;
				rear = -1;
				front = -1;
				return x;
			}
			else
			{
				x = arr[front];
				arr[front] = 0;
				front++;
				return x;
			}
		}
		void enqueue(int val)
		{
			if(isFull())
				return;
			else if(isEmpty())
			{
				rear = 0;
				front = 0;
				arr[rear] = val;
			}
			else
			{
				rear++;
				arr[rear] = val;
			}
		}
		int count()
		{
		    return((rear-front)+1);
		}
		void display()
		{
		    for(int i=0; i<5; i++)
		    {
		        cout<<arr[i]<<" "<<endl;
		    }
		}
};
int main()
{
	Queue q1;
	int value,choice;
	do
	{
		cout<<"Enter the choice for Operation.enter 0 for exit"<<endl;
		cout<<"1.isFull()"<<endl;
		cout<<"2.isEmpty()"<<endl;
		cout<<"3.enqueue()"<<endl;
		cout<<"4.dequeue()"<<endl;
		cout<<"5.count()"<<endl;
		cout<<"6.display()"<<endl;
		cout<<"7.Clear screen"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				if(q1.isFull())
					cout<<"Queue is Full"<<endl;
				else
					cout<<"Queue is not Full"<<endl;
				break;
			
			case 2:
				if(q1.isEmpty())
					cout<<"Queue is Empty"<<endl;
				else
					cout<<"Queue is not Empty"<<endl;
				break;
			
			case 3:
				cout<<"Enter the value to push in queue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
				
			case 4:
				cout<<"Element Dequeue from Queue is:"<<q1.dequeue()<<endl;
				break;
				
			case 5:
			    cout<<"Number of elements in Queue:"<<q1.count()<<endl;
			    break;
			    
			case 6:
			    cout<<"Elements in Queue:"<<endl;
			    q1.display();
			    break;
		    case 7:
		        system("cls");
		        break;
			default: 
			    cout<<"Enter the valid choice"<<endl;
			    break;
				
		}
	}while(choice!=0);
	
	return 0;
}
