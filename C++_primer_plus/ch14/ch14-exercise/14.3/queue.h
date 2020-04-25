#ifndef QUEUE_H_
#define QUEUE_H_

template <class T>
class QueueTp
{
    private:
        enum {QUEUE_SIZE = 10};
        struct Node
        {   
            T item;
            Node * next;
        };
        Node * front;
        Node * rear;
        int items;
        const int qsize;
    
    public:
        QueueTp(int qs = QUEUE_SIZE);
        ~QueueTp();
        bool Isempty() {return items == 0;};
        bool Isfull() {return items == qsize;};
        int QueueCount() {return items;}
        bool enqueue(const T & item);
        bool dequeue(T & item);

};


template <class T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}

template <class T>
QueueTp<T>::~QueueTp()
{
    Node * temp;
    while(front != nullptr)
    {
        temp = front;
        front = front->next;
        delete temp;
    };
}


template <class T>
bool QueueTp<T>::enqueue(const T & item)
{
    if (Isfull()) return false;

    Node * add;
    if (front == nullptr)
    {
        add->item = item;
        add->next = nullptr;
        front = add;
        rear = add;
        
    }
    else
    {
        add->item = item;
        add->next = nullptr;
        rear->next = add;
        rear = add;
        
    }
    delete add;
    ++items;
    return true;
}

template <class T>
bool QueueTp<T>::dequeue(T & item)
{
    if (Isempty()) return false;

    Node * temp;
    item = front->item;
    temp = front;
    front = front->next;
    delete temp;
    --items;
    return true;
}


#endif