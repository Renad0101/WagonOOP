#pragma once
template<class T>
class DoublyLinkedList
{
public:

	struct Node
	{
		Product data;
		Node* prev;
		Node* next;

		Node(Product data = "") : data(data), prev(), next() {}
	};


	void push_back(Product data) ////////// -> O(1)
	{
		push_back(new Node(data));
	}

	void push_back(Node* node)
	{
		if (_head == NULL)
		{
			_head = node;
			_tail = node;
			return;
		}


		_tail->next = node;
		node->prev = _tail;

		_tail = node;
	}



	void push_front(Product data)
	{
		push_front(new Node(data));
	}


	void push_front(Node* node)
	{
		if (_head == NULL)
		{
			_head = node;
			_tail = node;
			return;
		}

		node->next = _head;
		_head->prev = node;

		_head = node;
	}


	void pop_back()
	{
		if (_head == NULL)
			return;

		if (_head->next == NULL)
		{
			delete _head;
			_head = NULL;
			_tail = NULL;
			return;
		}


		_tail = _tail->prev;
		delete _tail->next;
		_tail->next = NULL;
	}


	void pop_front()
	{
		if (_head == NULL)
			return;

		if (_head->next == NULL)
		{
			delete _head;
			_head = NULL;
			_tail = NULL;
			return;
		}

		_head = _head->next;

		delete _head->prev;
		_head->prev = NULL;
	}

		
	Node* search(Product data) ////////////// ->O(N)
	{
		auto n = _head;

		while (n != NULL)
		{
			if (n->data == data)
				return n;

			n = n->next;
		}

		return NULL;
	}


	void traversalForward() const
	{
		Node* n = _head;

		while (n != NULL)
		{
			cout << n->data << endl;
			n = n->next;
		}
	}
	

	void traversalBackward() const
	{
		Node* n = _tail;

		while (n != NULL)
		{
			cout << n->data << endl;
			n = n->prev;
		}
	}


	const Node* head() const { return _head; }
	const Node* tail() const { return _tail; }

	void sort();



private:
	Node* _head = NULL;
	Node* _tail = NULL;
};
