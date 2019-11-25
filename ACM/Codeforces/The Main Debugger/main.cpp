#include<bits/stdc++.h>

using namespace std;

//struct heap{
//    int *arr,len,heap_size;
//};

class prio_que{
private:
//    heap que;
///
    int *arr;
    int length,heap_size;
///
    void max_heapify(int i){
        int l=2*i,r=2*i+1,maxx;
        if(arr[l]>arr[i] && l<heap_size)
            maxx=l;
        else
            maxx=i;
        if(arr[r]>arr[maxx] && r<heap_size)
            maxx=r;
        if(maxx!=i){
            swap(arr[i],arr[maxx]);
            max_heapify(maxx);
        }
    }


    void build_max_heap(){
        for(int i=length/2;i>=1;i--){
            max_heapify(i);
        }
        cout<<"***";
        printq();
        return;
    }

    void heap_sort(){
        heap_size=length;
        build_max_heap();
        for(int i=length;i>=2;i--){
            swap(arr[i],arr[1]);
            heap_size--;
            max_heapify(1);
        }
        heap_size=length;
        return;
    }
public:
    prio_que(){
        length=0;
        heap_size=length;
        arr=new int[INT_MAX/8];
        for(int i=0;i<INT_MAX/8;i++){
            arr[i]=NULL;
        }
    }
    void enq(int val){
        if(length!=INT_MAX/8){
            length++;
            //heap_size++;
            arr[length]=val;
            heap_sort();
        }
        else{
            cout<<"Please deque first.\nThank you\n";
        }
    }
    int deq(){
        if(length==0)
            return NULL;
        int temp=arr[length];
        length--;
        return temp;
    }
    int top(){
        return arr[length];
    }
    void printq(){
        cout<<'\n';
        for(int i=length;i>=1;i--)
            cout<<arr[i]<<' ';
        cout<<'\n';
    }
};

int main(){
    prio_que mypq;
    mypq.enq(5);
    mypq.printq();
    mypq.enq(6);
    mypq.printq();
    mypq.enq(1);
    mypq.printq();
    cout<<mypq.top()<<'\n';
    cout<<mypq.deq()<<' '<<mypq.deq()<<' '<<mypq.deq()<<'\n';

}

