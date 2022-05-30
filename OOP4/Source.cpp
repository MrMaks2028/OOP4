#include <iostream>
#include <memory>
#include <vector>
#include <chrono>
using namespace std;

void f00(int* pf) {

}

int main() {
	setlocale(LC_ALL, "Russian");
	//int* p;
	///*auto_ptr<int> p_auto;
	//unique_ptr<int> p_uniq;
	//shared_ptr<int> p_share;
	//weak_ptr<int> p_weak;*/

	//auto p_uniq_int = make_unique<int>(7);

	//cout << *p_uniq_int;

	vector<int> collection(1000000);
	collection.push_back(1);
	collection.insert(collection.begin(), 2);
	/*for (const auto& el : collection) {
		cout << el << ' ';
	}
	for (vector<int>::const_iterator it = collection.cbegin();
		it != collection.cend();
		++it) {
		cout << *it << ' ';
	}
	for (auto& el : collection) {
		cout << el << ' ';
	}*/
	auto start = chrono::system_clock().now();
	for (vector<int>::iterator it = collection.begin();
		it != collection.end();
		it++) {
		it;
		/*cout << *it << ' ';*/  
	}

	cout << endl << (start - chrono::system_clock().now()).count();

	return 0;
}