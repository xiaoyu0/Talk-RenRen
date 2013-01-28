#include<iterator>
#include<vector>
#include<iostream>

using namespace std;

template<class RandomIterator>
void mySwap(RandomIterator first, RandomIterator second){
	typename RandomIterator::value_type temp;
	temp = *first;
	*first = *second;
	*second = temp;
}


template<class RandomIterator>
void insertion_sort(RandomIterator first, RandomIterator last){
	// additional space , O(1)
	typename RandomIterator::value_type current;
	for(RandomIterator it = first+1; it != last; it++){
		current = *it;
		for(RandomIterator it2 = it-1; it2 >= first; it2--){ //usr it-1 or it
			if(*it2 > current){
				*(it2+1) = *it2;
				if(it2 == first){
					*it2 = current;
					break;
				}
				continue;
			}
			*(it2+1) = current;
			break;
		}
	}
}

template<class RandomIterator>
void bubble_sort(RandomIterator first, RandomIterator last){
	int distance = last - first; //distance is the number of objects
	//here changed i is from 1 to distance , not 0 to distance-1, important
	for(int i = 1; i<=distance; i++){
		for(RandomIterator it = first; it != last-i; it++){ //every time , the biggest currently is on the most right
			if(*it > *(it+1)){
				mySwap(it, it+1);
			}
		}
	}
}

template<class RandomIterator>
void quick_sort(RandomIterator first, RandomIterator last){
	int distance = last - first;
	if(distance < 2){
		return;
	}
	cout << "quick_sort, size :" << last - first << endl;
	RandomIterator it = first;
	while(it != last){
		cout << *it << " ";
		it++;
	}
	cout << endl;
	//can swap first with any random for efficiency
	RandomIterator storeIt = first;
	RandomIterator pivoteIt = first;
	RandomIterator right = last-1;
	//typename RandomIterator::value_type pivote = *pivoteIt;
	for(RandomIterator it = first; it != last; it++){
		if(*it < *pivoteIt){
			mySwap(storeIt, it);
			storeIt++;
		}	
	}
	/*while(true){
		while((*(left) < *first) && left < last){
			left++;
		}
		while((*(right) > *first) && right > first){
			right--;
		}
		if(left < right){
			mySwap(left, right);
			continue;
		}
		break;
	}*/
	//???
	swap(pivoteIt, storeIt);
	
	it = first;
	while(it != last){
		cout << *it << " ";
		it++;
	}
	cout << endl;

	quick_sort(first, storeIt);
	quick_sort(storeIt+1, last);
}

template<class RandomIterator, class T>
RandomIterator binary_search(RandomIterator first, RandomIterator last, const T& value);
	
int main(){
	int myInts[] = {3,5,4,2,1,6,7,6,0,9,8};
	vector<int> vec(myInts, myInts+sizeof(myInts)/sizeof(int));
	cout << "before quick sort :";
	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
		cout << *it << "  ";
	}
	cout << endl;
	quick_sort(vec.begin(), vec.end());
//	bubble_sort(vec.begin(), vec.end());
//	insertion_sort(vec.begin(), vec.end());
	cout << "after quick sort :";
	for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
		cout << *it << "  ";
	}
	cout << endl;
	vector<int>::iterator it = binary_search(vec.begin(), vec.end(), 10);
	if(it != vec.end()){
		cout << "the number find:" << *it << endl;
	}else{
		cout << "no wanted number find " << endl;
	}
	cout << endl;
}

template<class RandomIterator, class T>
RandomIterator binary_search(RandomIterator first, RandomIterator last, const T& value){
	RandomIterator left = first;
	RandomIterator right = last;
	while(left < right){
		RandomIterator middle = left + ((right-left)>>1);
		if(*middle < value){
			left = middle+1;
		}else if(*middle > value){
			right = middle;
		}else{
			return middle;
		}
	}
	return last;
}
