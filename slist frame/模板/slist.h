#pragma once
#include<iostream>
using namespace std;
template<class T>class seqlist
{
private:
	T * m_data;
	size_t m_size;
	size_t m_capacity;
	void checkcapacity();
public:
	seqlist(size_t size,size_t capacity = 10):
		m_data(new T[capacity]),
		m_size(size),
		m_capacity(capacity>size?capacity:size)
	//参数列表
	{}
	
	T & operator[](int i){
		return m_data[i];
	}
	
	void push_back(const T &src);
	void pop_back();
	void pr();
	int size();
	~seqlist();
};