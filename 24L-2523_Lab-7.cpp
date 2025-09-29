//#include<iostream>
//#include<fstream>
//using namespace std;
//class Helper
//{
//public:
//	static int StringLength(char* str)
//	{
//		int length = 0;
//		if (str)
//			while (str[length] != '\0') length++;
//		return length;
//	}
//	static void StringCopy(char*& dest, const char* src)
//	{
//		int i;
//		for (i = 0; src[i] != '\0'; i++)
//		{
//			dest[i] = src[i];
//		}
//		dest[i] = '\0';
//	}
//	static char* GetStringFromBuffer(char* str)
//	{
//		int length = StringLength(str);
//		char* newStr = new char[length + 1];
//		StringCopy(newStr, str);
//		return newStr;
//	}
//};
//class Car
//{
//private:
//	static int totalCars; // initialize it to zero yourself
//	int model;
//	char* make;
//	char* name;
//	char* color;
//public:
//	Car()
//	{
//		model = 0;
//		color = make = name = 0;
//		totalCars++;
//	}
//	Car(const Car& rhs)
//	{
//		model = rhs.model;
//
//		this->make = Helper::GetStringFromBuffer(rhs.make);
//		this->name = Helper::GetStringFromBuffer(rhs.name);
//		this->color = Helper::GetStringFromBuffer(rhs.color);
//
//		totalCars++;
//	}
//
//	Car& operator=(const Car& rhs)
//	{
//		if (this == &rhs) return *this;
//
//		if (this->make) delete[] this->make;
//		if (this->name) delete[] this->name;
//		if (this->color) delete[] this->color;
//
//		this->model = rhs.model;
//
//		this->make = Helper::GetStringFromBuffer(rhs.make);
//		this->name = Helper::GetStringFromBuffer(rhs.name);
//		this->color = Helper::GetStringFromBuffer(rhs.color);
//
//		return *this;
//	}
//
//	void ReadDataFromFile(ifstream& fin)
//	{
//		char temp[20];
//		fin >> model;
//		fin >> temp;
//		make = Helper::GetStringFromBuffer(temp);
//		fin >> temp;
//		name = Helper::GetStringFromBuffer(temp);
//		fin >> temp;
//		color = Helper::GetStringFromBuffer(temp);
//	}
//	void PrintListView()
//	{
//		cout << model << " " << make << " " << name << " " << color << endl;
//	}
//	void PrintDetailView()
//	{
//		cout << "Car Information:\n";
//		cout << "Model: " << model << endl;
//		cout << "Make: " << make << endl;
//		cout << "Name: " << name << endl;
//		cout << "Color: " << color << endl;
//	}
//	~Car()
//	{
//		cout << "Destroying ";
//		PrintListView();
//		if (make) delete[] make;
//		if (name) delete[] name;
//		if (color) delete[] color;
//		totalCars--;
//	}
//	void Input()
//	{
//		char temp[70];
//		cout << "Enter New Car Information:\n";
//		cout << "Enter Model:\t";
//		cin >> this->model;
//		cout << "Enter Make:\t";
//		cin >> temp;
//		this->make = Helper::GetStringFromBuffer(temp);
//		cout << "Enter Name:\t";
//		cin >> temp;
//		this->name = Helper::GetStringFromBuffer(temp);
//		cout << "Enter Color:\t";
//		cin >> temp;
//		this->color = Helper::GetStringFromBuffer(temp);
//	}
//	static int GetTotalCars()
//	{
//		return totalCars;
//	}
//};
//
//int Car::totalCars = 0;
//Car* ReadDataFromFile(const char* fileName)
//{
//	ifstream fin;
//	int TotalCars = 0;
//	char buffer[80];
//	fin.open(fileName);
//	if (fin.is_open())
//	{
//		fin >> TotalCars;
//
//		//cout << buffer << endl;
//		Car* carsList = new Car[TotalCars];
//		int i = 0;
//		while (i < TotalCars)
//		{
//			carsList[i].ReadDataFromFile(fin);
//			i++;
//		}
//		return carsList;
//	}
//	else
//	{
//		return nullptr;
//	}
//}
//void main()
//{
//	//Comment all the code. Then uncomment it line by line.
//	//Implement/add functionality for uncommented line.
//	//Execute and verify result with output.
//	Car* carsList = ReadDataFromFile("CarsData.txt");
//	int x = 0;
//	if (carsList != 0)
//	{
//		x = Car::GetTotalCars(); //Calling static function
//		cout << "Total Number of Cars in System :  " << x << endl;
//
//		cout << "\nCars List : \n\n";
//		{
//			for (int i = 0; i < x; i++)
//			{
//				carsList[i].PrintListView();
//			}
//		}
//
//		cout << "\nCars List : \n\n";
//		{
//			Car temp = carsList[0];
//			temp.PrintListView();
//			for (int i = 1; i < x; i++)
//			{
//				temp = carsList[i];
//				temp.PrintListView();
//			}
//		}
//		if (carsList)
//			delete[] carsList;
//
//	}
//	cout << "Total Number of Cars in System :  " << Car::GetTotalCars() << endl << endl << endl;
//
//	Car testCar;
//	testCar.Input(); // Take car data from user
//	testCar.PrintDetailView();
//	cout << "Total Number of Cars in System :  " << testCar.GetTotalCars() << endl << endl << endl;
//}