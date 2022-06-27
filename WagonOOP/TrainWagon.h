#pragma once

struct Wagon 
{
private:
	string _name;
	stack<Product> products;

public:

	Wagon() = default;


	Wagon(string name) 
	{
		setName(name);
	}


	void setName(string name) 
	{
		this->_name = name;
	}



	string getName() 
	{
		return _name;
	};



	void appendProduct(Product pro) {
		products.push(pro);
	}

	void removeProduct(Product pro) 
	{
		products.pop();
	}

};

