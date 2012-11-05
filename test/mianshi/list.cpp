//后面再写一个main 来测试自己写的这些
template <class T>
struct list_node
{
	list_node<T> * prev;
	list_node<T> * next;
	T data;
}
template <class T>
struct list_iterator
{
	list_node<T> * node;
}
template <class T>
class list
{
typedef list_iterator<T> iterator;
private:
	list_node<T> * node;
	void transfer (iterator position, iterator first, iterator last)
	{
		if (position != last)
		{
			((position.node).prev).next = first.node;
			((first.node).prev).next = (last.node).next;
			((last.node).next).prev = (first.node).prev;
			(first.node).prev = (position.node).prev;
			(last.node).next = position.node;
			(position.node).prev = last.node;
		}
	}
public:
	void reverse
}

template <class T>
struct const_list_iterator
{

}
