#include <iostream>
#include <string>
#include<vector>

using namespace std;

struct Sales_data  {


	std::string  isbn() const {
		  
		return  bookNo;
	
	}   //函数返回
/*
    std::string  isbn() const{
	
		return  this->bookNo;
	} 

*/


	Sales_data& combine(const Sales_data&);//这个其实赋值变量

	double avg_price() const;//定义avg_price


	string  bookNo;
	unsigned units_sold = 0;
	double  revenue = 0.0;


};
//Sales_data 的非接口函数
Sales_data  add(const Sales_data&, const Sales_data&);
Sales_data  &print(std::ostream&, const Sales_data&);
Sales_data  &red(std::istream&, Sales_data&);
//定义在类内部的函数 是隐式的inline 函数
//引用this 
//引入const成员函数
//const 的作用是修改隐式this指针的类型 默认情况下 this的类型是指向类类型非常量版本的常量指针
//常量成员函数
//类作用域  成员函数  类本身就是一个作用域 类的成员函数的定义嵌套在类的作用域之内
//编译器  分两部处理类  首先编译成员的声明  然后 处理成员函数体
//在类的外部定义成员函数 在外部定义成员函数时 成员函数的定义必须与它的声明匹配
//我们定义一个名为avg_price的函数 并且该函数被声明在类sales_data的作用域内
//当avg_price 使用revenue 和units_sold 实际上它隐式地使用了Sales_data的成员
double  Sales_data::avg_price() const {
	if (units_sold) {

		return  revenue / units_sold;
	}
	else {
	
		return 0;
	}
	

}

//定义返回一个this对象的函数
Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;

	return *this;

}
//
struct Sales_data{

	std::string  isbn() const {
		return  bookNo;

	}
	Sales_data& combine(const Sales_data&);

	std::string bookNo;
	unsigned units_sold = 0;
	double   revenue = 0.0;


};

Sales_data& Sales_data::combine(const Sales_data& rhs) {
	units_sold += rhs.units_sold;

	revenue += rhs.revenue;

	return *this;



}

struct Person{

	std::string name;
	std::string address;
  


};


struct Person {
	std::string name;
	std::string address;

	std::string getname() const {
		return name;
	}

	std::string getadd() const {
	
		return  address;
	}


};

//如果 函数

//访问控制与封装
//关键字 public  private

class Sales_data {
public:
	Sales_data() = default;
	Sales_data(const std::string &s, unsigned n, double  p) :bookNo(s), units_sold(n), revenue(p*n) {
	
	}
	Sales_data(const std::string &s) :bookNo(s) {
	
	}
	Sales_data (std::istream&);
	std::string isbn() const {
		return  bookNo;

	}
	Sales_data &combine(const  Sales_data&);
	


private:
	double  avg_price() const {
	
		return  units_sold ? revenue / units_sold : 0;
	}
	std::string  bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;








};

//当我们希望定义的类的所有的成员是public的时候 使用struct  如果希望成员是private 使用class
//7.21 友元 
//每个类都分别定义了它的对象的初始化的方式 类通过一个或几个特殊的成员函数来控制其对象的初始化过程 这个函数叫做构造函数
/*
 类可以允许其他类或者函数访问它的非公有成员 方法是其他类或者函数成为它的友元friend

 如果一个累想把一个函数作为它的友元 只需要增加一条以friend为关键字开头的函数声明语句即可
*/

class Sales_data {
	friend Sales_data add(const  Sales_data&, const Sales_data&);
	friend std::istream &read(std::istream, Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);



};
/*
一般来说 最好在类定义开始 或者结束前 的位置集中声明友元
*/
/*
类的其他特性 


*/
class Screen {
public  :
	typedef  std::string::size_type pos;

private:
	pos  cursor = 0;
	pos  height = 0, width = 0;

	std::string contents;




};
/*
  返回 *this
  接下来 我们继续添加一些函数  

   
  
  
  
 */


class  Screen {



public :
	using pos = std::string::size_type;
	Screen &set(char);
	Screen &set(pos, pos, char);


};

inline Screen  &Screen::set(char c) {
	contents[cursor] = c;

	return  *this;//将this对象作为左值返回


}
inline Screen &Screen::set(pos r, pos col, char ch) {



}
//7.3.3 类类型
/*
每个类定义了唯一的类型
我们可以把类名作为类型的名字使用
Sales_data  item1;
class Sales_data item1;
*/
class Link_screen {
	Screen  window;
	Link_screen  *next;
	Link_screen  *prev;

};

/*
类可以把其他的类定义成友元
*/
class  Screen {

	friend  class  Window_mgr;


};

class  Window_mgr {

	using  ScreenIndex = std::vector<Screen>::size_type;

	void  clear(ScreenIndex);

	private:   
		std::vector<Screen> screens{ Screen{24,80,''} };



};
void  Window_mgr::clear(ScreenIndex i) {

	Screen &s = screens[i];

	s.contents = string(s.height*s.width, '');


}

/*
	友元关系不存在传递性 也就是说 如果window_mgr有他自己的友元  这些友元 并不能理解screen 的特权

*/