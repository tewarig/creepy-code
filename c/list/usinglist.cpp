/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <list>
using namespace std;

class Graph{
    int V;
    //araay of list
    list<int> *l;
    public: 
    Graph (int V){
       this->V = V;  
       l = new list<int>[V];
    }
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
        
        }
    void printAdjList() {
        //itletate over list
        for(int i=0;i<V;i++)
        {
             cout<< "Vertex" <<i<<"->";
            for(int nbr: l[i])
            {
                cout<<nbr<<",";
            }
            cout<<endl;
        }
    }    
};
int main()
{
   Graph g(4);
   g.addEdge(0,1);
   g.addEdge(0,2);
   g.addEdge(2,3);
   g.addEdge(1,2);

    return 0;
}
