#include <iostream>
#include <vector>
#include <memory>




int main() 
{
	// C++ 14 make_unique 함수 
	auto ptr = std::make_unique<A>(5);

	// unique_ptr을 원소로 가지는 컨테이너 
	std::vector<std::unique_ptr<A>> vec; 
	
	std::unique_ptr<A> a(new A(10));

	// vec.push_back(a); -> 무시무시한 오류 발생 
	// 결국 unique_ptr은 유일한 소유권(복사생성자 x)을 의미하므로 push_back이 불가능하다 

	// std::move 를 사용해서 소유권을 이전한다. 
	vec.push_back(std::move(a));

	// emplac_back 의 경우에는 unique_ptr 의 생성자를 넣어줘야하므로 
	//vec.emplace_back(5); <- 이런 경우는 오류가 발생한다. 
	vec.emplace_back(new A(5));

	return 0; 
}