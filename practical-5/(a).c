#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty(){
    return front == -1;
}

int isFull(){
    return rear == MAX - 1;
}

void enqueue(int item) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d\n", item);
      return;   
    }
    if (isEmpty()) {
        front = 0;  
    }
    rear++;
    queue[rear] = item;
    printf("%d enqueued to the queue\n", item);
}

// remove element
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty.you are not able to  dequeue\n");
        return 0;  
    }
    int item = queue[front];
    if (front == rear) {
        
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    printf("%d dequeued from the queue\n", item);
    return item;
}

// display
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}


int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();

    dequeue();
    display();

    enqueue(4);
    enqueue(5);
    enqueue(6); 
    display();

    return 0;
}


