#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
class Array
{
	private:
		T* _array;
		unsigned int	_size;

	public:
		Array(void):_size(0), _array(NULL){}

		Array(unsigned int n):_size(n)
		{
			if (n > 0)
				this->_array = new T[n];
			else
				this->_array = NULL;
		}

		Array(const Array& cp):_size(cp._size)
		{
			int s = const_cast<Array&>(cp).size();
			if (s > 0)
			{
				this->_array = new T[s];
				int i = 0;
				while (i < s)
				{
					this->_array[i] = const_cast<Array&>(cp)[i];
					i++;
				} 
			}
			else
				this->_array = NULL;
		}

		Array& operator=(const Array& cp)
		{
			this->_size = cp.size();
			if (cp.size() > 0)
			{
				this->_array = new T[cp.size()];
				int i = 0;
				while (i < cp.size())
				{
					this->_array[i] = cp[i];
					i++;
				} 
			}
			else
				this->_array = NULL;
		}

		~Array(void)
		{
			delete[] this->_array;
		}

		T&	operator[](int i)
		{
			if (i < 0 || i > static_cast<int>(this->_size) - 1)
				throw(WrongIndex());
			else
				return (this->_array[i]);
		}

		class WrongIndex: public std::exception
		{
			const char* what(void) const throw()
			{
				return ("Array: Index out of range");
			}
		};

		unsigned int	size(void)
		{
			return (this->_size);
		}
};

#endif