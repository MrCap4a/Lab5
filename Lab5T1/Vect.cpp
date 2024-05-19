#include "Vect.h"

int length = 0;
std::list <int> VectData;

int Vect::get(int id){
	int i = 0;
	int res = 0;
	if (id < length) {
		for (int element : VectData) {
			if (i == id) {
				res = element;
				break;
			}
			else {
				i++;
			}
		}
	}
	else {
		cout << "index out of range";
	}

	return res;
}

int Vect::get_len() {
	return length;
}

void Vect::add(int element) {
	VectData.push_back(element);
	length += 1;
}

void Vect::del(int id) {
	if (id < length) {
		list <int> Vect2;
		int i = 0;
		for (int element : VectData) {
			if (i != id) {
				Vect2.push_back(element);
			}
			i++;
		}
		VectData = Vect2;
		length -= 1;
	}
	else {
		cout << "index out of range";
	}
}

void Vect::print() {
	for (int element : VectData) {
		cout << element << " ";
	}
}