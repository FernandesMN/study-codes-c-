#ifndef __poligono_h_
#define __poligono_h_

#include <vector>

struct vertice{
	double x;
	double y;

	vertice(double xx = 0.0, double yy = 0.0){
		x = xx;
		y = yy;
	}
};

class Poligono{

private:
	std::vector<vertice> vertices;
public:
	Poligono(){
		vertices.clear();
	}
	Poligono(const Poligono &obj){
		assign(obj);
	}
	inline
	void assign(const Poligono &obj){
		vertices.assign(obj.vertices.begin(),obj.vertices.end());
	}
	inline
	std::vector<vertice> & getVertices(){
		return vertices;
	}
	inline
	void show(){
		for(int i = 0; i < vertices.size(); i++){
			std::cout<<'v'<<i<<'('<<vertices[i].x<<','<<vertices[i].y<<')'<<std::endl;
		}
	}
	inline
	void addVertice(double x, double y){
		vertices.push_back(vertice(x,y));
	}
	inline
	void addVertice(const vertice &v){

	}
	vertice & operator[](int index){
		return vertices[index];
	}
};

#endif