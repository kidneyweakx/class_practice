#ifndef CAR_H
#define CAR_H


class Car
{
public:
	Car();
	Car(char _brand[], int _num);
	Car(const Car& the_object);
	~Car();

	void operator=(const Car& the_object);
	void output();

private:
	char* Brand;
	int NumOfDoors;
};

#endif
