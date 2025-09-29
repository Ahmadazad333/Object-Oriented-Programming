#include"Circle.h"
#include"Triangle.h"
#include"CDDrive.h"
#include"CompactDisc.h"
using namespace std;

void strcopy(char arr[], const char temp[]) {
	while (*temp) {
		*arr = *temp;
		arr++;
		temp++;
	}
	*arr = '\0';
}

//<-------------------------------------------------------------------------------------------------->
Triangle::Triangle(int x1 = 0, int x2 = 0, int x3 = 0, int y1 = 0, int y2 = 0, int y3 = 0) :x(x1, y1), y(x2, y2), z(x3, y3) {
	cout << "\tTriangle() Called\t\n";
}
Triangle::~Triangle() {
	cout << "\t~Triangle() Called\t\n";
}
void Triangle::Print() {
	cout << "x: ";x.Print();
	cout << "y: ";y.Print();
	cout << "z: ";z.Print();
}
//<-------------------------------------------------------------------------------------------------->
Style::Style(const char color[] = "Black", bool isFilled = false) {
	cout << "\tStyle() Called\t\n";
	this->isFilled = isFilled;
	strcopy(this->color, color);
}
Style::~Style() {
	cout << "\t~Style() Called\t\n";
}
void Style::setColor(const char* color) {
	strcopy(this->color, color);
}
void Style::setIsFilled(const bool IsFilled) {
	this->isFilled = IsFilled;
}
void Style::Print() {
	cout << "Color: " << color << "\n";
	cout << "Is Filled: " << isFilled << "\n";
}
//<-------------------------------------------------------------------------------------------------->
Point::Point(const int x = 0, const int y = 0) {
	cout << "\tPoint() Called\t\n";
	this->x = x;
	this->y = y;
}
Point::~Point() {
	cout << "\t~Point() Called\t\n";
}
void Point::Print() {
	cout << "(" << x << "," << y << ")\n";
}
//<-------------------------------------------------------------------------------------------------->
Circle::Circle(const int x = 0, const int y = 0, const float radius = 0.0, const char color[] = "Black", const bool isFilled = false) : center(x, y), st(color, isFilled) {
	cout << "\tCircle() Called\t\n";
	this->radius = radius;
}
Circle::~Circle() {
	cout << "\t~Circle() Called\t\n";
}
void Circle::Print() {
	cout << "Center: ";center.Print();
	cout << "Radius: " << radius << "\n";
	st.Print();
}
void Circle::setStyle(const Style& st) {
	this->st = st;
}
void Circle::setColor(const char color[]) {
	st.setColor(color);
}
void Circle::setIsFilled(const bool isFilled) {
	st.setIsFilled(isFilled);
}
//<-------------------------------------------------------------------------------------------------->
CDDrive::CDDrive(const char Manufacturer[], const int speed) {
	cout << "\tCDDrive() Called\t\n";
	this->speed = speed;
	strcopy(this->Manufacturer, Manufacturer);
	aCompactDisc = nullptr;
}
CDDrive::~CDDrive() {
	cout << "\t~CDDrive() Called\t\n";
}
void CDDrive::InsertCD(CompactDisc aCompactDisc) {
	this->aCompactDisc = &aCompactDisc;
}
void CDDrive::Play() {
	if (aCompactDisc) {
		cout << "Title: ";aCompactDisc->getTitle();
		cout << "Capacity: ";aCompactDisc->getCapacity();
	}
	else {
		cout << "Please Insert a CD\n";
	}
}
CompactDisc* CDDrive::EjectCD() {
	if (aCompactDisc == nullptr) {
		return nullptr;
	}
	CompactDisc* temp = aCompactDisc;
	aCompactDisc = nullptr;
	return temp;
}
//<-------------------------------------------------------------------------------------------------->
CompactDisc::CompactDisc(const char title[] = "Black", const int capacity = 0) {
	cout << "\tCompactDisc() Called\t\n";
	this->capacity = capacity;
	strcopy(this->title, title);
}
CompactDisc::~CompactDisc() {
	cout << "\t~CompactDisc() Called\t\n";
}
const char* CompactDisc::getTitle() {
	return title;
}
const int CompactDisc::getCapacity() {
	return capacity;
}
void main() {
	Circle c(3, 4, 2.5,"Black", true);
	c.Print();
	//Point() Called
	//	Circle() Called
	//	Center : (3, 4)
	//	Radius : 2.5
	//	Point() Called
	//	Point() Called

	Triangle obj(1, 0, 0, 0, 1, 0);
	obj.Print();


	//Output
	//Point() Called
	//	Circle() Called
	//	Center : (3, 4)
	//	Radius : 2.5
	//	Point() Called
	//	Point() Called
	//	Point() Called
	//	Triangle() Called
	//	x : (1, 0)
	//	y : (0, 1)
	//	z : (0, 0)
	//	~Triangle() Called
	//	~Point() Called
	//	~Point() Called
	//	~Point() Called
	//	~Circle() Called

	CompactDisc cd1("Sharukh Khan", 50);
	CompactDisc cd2("Salman Khan", 50);
	CDDrive theCDDrive("BlockBusters", 100);
	theCDDrive.InsertCD(cd1);
	theCDDrive.Play();
	theCDDrive.EjectCD();
	theCDDrive.Play();
	theCDDrive.InsertCD(cd1);
	theCDDrive.Play();
	theCDDrive.EjectCD();
}