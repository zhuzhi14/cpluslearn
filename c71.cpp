#include <iostream>
#include <string>
#include<vector>

using namespace std;

struct Sales_data  {


	std::string  isbn() const {
		  
		return  bookNo;
	
	}   //��������
/*
    std::string  isbn() const{
	
		return  this->bookNo;
	} 

*/


	Sales_data& combine(const Sales_data&);//�����ʵ��ֵ����

	double avg_price() const;//����avg_price


	string  bookNo;
	unsigned units_sold = 0;
	double  revenue = 0.0;


};
//Sales_data �ķǽӿں���
Sales_data  add(const Sales_data&, const Sales_data&);
Sales_data  &print(std::ostream&, const Sales_data&);
Sales_data  &red(std::istream&, Sales_data&);
//���������ڲ��ĺ��� ����ʽ��inline ����
//����this 
//����const��Ա����
//const ���������޸���ʽthisָ������� Ĭ������� this��������ָ�������ͷǳ����汾�ĳ���ָ��
//������Ա����
//��������  ��Ա����  �౾�����һ�������� ��ĳ�Ա�����Ķ���Ƕ�������������֮��
//������  ������������  ���ȱ����Ա������  Ȼ�� �����Ա������
//������ⲿ�����Ա���� ���ⲿ�����Ա����ʱ ��Ա�����Ķ����������������ƥ��
//���Ƕ���һ����Ϊavg_price�ĺ��� ���Ҹú�������������sales_data����������
//��avg_price ʹ��revenue ��units_sold ʵ��������ʽ��ʹ����Sales_data�ĳ�Ա
double  Sales_data::avg_price() const {
	if (units_sold) {

		return  revenue / units_sold;
	}
	else {
	
		return 0;
	}
	

}

//���巵��һ��this����ĺ���
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

//��� ����

//���ʿ������װ
//�ؼ��� public  private

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

//������ϣ�������������еĳ�Ա��public��ʱ�� ʹ��struct  ���ϣ����Ա��private ʹ��class
//7.21 ��Ԫ 
//ÿ���඼�ֱ��������Ķ���ĳ�ʼ���ķ�ʽ ��ͨ��һ���򼸸�����ĳ�Ա���������������ĳ�ʼ������ ��������������캯��
/*
 �����������������ߺ����������ķǹ��г�Ա ��������������ߺ�����Ϊ������Ԫfriend

 ���һ�������һ��������Ϊ������Ԫ ֻ��Ҫ����һ����friendΪ�ؼ��ֿ�ͷ�ĺ���������伴��
*/

class Sales_data {
	friend Sales_data add(const  Sales_data&, const Sales_data&);
	friend std::istream &read(std::istream, Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);



};
/*
һ����˵ ������ඨ�忪ʼ ���߽���ǰ ��λ�ü���������Ԫ
*/
/*
����������� 


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
  ���� *this
  ������ ���Ǽ������һЩ����  

   
  
  
  
 */


class  Screen {



public :
	using pos = std::string::size_type;
	Screen &set(char);
	Screen &set(pos, pos, char);


};

inline Screen  &Screen::set(char c) {
	contents[cursor] = c;

	return  *this;//��this������Ϊ��ֵ����


}
inline Screen &Screen::set(pos r, pos col, char ch) {



}
//7.3.3 ������
/*
ÿ���ඨ����Ψһ������
���ǿ��԰�������Ϊ���͵�����ʹ��
Sales_data  item1;
class Sales_data item1;
*/
class Link_screen {
	Screen  window;
	Link_screen  *next;
	Link_screen  *prev;

};

/*
����԰��������ඨ�����Ԫ
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
	��Ԫ��ϵ�����ڴ����� Ҳ����˵ ���window_mgr�����Լ�����Ԫ  ��Щ��Ԫ ���������screen ����Ȩ

*/