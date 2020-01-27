#ifndef __RETANGULO_
#define __RETANGULO_

class Retangulo{

private:
	int x, y, largura, altura;
public:
	Retangulo(int x, int y, int w, int h);

	inline
	int getLargura(){
		return largura;
	}
	inline
	int getAltura(){
		return altura;
	}
	inline
	void setLargura(int w){
		largura = w;
	}
	void setAltura(int h){
		altura = h;
	}
	inline
	int perimetro(){
		return 2*(largura + altura);
	}
	inline
	int area(){
		return largura*altura;
	}

	void show();
	int localizarP(int x, int y);
};

#endif