/*
  ���캯����ʼ���б�
  ���캯���ĳ�ʼֵ��ʱ��ز�����

  ί�й��캯��
  Ĭ�Ϲ��캯��������
  Sales_data obj();
  Sales_data obj2;//��ȷ
  ��ʽ��������ת��
  ֻ����һ���� ����ת��
  ������ת����������Ч
  һֱ���캯���������ʽת��  explicit 

  8.1.1  
  IO�����޿����͸�ֵ
  ��������״̬ 

  �������rdstate��Ա����һ��iostateֵ  ��Ӧ���ĵ�ǰ״̬
  ����������� 
  ÿһ�������������һ��������

  ���ˢ�»����� 

  �����Ѿ�ʹ�ù�endl  ���� flush  ends

  ���������� ��������� ���ᱻˢ��

  8.2

  �ļ�������� 
  ͷ�ļ� fstream  ������ ����������֧���ļ�IO:ifstream ��һ�������ļ���ȡ����
  ifstream
  ofstream
  fstream
  
  ʹ���ļ��� ���� 
  fstrm.open(s)
  fstrm.close()
  fstrm.is_open()

  ʹ���ļ������� 

  ��������� 

  ˳������ �������Ա����������͵�Ԫ��
  list<Sales_data> //˫������  ����sales_data�����list

  deque<double>//˫�˶���  ����double ��deque

  �ٶ�nodefault ��һ��û��Ĭ�Ϲ��캯��������

  vector<nodefault> v1(10,init)//�ṩ��Ԫ�س�ʼ����
  vector<nodefault> v2(10)  ��������ṩһ��Ԫ�س�ʼ���� 

  std::list<std::deque<int>>
  
  9.2.1 ������ 

  forward_list  ������ ��֧�ֵݼ������--
  һ����������Χ iterator  range ��һ�Ե�������ʾ  �����������ֱ�ָ��ͬһ�������е�Ԫ�ػ���βԪ��
  ֮���λ��  
  ������������ ͨ������Ϊ begin �� end

  ��������Χ�е�Ԫ�ذ���first����ʾ��Ԫ���Լ���first��ʼֱ��last ���ǲ�����last ֮�������Ԫ��
  ʹ����պϷ�Χ�̺��ı�̼ٶ�

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

  9.2  ���� ���ͳ�Ա

  ÿ�������������˶������  �����Ѿ�ʹ�ù���������  size_type   iterator  const_iterator  ���з��������

  �����ҪԪ�����͵�һ������ ����ʹ��reference

   list<string>::iterator  iter  iter ��ͨ��list<string>�����һ������������

   vector<int>::difference_type  count  ��ͨ��

   vector<int>::size_type
   list<string>::const_iterator  ��
   list<string>::iterator  д

   begin ��end ��Ա

*/

