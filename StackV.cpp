#include "StackV.h"


int Stack::size(){
	
	return data.size();
}

void Stack::push(int a){
	
	data.push_back (a);
	
	}

void Stack::pop(){
	
	data.pop_back();
	
	}

int Stack::top(){
	
	
	return data[data.size()-1];
	
	}

void Stack::clear(){}
