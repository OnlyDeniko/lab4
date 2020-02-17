#include<iostream>
#include<string>
#include<algorithm>
#include"Queue.h"
#include<chrono>
#include<ctime>
#include<random>
#include<cassert>
#include<vector>

using namespace std;

int main() {
	list kek;
	kek.insert(1);
	kek.insert(2);
	kek.del(1);
	
	cout << kek;
	return 0;
}