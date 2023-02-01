#include <stdint.h>
#include <iostream>

struct Data 
{
	int data;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data		data;
	uintptr_t	serialized_data;
	Data*		deserialized_data;

	data.data = 123;
	std::cout << "--------------------------" << std::endl;
	std::cout << &data << std::endl;
	std::cout << data.data << std::endl;
	std::cout << "--------------------------" << std::endl;
	serialized_data = serialize(&data);
	std::cout << serialized_data << std::endl;
	deserialized_data = deserialize(serialized_data);
	std::cout << "--------------------------" << std::endl;
	std::cout << deserialized_data << std::endl;
	std::cout << deserialized_data->data << std::endl;
	return (0);
}
