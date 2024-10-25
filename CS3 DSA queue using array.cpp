#include <iostream>
using namespace std;

class Queue 
{
private:
    int front, rear, size;
    int* queue;

public:
  
    Queue(int s)
	 {
        front= -1;
		rear= -1;  
        size= s; 
        queue= new int[size];  
    }

    
    void enqueue(int value)
	 {
        if (rear == size - 1)
		 {
            
            cout << "Queue is full"<<endl;
        }
		 else
		 {
            if (front == -1) 
			{
               
                front = 0;
            }
            rear++;
            queue[rear] = value;
            cout << "Enqueued: " << value << endl;
        }
    }

  
    void dequeue() 
	{
        if (front == -1 ) 
		{
            
            cout << "Queue is empty"<<endl;
        } 
		else 
		{ 
        
            cout << "Dequeued: "<< endl;
           front++;
           
            if (front > rear)
			 {
                front =-1; 
				rear = -1;
            }
        }
    }


    void display()
	 {
        if (front == -1) 
		{
            cout << "Queue is empty\n";
        } else
		 {
            cout << "Queue : ";
            for (int i = front; i <= rear; i++) 
			{
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }

   
};


int main() {
    Queue q(5); 

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();  

    q.dequeue();
    q.display();  

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);  
    q.display();    

    return 0;
}
