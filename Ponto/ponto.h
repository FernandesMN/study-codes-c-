#ifndef __ponto_h_
#define __ponto_h_

#include <math.h>
#include <string>

class Ponto{

private:
	double ord, abs;
	char pTexto[10];
public:
	Ponto(){
		abs = 0;
		ord = 0;
	}
	Ponto(double a, double o){
		setAtri(a,o);
	}
	Ponto(Ponto &obj){
		abs = obj.abs;
		ord = obj.ord;
	}

	inline
	double getOrd(){
		return ord;
	}
	inline
	double getAbs(){
		return abs;
	}
	inline
	void setOrd(double o){
		ord = o;
	}
	inline
	void setAbs(double a){
		abs = a;
	}
	inline
	void setAtri(double a, double o){
		setAbs(a);
		setOrd(o);
	}

	inline
	void posXY(double pX, double pY){
		abs += pX;
		ord += pY;
	}
	inline
	void posObj(Ponto &obj){
		abs += obj.abs;
		ord += obj.ord;
	}
	inline
	const char* compSem(Ponto &obj){
		return (ord == obj.ord)&&(abs == obj.abs)?"true":"false";
	}
	inline
	const char* operator==(Ponto &obj){
		return compSem(obj);
	}
	inline
	void pText(){
		sprintf(pTexto,"(%.2lf, %.2lf)", abs, ord);	
	}
	inline
	double dEuclidiana(Ponto obj){
		return sqrt((abs - obj.abs)*(abs - obj.abs) + (ord - obj.ord)*(ord - obj.ord));
	}
	inline
	void clone(Ponto obj){
		setAtri(obj.abs,obj.ord);
	}
	inline
	void show(){
		pText();
		puts(pTexto);
	}
};

#endif