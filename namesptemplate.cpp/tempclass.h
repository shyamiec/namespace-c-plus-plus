#pragma once
/* global namespace */
namespace temp1
{
	template<class T>class tempclass
	{
	private:
		T b;
	public:
		tempclass(T e1)
		{
			b = e1;
		}
		T subtract(T e2)
		{
			T sub;
			if (b > e2)
				sub = b - e2;
			else
				sub = e2 - b;
			return sub;
		}
	};

}