#ifndef __EXERCICIO4_
#define __EXERCICIO4_

class Retangulo{

private:
	int x, y;	//PONTO
	int altura, largura;
	int perim, area;	//PERIMETRO E AREA
public:
	Retangulo(int x0, int y0, int h, int l);	//CONSTRUTOR

	inline	
	void setX(int x0){	//Atribui valor a x
		x = x0;
	}
	inline
	void setY(int y0){	//Atribui valor a y
		y = y0;
	}
	inline
	void setAltura(int h){	//Atribui valor a altura
		altura = h;
	}
	inline
	void setLargura(int l){	//Atribui valor a largura
		largura = l;
	}
	inline
	void perimetro(int h, int l){	//Calcula perimetro
		perim = 2*(l + h);
	}
	inline
	void areaR(int h, int l){	//calcula area
		area = l * h;
	}

	inline
	int getX(){	//Pega o valor de x
		return x;
	}
	inline
	int getY(){	//Pega o valor de y
		return y;
	}
	inline
	int getAltura(){	//Pega o valor da altura
		return altura;
	}
	inline
	int getLargura(){	//Pega o valor da largura
		return largura;
	}
	inline
	int getPerim(){	//Pega o valor do perimetro
		return perim;
	}
	inline
	int getArea(){	//Pega o valor da area
		return area;
	}

	int localizarP(int x, int y);	//localiza o ponto que sera entregue
	void show();	//exibe as informacoes na tela

};

#endif