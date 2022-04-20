// C++ program to check if a given tree is Min Heap or not
#include <iostream>

using namespace std;

// Returns true if given level order traversal is Min Heap.
bool isMin(int heap[], int size) {
	// Your code goes here	
int track = 0;
   for(int i = 0; i <= size; i++){
       if(heap[i] < heap[i*2] && heap[i] < heap[i*2+1]){
           track++;
       }
   }
   if(track == size/2){
       return true;
   }else{
       return false;
   }
    
}

// Driver code
int main()
{
    int size = 6;
    int *  heap;
    heap = new int[size];
    heap[0] = 15;
    heap[1] = 25;
    heap[2] = 30;
    heap[3] = 16;
    heap[4] = 34;
    
    cout << boolalpha;
    cout << "The heap is ";
	if (!isMin(heap, size))
		cout << "not ";
	cout << "a min heap." << endl;
	
	return 0;
}
