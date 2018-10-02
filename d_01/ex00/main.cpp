#include "Pony.hpp"

static void	ponyOnTheHeap(void) {
	Pony	*hucul = new Pony();

	hucul->setName("Hucul");
	hucul->setColor("Brown");
	hucul->setBreed("Hucul Pony");
	hucul->setAge(1);
	hucul->setHeight(130);

	std::cout << "Name  : " << hucul->getName() << std::endl;
	std::cout << "Color : " << hucul->getColor() << std::endl;
	std::cout << "Breed : " << hucul->getBreed() << std::endl;
	std::cout << "Age   : " << hucul->getAge() << std::endl;
	std::cout << "Height: " << hucul->getHeight() << " cm" << std::endl;
	delete (hucul);
}

static void	ponyOnTheStack(void) {
	Pony	shety;

	shety.setName("Shety");
	shety.setColor("Black");
	shety.setBreed("Shetland Pony");
	shety.setAge(3);
	shety.setHeight(89);

	std::cout << "Name  : " << shety.getName() << std::endl;
	std::cout << "Color : " << shety.getColor() << std::endl;
	std::cout << "Breed : " << shety.getBreed() << std::endl;
	std::cout << "Age   : " << shety.getAge() << std::endl;
	std::cout << "Height: " << shety.getHeight() << " cm" << std::endl;
}

int		main(void) {
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}
