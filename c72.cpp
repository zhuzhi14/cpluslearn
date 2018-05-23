/*
  构造函数初始化列表
  构造函数的初始值有时候必不可少

  委托构造函数
  默认构造函数的作用
  Sales_data obj();
  Sales_data obj2;//正确
  隐式的类类型转换
  只允许一步类 类型转换
  类类型转换不是总有效
  一直构造函数定义的隐式转换  explicit 

  8.1.1  
  IO对象无拷贝和赋值
  管理条件状态 

  流对象的rdstate成员返回一个iostate值  对应流的当前状态
  管理输出缓冲 
  每一个输出流都管理一个缓冲区

  输出刷新缓冲区 

  我们已经使用过endl  还有 flush  ends

  如果程序崩溃 输出缓冲区 不会被刷新

  8.2

  文件输入输出 
  头文件 fstream  定义了 三个类型来支持文件IO:ifstream 从一个给定文件读取数据
  ifstream
  ofstream
  fstream
  
  使用文件流 对象 
  fstrm.open(s)
  fstrm.close()
  fstrm.is_open()

  使用文件流对象 

  容器库概览 

  顺序容器 几乎可以保存任意类型的元素
  list<Sales_data> //双向链表  保存sales_data对象的list

  deque<double>//双端队列  保存double 的deque

  假定nodefault 是一个没有默认构造函数的类型

  vector<nodefault> v1(10,init)//提供了元素初始化器
  vector<nodefault> v2(10)  错误必须提供一个元素初始化器 

  std::list<std::deque<int>>
  
  9.2.1 迭代器 

  forward_list  迭代器 不支持递减运算符--
  一个迭代器范围 iterator  range 由一对迭代器表示  两个迭代器分别指向同一个容器中的元素或者尾元素
  之后的位置  
  这两个迭代器 通常被称为 begin 和 end

  迭代器范围中的元素包含first所表示的元素以及从first开始直到last 但是不包含last 之间的所有元素
  使用左闭合范围蕴含的编程假定

  auto  contains(vector<int>::const_iterator  first,vector<int>::const_iterator last ,int value){
	   for(;first!=last;++first){
		  if(*first==value){
			return true;
		  }
		  return false;
	   }
  
  
  }

  auto find(vector<int>::const_iterator first,vector<int>::const_iterator last,int  value){
  
	     for(;first!=last;++first){
			 if(*first==value){
				 return  first;
			 }

			 return last
			
		 }
  
  
  }

  9.2  容器 类型成员

  每个容器都定义了多个类型  我们已经使用过其中三种  size_type   iterator  const_iterator  还有反向迭代器

  如果需要元素类型的一个引用 可以使用reference

   list<string>::iterator  iter  iter 是通过list<string>定义的一个迭代器类型

   vector<int>::difference_type  count  是通过

   vector<int>::size_type
   list<string>::const_iterator  读
   list<string>::iterator  写

   begin 和end 成员

*/

