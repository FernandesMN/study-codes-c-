#ifndef __animal_h__
#define __animal_h__

#include <string>

class Animal{
protected:
    std::string nome;
    std::string ambiente;
    
public:
	Animal(){}
 	virtual
    std::string getNome() = 0;
    virtual
    std::string getAmbiente() = 0;
    virtual
    void show() = 0;
};
//-----------------------------------------------------------------------------------------------------
class Terrestre : public Animal
{
public:
	Terrestre() : Animal()
	{
		ambiente = "terrestre";
	}
};

class Boi : public Terrestre
{
public:
	Boi() : Terrestre(){
		nome = "Boi";
	}
	inline
	std::string getNome(){
		return nome;
	}
	inline
	std::string getAmbiente(){
		return ambiente;
	}
	inline
	void show(){
		std::cout<<getNome()<<std::endl;
		std::cout<<getAmbiente()<<std::endl;
	}
};

class Gato : public Terrestre
{
public:
	Gato() : Terrestre(){
		nome = "Gato";
	}
	inline
	std::string getNome(){
		return nome;
	}
	inline
	std::string getAmbiente(){
		return ambiente;
	}
	inline
	void show(){
		std::cout<<getNome()<<std::endl;
		std::cout<<getAmbiente()<<std::endl;
	}
};
//------------------------------------------------------------------------------------------------------
class Aquatico : public Animal{
public:
	Aquatico() : Animal(){
		ambiente = "aquatico";
	}
};

class Baleia : public Aquatico{
public:
	Baleia() : Aquatico(){
		nome = "baleia";
	}
	inline
	std::string getNome(){
		return nome;
	}
	inline
	std::string getAmbiente(){
		return ambiente;
	}
	inline
	void show(){
		std::cout<<getNome()<<std::endl;
		std::cout<<getAmbiente()<<std::endl;
	}
};

class Tubarao : public Aquatico{
public:
	Tubarao() : Aquatico(){
		nome = "tubarao";
	}
	inline
	std::string getNome(){
		return nome;
	}
	inline
	std::string getAmbiente(){
		return ambiente;
	}
	inline
	void show(){
		std::cout<<getNome()<<std::endl;
		std::cout<<getAmbiente()<<std::endl;
	}
};

#endif