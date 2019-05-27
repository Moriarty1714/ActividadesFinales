#include "DynArray.h"

DynArray::DynArray() {
	data = new int[DYN_ARRAY_DEFAULT_SIZE];
}// constructs the array by default

DynArray::DynArray(int _size) {
	data = new int[_size];
}// creates the array with a defined size

DynArray::DynArray(int _size, int value) {
	data = new int[_size];
	for (int i = 0; i < 0; i++) {
		data[i] = value;
	}
}	// creates and initializes the elements of the array with a value

DynArray::DynArray(int* arr, int _size) {
	data = new int[_size];
	for (int i = 0; i < 0; i++) {
		data[i] = arr[i];
	}
}// copy contructor

#pragma endregion

#pragma region Iterator functions
	// iterator functions
int*DynArray::begin() {
	int* x;
	x = &data[0];
	//return x;

	return (&data[0]); //???
}// returns an iterator(pointer) to the first element

int*DynArray::end() {
	int* x;
	x = &data[0];
	//return x;

	return (&data[0]); //???
}// returns an iterator(pointer) to the last element

#pragma endregion

#pragma region Capacity functions
	// capacity functions
void DynArray::resize(int n) {

}// resizes the array so that it contains n elements

void DynArray::reserve(int n) {

}// requests the capacity to be at least enough to contain n elements

void DynArray::shrink() {

}// requests the array to reduce its capacity to fit its size

bool DynArray::empty() {

}// returns whether the array size is 0 or not

int DynArray::maxSize() {

}// returns the maximum number of elements that the array can hold

#pragma endregion

#pragma region Element access functions
	// element access functions
int& DynArray::operator[]	(int n) {

}// returns a reference to the element at position n in the array

int& DynArray::front() {

}// returns a reference to the first element in the array

int& DynArray::back() {

}// returns a reference to the last element in the array

#pragma endregion

#pragma region Modifiers functions
	// modifiers functions	
void DynArray::push(int val) {

}	// adds a new element at the end of the array, after its current last element

void DynArray::pop() {

}	// removes the last element effectively reducing the array size by one

void DynArray::insert(int position, int val) {

}	// a new element is inserted before the element at the specified position

void DynArray::erase(int position) {

}// removes from the array a single element

void DynArray::erase(int first, int last) {

}// removes from the array a range of elements

void DynArray::clear(){ 

}// removes all elements from the array leaving it with a size of 0

#pragma endregion

#pragma region Utils functions	
// utils functions
void DynArray::fill(int *first, int *last, int value) {

}// assigns the given value to the elements in the range [first, last)

void DynArray::copy(int *first, int *last, int *dest) {

}// copies all elements in the range [first, last) to dest

void DynArray::print() {

}// print the array
#pragma endregion