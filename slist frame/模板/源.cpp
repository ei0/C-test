#include"slist.h"
template<class T>
void seqlist<T>::checkcapacity(){
	if (m_size == m_capacity){
		//m_capacity *= 2;
		//m_data = (T*)realloc(m_data,sizeof(T)*m_capacity);
		T*newspace = new T[m_capacity];
		for ( int i = 0; i < m_size;i++){
			newspace[i] = m_data[i];
		}
		delete[] m_data;
		m_data = newspace;
	}
}//À©ÈÝ
template<class T>
void seqlist<T>::push_back(const T &src){
	checkcapacity();
	m_data[m_size] = src;
	m_size++;
}
template<class T>
void seqlist<T>::pop_back(){
	m_size--;
}
template<class T>
void seqlist<T>::pr(){
	for (int i = 0; i <m_size; i++){
		cout << m_data[i] << endl;
	}
}
template<class T>
int seqlist<T>::size(){
	return m_size;
}
template<class T>
seqlist<T>::~seqlist(){
	if (m_data){
		delete[] m_data;
	}
}
