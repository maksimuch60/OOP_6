#pragma once
#include <vector>
using namespace std;

template <class T>
class Queue
{
private:
	vector<T> vec;
public:
	T& back();
	bool empty();
	T& front();
	void pop();
	void push(T);
	int size();
	void show();
	void erase(int pos);
	void emplace(int pos, T);
};

template<class T>
T& Queue<T>::back()
{
	return vec.back();
}

template<class T>
bool Queue<T>::empty()
{
	return vec.empty() ? true : false;
}

template<class T>
T& Queue<T>::front()
{
	return vec.front();
}

template<class T>
void Queue<T>::pop()
{
	vec.erase(vec.begin());
}

template<class T>
void Queue<T>::push(T obj)
{
	vec.push_back(obj);
}

template<class T>
int Queue<T>::size()
{
	return vec.size();
}

template<class T>
void Queue<T>::show()
{
	for (auto element : vec)
	{
		cout << element;
	}
}

template<class T>
void Queue<T>::erase(int pos)
{
	vec.erase(vec.begin() + pos - 1);
}

template<class T>
void Queue<T>::emplace(int pos, T obj)
{
	vec.erase(vec.begin() + pos - 1);
	vec.insert(vec.begin() + pos - 1, obj);
}

       