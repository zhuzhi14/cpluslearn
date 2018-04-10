#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;

using  namespace  std;

int fat(int val) {

	int  ret = 1;
	while (val > 1)
		ret *= val--;

	return ret;
}

void  change(int *p, int *q) {

	int tmp;
	tmp = *p;

	*p = *q;
	*q = tmp;
}


void  ichange(int &p, int &q) {
	
	int tmp;

	tmp = p;
	p = q;
	q = tmp;


}



void  reset(int &i) {

	i = 0;

}


bool  isda( const string &str) {

	for (auto sc : str) {
		if (isupper(sc)) {
			return true;
		}
		else {
			return  false;
		}
	}

	return false;
 
}


void  isxiao(string &str) {
	for (auto &sc : str) {
	//引用修改
		sc= tolower(sc);
	
	}
	
}


int main() {
	/*
	vector<string> cs;
	string  ss;
	char x;
	//const char y = 'y';

	while (cin >> ss) {

		cs.push_back(ss);
		cout << "你要继续吗y or n" << endl;
		while (cin >> x) {
			if (x == 'y') {
				break;
			}

		}

	
	}

	for (auto c : cs) {
	
		
		cout << c << "";
	
	}

	cout << endl;
	

	vector <int> v{ 1,2,3,4,5 };
	for (auto &i : v) {
	
		i *= i;
	}

	for (auto i:v) {

		cout << i << "";
	
	
	}

	cout << endl;
	
	vector <int> cs{ 1,2,3,4,5,6,7,8 };
	vector <int> result;


	for (decltype(cs.size()) i = 0; i < cs.size(); i++) {
	
		if (i < cs.size()/2) {
			result.push_back(cs[i] + cs[cs.size() - i-1]);
		}
		else {
			break;
		
		}
		
	
	
	}

	for (auto c : result) {
	
		cout << c << "";
	
	}

	cout << endl;
	cout << cs.size() << endl;

	
//迭代器 
	string s("some  string");

	if (s.begin() != s.end()) {
	
		auto it = s.begin();
		*it = toupper(*it);
	
	}

	cout << s << endl;
//c初始化  然后不能余尾迭代器  不是空 然后就++
	for (auto c = s.begin(); c != s.end(); ++c) {
	
		*c = toupper(*c);
	
	}

	cout << s << endl;

	

	vector<int> v1{ 1,2,3,4,5,6 };

	//第一
	for (auto c = v1.begin(); c != v1.end(); ++c) {
	
	//得到平方  
		*c *= 2;
	
	}

	for (auto c1: v1) {
	
		cout << c1 << "";
	}


	cout << endl;

	

vector<int> v1{ 1,2,3,4,5,6,7,10,23 };

auto beg = v1.begin();
auto  end = v1.end();
auto mid = v1.begin()+v1.size()/2;

vector<int> v2;

while (mid != end) {

	end--;
	v2.push_back(*beg + *end);
	beg++;
	
  
}

for (auto v : v2){
	cout << v << "";
}



cout << endl;


int arr[5] = { 1,2,3,4,5 };
auto n = end(arr) - begin(arr);

  char ca[] = { 'h','e','l','l','o' };

  auto nc = end(ca);
char *cp = ca;

while (cp!=nc) {

	cout << *cp << endl;
	++cp;

}


char arr[10] = "hello";

char  arr2[10] = "test";

char  arr3[20];

strcpy_s(arr3, arr);

strcat_s(arr3, " ");

strcat_s(arr3, arr2);



	cout << arr3 << endl;


//使用 数组初始化vector 对象 格式 

int int_arr[] = { 0,1,2,3,4,5 };


vector <int> sun (int_arr, int_arr + 6);

for (auto c : sun) {

	cout << c << endl;

}



//多维数组  实际上是数组的数组

int  ia[3][4] = { { 1 }, { 4 }, {8} };
int   (*p)[4] = ia ;

		for (auto &row : ia) {
		
			for (auto col : row) {
			
				cout << col << endl;
			}
		
		}

for (auto p = ia; p != ia + 3; ++p) {

	for (auto q = *p; q != *p + 4; ++q) {

		cout << *q << "";

	}

}

//下标运算符 

for (size_t i = 0; i != 3; i++) {

	for (size_t j = 0; j != 4; j++) {
	
	
		cout << ia[i][j] << "";
	
	}



}


using  int_array = int[4];//int_array 就是类型别名
typedef  int int_array[4];//2中写法 typedef  using  int_array 是int 的别名


	

for (int_array *p = ia; p != ia + 3; ++p) {

	for (int *q = *p; q != *p + 4; ++q) {
	
		cout << *q << "";
		cout << endl;
	
	
	}




}





     vector<int> cs{1, 2, 3, 4, 5};

	

	 for (auto &c : cs) {


		 c=(c % 2) ?c:(c*2);

	 }


	 for (auto c : cs) {
	 
	 
		 cout << c << endl;
	 
	 }

	

string  str1, str2;

do {
	cout << "请输入字符串" << endl;
	cin >> str1;
	if (str1 == str2) {
		cout << "没有单词能够重复" << endl;

		break;
		       
	}
	else {
	
		str2 = str1;
	
	
	}




} while (cin);



string  str1, str2,max_r;
vector <string> vec1;
vector <int> vec2;
int  max_num = 1;

while (cin >> str1) {
	//重复字  +1
	if (str1 == str2) {
		++max_num;
	
	
	}
	else {
	 //不重复的时候 后面的那个值代替前面那个  
		vec2.push_back(max_num);

		max_num = 1;

		str2 = str1;

		vec1.push_back(str1);
	

	
	}

}
vec2.push_back(max_num);
for(auto d:vec2) {
	cout << d << endl;
}

for (auto e : vec1) {

	cout << e << endl;

}




//找到最大的值
int   a= 0;

for (auto it1 = vec2.begin(); it1 != vec2.end(); ++it1) {
	if (*it1 > a) {
	    
		a = *it1;
	
	}

}

cout << a << endl;
for (int c = 0; c < vec2.size();c++) {
//如何最大值相等
	if (vec2[c] == a) {
	
		cout << "单词"<<vec1[c-1] <<"出现的次数"<< vec2[c] << endl;
	
	}


}

*/
  
int a = 10;

int j = fat(3);

//change(&a, &j);

//cout << j << endl;
//cout << a << endl;

//reset(j);

//cout << j << endl;

string hello("hello world");

cout << isda(hello) << endl;

isxiao(hello);

cout << hello << endl;

//bool compare(matrix &m1, matrix &m2);
//bool  compare(matrix &m1, matrix &m2);
vector<int>::iterator change_val(int, vector<int>::iterator);




}

