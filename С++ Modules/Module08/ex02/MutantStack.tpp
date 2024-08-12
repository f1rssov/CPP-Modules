template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() {}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack<T, Container> const &src)
{
	*this = src;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(MutantStack<T, Container> const &rhs)
{
	if (this != &rhs)
		this->c = rhs.c;
	return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}