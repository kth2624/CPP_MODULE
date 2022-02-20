/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkim <tkim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:45:37 by tkim              #+#    #+#             */
/*   Updated: 2022/02/21 00:57:58 by tkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

/*
template<typename T>
class Test {
	private:
		T value_;
	public:
		Test(T value) : value_(value) {};
}

int main(void) {
  Test<int> t_int(42); // 템플릿 인수 명시
  Test<std::stding> t_string("hello"); // 템플릿 인수 명시
}*/

template <typename T>
class Array
{ 
	private:
		T *arr;
		unsigned int n;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& obj);
		~Array();
		Array& operator=(const Array<T>& obj);
		T& operator[](unsigned int n);
		const T& operator[](unsigned int n)const;
		unsigned int size()const;
};


template<typename T>
Array<T>::Array():arr(new T[0]),n(0)
{

}

template<typename T>
Array<T>::Array(unsigned int n):arr(new T[n]),n(n)
{

}

template<typename T>
Array<T>::Array(const Array<T>& obj):arr(new T[obj.size()]),n(obj.size())
{
	*this = obj;
}

template<typename T>
Array<T>::~Array()
{
	delete[] arr;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	delete[] arr;
	n = obj.size();
	arr = new T[n];
	for(unsigned int i = 0; i < n; i++)
	{
		arr[i] = obj.arr[i];
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int idx)
{
	if(n <= idx)
		throw std::exception();
	return arr[idx];
}

template<typename T>
const T& Array<T>::operator[](unsigned int idx)const
{
	if(n <= idx)
		throw std::exception();
	return arr[idx];
}

template<typename T>
unsigned int Array<T>::size()const
{
	return n;
}

#endif