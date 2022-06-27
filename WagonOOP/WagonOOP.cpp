#include <iostream>
#include<string>
#include <stack>

using namespace std;

#include"Products.h"
#include"TrainWagon.h"
#include"DoubleList.h"



int main()
{
	DoublyLinkedList<Wagon> train;

	Product p1("Red Bull", "Energy Drink", "AUSTRIA");
	Product p2("Hell", "Energy Drink", "HUNGARY");
	Product p3("Burn", "Energy Drink", "USA");
	Product p4("Hi-Tiger", "Energy Drink", "CHINA");
	


	

////////////////////////////////////////////////     Add Method      /////////////////////////////////////

	train.push_front(p1);
	train.push_front(p2);
	train.push_back(p3);
	train.push_back(p4);

//////////////////////////////////////////////     Delete Method     ///////////////////////////////////////

	train.pop_front();
	train.pop_back();

///////////////////////////////////////////////    Display Method    /////////////////////////////////////////
	
	train.traversalBackward();



}
