#pragma once

struct Product 
{
private:
	string _productName;
	string _kindofProduct;
	string _productionCountry;

public:
	Product() = default;

	Product(string productName, string kindofProduct, string productionCountry)
	{
		setProductName(productName);
		setKindOfProduct(kindofProduct);
		setProductionCountry(productionCountry);
	}


	void setProductName(string productName) 
	{
		this->_productName = productName;
	}

	void setKindOfProduct(string kindofProduct)
	{
		this->_kindofProduct = kindofProduct;
	}


	void setProductionCountry(string productionCountry)
	{
		this->_productionCountry = productionCountry;
	}

	string getProductName() 
	{
		return _productName;
	};

	string getKindOfProduct() 
	{
		return _kindofProduct;
	};

	string getProductionCountry() 
	{
		return _productionCountry;
	};

	friend ostream& operator<<(ostream& out, Product product);
};

ostream& operator<<(ostream& out, Product pro) 
{
	out << "Product Name:" << pro._productName << endl;
	out << "KindOf Product:" << pro._kindofProduct << endl;
	out	<< "Production Country: " << pro._productionCountry<<endl;

	return out;
}

