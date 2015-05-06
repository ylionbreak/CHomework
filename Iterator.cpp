#include<cstdio>
#include<iostream>
using namespace std;

class It{
    private:
        int * ptr;
    public:
        friend class Queue;
        It (){

        }
        int next(){
          return *ptr++;
        }
};

class Queue{
    private:
        int a[10];
        int posi;
        int readPosi;
    public:
        Queue(){
            for(int i=0;i<10;i++)
            a[i]=0;
            posi=0;
            readPosi=-1;
        }
        void push(int num){
            a[posi]=num;
            posi++;
        }
        int next(){
            readPosi++;
            return a[readPosi];
        }
        It* creat(){
           It* it = new It();
           it->ptr = a;
           return it;
        }

};


int main(){
    Queue q;
    q.push(100);
    q.push(200);
    It* it1=q.creat();
    cout<<it1->next()<<endl;
    cout<<it1->next()<<endl;
    //assert(!it.next());
    return 0;
}
