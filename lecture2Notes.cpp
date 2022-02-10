//Vectors and Structs


#include <iostream>
#include<string>
#include <vector>

using namespace std;
struct Point{
    int x;
    int y; 

   void print(){
       cout << " x : " << x << " y : " << y << endl;
   }

};

struct Polygon{
    vector<Point> vertices;
};

int main(){
    Point origin;
    origin.x = 0;
    origin.y = 0;
    origin.print();


    Point p1;
    p1.x = 0;
    p1.y = 1;


    Point p2;
    p2.x = 1;
    p2.y = 1;
    

    Point p3;
    p3.x = 1;
    p3.y = 0;
  
    Point p4;
    p4.x = -1;
    p4.y = -1;

    Polygon poly;
    poly.vertices.push_back(origin);
    poly.vertices.push_back(p1);
    poly.vertices.push_back(p2);
    poly.vertices.push_back(p3);
    
    for(int i = 0; i < poly.vertices.size(); i++){
        Point p = poly.vertices[i];
        cout << "i  : " << i << " ";
        p.print();

    }
    cout << "capacity is " << poly.vertices.capacity() << endl; 
    cout << "is empty? " << poly.vertices.empty() << endl;
   
   
}