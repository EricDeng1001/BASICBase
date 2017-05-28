#ifndef _SORT_H_
#define _SORT_H_

#include "loop.h"
#include <stdlib.h>

namespace Antinus{

	template <class T>
	class sorter{
	private:
		T* base;
		unsigned int num_of_element;
	public:
		void load(T* base,unsigned int num_of_element);
	public:
		void sort_up(void);
		void sort_down(void);
	public:
		template<class Z>
		void sort_up_by(Z* base,unsigned int num_of_element);
		template<class Z>
		void sort_down_by(Z* base,unsigned int num_of_element);
	public:
		T* dump();
	};

}


#include "sort.inl"
#define sort sort_up
#define sort_by sort_up_by

#endif