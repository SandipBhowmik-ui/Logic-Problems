class QueueUsingArray{
T *data;
int nextIndex;
int firstIndex;
int size;
int capacity;
public:
QueueUsingArray(int s){
data= new T[s];
nextIndex=0;
firstIndex= -1;
size=0;
capacity=s;
}
int getSize(){
return size;
}
bool isEmpty(){
return size==0;
}
//insert element
void enqueue(T element){

if(size==capacity){
cout<<"Queue is Full"<<endl;
return;
}
data[nextIndex]=element;
nextIndex=(nextIndex+1)%capacity;
if(firstIndex==-1){
firstIndex=0;
}
size++;
}

T front(){
}
}
